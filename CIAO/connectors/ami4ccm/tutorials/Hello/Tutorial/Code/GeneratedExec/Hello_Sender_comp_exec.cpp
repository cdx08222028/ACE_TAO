// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.3
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

#include "Hello_Sender_comp_exec.h"

namespace CIAO_Hello_Sender_comp_Impl
{

  /**
   * Component Executor Implementation Class: Sender_comp_exec_i
   */

  Sender_comp_exec_i::Sender_comp_exec_i (void){
  }

  Sender_comp_exec_i::~Sender_comp_exec_i (void)
  {
  }

  // Supported operations and attributes.

  // Component attributes and port operations.

  // Operations from Components::SessionComponent.

  void
  Sender_comp_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->ciao_context_ =
      ::Hello::CCM_Sender_comp_Context::_narrow (ctx);

    if ( ::CORBA::is_nil (this->ciao_context_.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }
  }

  void
  Sender_comp_exec_i::configuration_complete (void)
  {
    /* Your code here. */
  }

  void
  Sender_comp_exec_i::ccm_activate (void)
  {
    /* Your code here. */
  }

  void
  Sender_comp_exec_i::ccm_passivate (void)
  {
    /* Your code here. */
  }

  void
  Sender_comp_exec_i::ccm_remove (void)
  {
    /* Your code here. */
  }

  AMI4CCM_MyFoo_objReplyHandler_run_my_foo_i::AMI4CCM_MyFoo_objReplyHandler_run_my_foo_i (void)
  {
  }

  AMI4CCM_MyFoo_objReplyHandler_run_my_foo_i::~AMI4CCM_MyFoo_objReplyHandler_run_my_foo_i (void)
  {
  }

  void
  AMI4CCM_MyFoo_objReplyHandler_run_my_foo_i::foo (
    ::CORBA::Long /* ami_return_val */,
    const char * /* answer */)
  {
    /* Your code here. */
  }

  void
  AMI4CCM_MyFoo_objReplyHandler_run_my_foo_i::foo_excep (
    ::CCM_AMI::ExceptionHolder_ptr /* excep_holder */)
  {
    /* Your code here. */
  }

  void
  AMI4CCM_MyFoo_objReplyHandler_run_my_foo_i::hello (
    ::CORBA::Long /* answer */)
  {
    /* Your code here. */
  }

  void
  AMI4CCM_MyFoo_objReplyHandler_run_my_foo_i::hello_excep (
    ::CCM_AMI::ExceptionHolder_ptr /* excep_holder */)
  {
    /* Your code here. */
  }

  void
  AMI4CCM_MyFoo_objReplyHandler_run_my_foo_i::get_rw_attrib (
    ::CORBA::Short /* rw_attrib */)
  {
    /* Your code here. */
  }

  void
  AMI4CCM_MyFoo_objReplyHandler_run_my_foo_i::get_rw_attrib_excep (
    ::CCM_AMI::ExceptionHolder_ptr /* excep_holder */)
  {
    /* Your code here. */
  }

  void
  AMI4CCM_MyFoo_objReplyHandler_run_my_foo_i::set_rw_attrib (void)
  {
    /* Your code here. */
  }

  void
  AMI4CCM_MyFoo_objReplyHandler_run_my_foo_i::set_rw_attrib_excep (
    ::CCM_AMI::ExceptionHolder_ptr /* excep_holder */)
  {
    /* Your code here. */
  }

  void
  AMI4CCM_MyFoo_objReplyHandler_run_my_foo_i::get_ro_attrib (
    ::CORBA::Short /* ro_attrib */)
  {
    /* Your code here. */
  }

  void
  AMI4CCM_MyFoo_objReplyHandler_run_my_foo_i::get_ro_attrib_excep (
    ::CCM_AMI::ExceptionHolder_ptr /* excep_holder */)
  {
    /* Your code here. */
  }

  extern "C" HELLO_SENDER_COMP_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Hello_Sender_comp_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_NORETURN (
      retval,
      Sender_comp_exec_i);

    return retval;
  }
}
