// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.0.0
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/

#include "Component1_exec.h"
#include "tao/ORB_Core.h"
#include "ace/Reactor.h"

namespace CIAO_PartialShutdown_Component1_Impl
{
  /**
   * WriteTicker
   */

  WriteTicker::WriteTicker (Component1_exec_i &callback)
    : callback_ (callback)
  {
  }

  int
  WriteTicker::handle_timeout (const ACE_Time_Value &, const void *)
  {
    // Notify the subscribers
    this->callback_.write_all ();
    return 0;
  }

  /**
   * ReadTicker
   */

  ReadTicker::ReadTicker (Component1_exec_i &callback)
    : callback_ (callback)
  {
  }

  int
  ReadTicker::handle_timeout (const ACE_Time_Value &, const void *)
  {
    // Notify the subscribers
    this->callback_.read_all ();
    return 0;
  }

  /**
   * Facet Executor Implementation Class: comp_1_writer_exec_i
   */

  comp_1_writer_exec_i::comp_1_writer_exec_i (
        ::PartialShutdown::CCM_Component1_Context_ptr ctx,
        Component1_exec_i & callback)
    : ciao_context_ (
        ::PartialShutdown::CCM_Component1_Context::_duplicate (ctx))
      , callback_ (callback)
  {
  }

  comp_1_writer_exec_i::~comp_1_writer_exec_i (void)
  {
  }

  // Operations from ::PartialShutdown::Writer

  void
  comp_1_writer_exec_i::write_line (const char * line)
  {
    this->callback_.write_line (line);
  }

  /**
   * Facet Executor Implementation Class: comp_1_reader_exec_i
   */

  comp_1_reader_exec_i::comp_1_reader_exec_i (
        ::PartialShutdown::CCM_Component1_Context_ptr ctx,
        Component1_exec_i & callback)
    : ciao_context_ (
        ::PartialShutdown::CCM_Component1_Context::_duplicate (ctx))
      , callback_ (callback)
  {
  }

  comp_1_reader_exec_i::~comp_1_reader_exec_i (void)
  {
  }

  // Operations from ::PartialShutdown::Reader

  ::CORBA::StringSeq *
  comp_1_reader_exec_i::read_lines (void)
  {
    return this->callback_.read_lines ();
  }

  /**
   * Component Executor Implementation Class: Component1_exec_i
   */

  Component1_exec_i::Component1_exec_i (void)
  {
    ACE_NEW_THROW_EX (this->write_ticker_,
                      WriteTicker (*this),
                      ::CORBA::NO_MEMORY ());
    ACE_NEW_THROW_EX (this->read_ticker_,
                      ReadTicker (*this),
                      ::CORBA::NO_MEMORY ());
  }

  Component1_exec_i::~Component1_exec_i (void)
  {
    delete this->write_ticker_;
    delete this->read_ticker_;
    if (!::CORBA::is_nil (this->ciao_context_.in ()))
      {
        PartialShutdown::Reader_var read_from_comp_2 =
          this->ciao_context_->get_connection_read_from_comp_2 ();
        if (!::CORBA::is_nil (read_from_comp_2.in ()))
          {
            ACE_ERROR ((LM_ERROR, "Component1_exec_i::~Component1_exec_i - "
                      "ERROR: Read interface of component 2 still valid\n"));
          }
        else
          {
            ACE_DEBUG ((LM_DEBUG, "Component1_exec_i::~Component1_exec_i - "
                      "OK: Read interface of component 2 is not valid\n"));
          }
        PartialShutdown::Reader_var read_from_comp_3 =
          this->ciao_context_->get_connection_read_from_comp_3 ();
        if (!::CORBA::is_nil (read_from_comp_3.in ()))
          {
            ACE_ERROR ((LM_ERROR, "Component1_exec_i::~Component1_exec_i - "
                      "ERROR: Read interface of component 3 still valid\n"));
          }
        else
          {
            ACE_DEBUG ((LM_DEBUG, "Component1_exec_i::~Component1_exec_i - "
                      "OK: Read interface of component 3 is not valid\n"));
          }

        PartialShutdown::Writer_var writer_to_comp_2 =
          this->ciao_context_->get_connection_write_to_comp_2 ();
        if (!::CORBA::is_nil (writer_to_comp_2.in ()))
          {
            ACE_ERROR ((LM_ERROR, "Component1_exec_i::~Component1_exec_i - "
                      "ERROR: Write interface of component 2 still valid\n"));
          }
        else
          {
            ACE_DEBUG ((LM_DEBUG, "Component1_exec_i::~Component1_exec_i - "
                      "OK: Write interface of component 2 is not valid\n"));
          }

        PartialShutdown::Writer_var writer_to_comp_3 =
          this->ciao_context_->get_connection_write_to_comp_3 ();
        if (!::CORBA::is_nil (writer_to_comp_3.in ()))
          {
            ACE_ERROR ((LM_ERROR, "Component1_exec_i::~Component1_exec_i - "
                      "ERROR: Write interface of component 3 still valid\n"));
          }
        else
          {
            ACE_DEBUG ((LM_DEBUG, "Component1_exec_i::~Component1_exec_i - "
                      "OK: Write interface of component 3 is not valid\n"));
          }
      }
  }

  // Supported operations and attributes.
  ACE_Reactor*
  Component1_exec_i::reactor (void)
  {
    ACE_Reactor* reactor = 0;
    ::CORBA::Object_var ccm_object =
      this->ciao_context_->get_CCM_object();
    if (! ::CORBA::is_nil (ccm_object.in ()))
      {
        ::CORBA::ORB_var orb = ccm_object->_get_orb ();
        if (! ::CORBA::is_nil (orb.in ()))
          {
            reactor = orb->orb_core ()->reactor ();
          }
      }
    if (reactor == 0)
      {
        throw ::CORBA::INTERNAL ();
      }
    return reactor;
  }

  void Component1_exec_i::read_all (void)
  {
    PartialShutdown::Reader_var read_from_comp_2 =
      this->ciao_context_->get_connection_read_from_comp_2 ();
    if (::CORBA::is_nil (read_from_comp_2.in ()))
      {
        ACE_ERROR ((LM_ERROR, "Component1_exec_i::read_all - "
                  "ERROR: Reader of component 2 seems NIL\n"));
      }
    else
      {
        ::CORBA::StringSeq_var strings_from_2 =
          read_from_comp_2->read_lines ();
        for (::CORBA::ULong i = 0; i < strings_from_2->length (); ++i)
          {
            ACE_DEBUG ((LM_DEBUG, "COMPONENT1: READ FROM COMPONENT2 : %C\n",
                      strings_from_2[i].in ()));
          }
      }

    PartialShutdown::Reader_var read_from_comp_3 =
      this->ciao_context_->get_connection_read_from_comp_3 ();
    if (::CORBA::is_nil (read_from_comp_3.in ()))
      {
        ACE_DEBUG ((LM_DEBUG, "Component1_exec_i::read_all - "
                  "Reader of component 3 seems NIL\n"));
      }
    else
      {
        ::CORBA::StringSeq_var strings_from_3 =
          read_from_comp_3->read_lines ();
        for (::CORBA::ULong i = 0; i < strings_from_3->length (); ++i)
          {
            ACE_DEBUG ((LM_DEBUG, "COMPONENT1: READ FROM COMPONENT3 : %C\n",
                      strings_from_3[i].in ()));
          }
      }
  }

  void Component1_exec_i::write_all (void)
  {
    const char * str_to_comp_2 = "FROM COMPONENT1 TO COMPONENT2";
    const char * str_to_comp_3 = "FROM COMPONENT1 TO COMPONENT3";

    PartialShutdown::Writer_var writer_to_comp_2 =
      this->ciao_context_->get_connection_write_to_comp_2 ();
    if (::CORBA::is_nil (writer_to_comp_2.in ()))
      {
        ACE_ERROR ((LM_ERROR, "Component1_exec_i::write_all - "
                  "ERROR: Writer to component 2 seems NIL\n"));
      }
    else
      {
        writer_to_comp_2->write_line (str_to_comp_2);
      }

    PartialShutdown::Writer_var writer_to_comp_3 =
      this->ciao_context_->get_connection_write_to_comp_3 ();

    if (::CORBA::is_nil (writer_to_comp_3.in ()))
      {
        ACE_DEBUG ((LM_DEBUG, "Component1_exec_i::write_all - "
                  "Writer to component 3 seems NIL\n"));
      }
    else
      {
        writer_to_comp_3->write_line (str_to_comp_3);
      }
  }

  void
  Component1_exec_i::write_line (const char* line)
  {
    ACE_GUARD_THROW_EX (TAO_SYNCH_MUTEX, _guard,
                        this->mutex_, CORBA::INTERNAL ());
    {
      ACE_DEBUG ((LM_DEBUG, "Component1_exec_i::write_line - "
                "New line: <%C>\n",
                line));
      this->strings_.push_back (line);
    }
  }


  ::CORBA::StringSeq *
  Component1_exec_i::read_lines (void)
  {
    CORBA::StringSeq *args = 0;
    ACE_NEW_THROW_EX (args,
                      CORBA::StringSeq,
                      CORBA::NO_MEMORY ());

    CORBA::StringSeq_var safe_args (args);

    // Copy the argument vector to the string sequence.

    args->length (this->strings_.size ());
    for (::CORBA::ULong i = 0; i < this->strings_.size (); ++i)
      {
        (*args)[i] = CORBA::string_dup (this->strings_[i]);
      }

    return safe_args._retn ();
  }

  // Component attributes and port operations.

  ::PartialShutdown::CCM_Writer_ptr
  Component1_exec_i::get_comp_1_writer (void)
  {
    if ( ::CORBA::is_nil (this->ciao_comp_1_writer_.in ()))
      {
        comp_1_writer_exec_i *tmp = 0;
        ACE_NEW_RETURN (
          tmp,
          comp_1_writer_exec_i (
            this->ciao_context_.in (),
            *this),
            ::PartialShutdown::CCM_Writer::_nil ());

          this->ciao_comp_1_writer_ = tmp;
      }

    return
      ::PartialShutdown::CCM_Writer::_duplicate (
        this->ciao_comp_1_writer_.in ());
  }

  ::PartialShutdown::CCM_Reader_ptr
  Component1_exec_i::get_comp_1_reader (void)
  {
    if ( ::CORBA::is_nil (this->ciao_comp_1_reader_.in ()))
      {
        comp_1_reader_exec_i *tmp = 0;
        ACE_NEW_RETURN (
          tmp,
          comp_1_reader_exec_i (
            this->ciao_context_.in (),
            *this),
            ::PartialShutdown::CCM_Reader::_nil ());

          this->ciao_comp_1_reader_ = tmp;
      }

    return
      ::PartialShutdown::CCM_Reader::_duplicate (
        this->ciao_comp_1_reader_.in ());
  }

  // Operations from Components::SessionComponent.

  void
  Component1_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->ciao_context_ =
      ::PartialShutdown::CCM_Component1_Context::_narrow (ctx);

    if ( ::CORBA::is_nil (this->ciao_context_.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }
  }

  void
  Component1_exec_i::configuration_complete (void)
  {
    /* Your code here. */
  }

  void
  Component1_exec_i::ccm_activate (void)
  {
    if (this->reactor ()->schedule_timer (
                this->write_ticker_,
                0,
                ACE_Time_Value (5, 0),
                ACE_Time_Value (1, 0)) == -1)
      {
        ACE_ERROR ((LM_ERROR, ACE_TEXT ("Sender_exec_i::start : ")
                              ACE_TEXT ("Error scheduling write ticker\n")));
      }
   if (this->reactor ()->schedule_timer (
                this->read_ticker_,
                0,
                ACE_Time_Value (5, 0),
                ACE_Time_Value (1, 0)) == -1)
      {
        ACE_ERROR ((LM_ERROR, ACE_TEXT ("Sender_exec_i::start : ")
                              ACE_TEXT ("Error scheduling read ticker\n")));
      }
  }

  void
  Component1_exec_i::ccm_passivate (void)
  {
    this->reactor ()->cancel_timer (this->write_ticker_);
    this->reactor ()->cancel_timer (this->read_ticker_);
  }

  void
  Component1_exec_i::ccm_remove (void)
  {
    /* Your code here. */
  }

  extern "C" COMPONENT1_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_PartialShutdown_Component1_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_NORETURN (
      retval,
      Component1_exec_i);

    return retval;
  }
}
