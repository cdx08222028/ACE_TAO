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

#include "InterReturnT_Receiver_exec.h"

namespace CIAO_InterReturnT_Receiver_Impl
{

  /**
   * Facet Executor Implementation Class: do_my_foo_exec_i
   */

  do_my_foo_exec_i::do_my_foo_exec_i (
        ::InterReturnT::CCM_Receiver_Context_ptr ctx)
    : ciao_context_ (
        ::InterReturnT::CCM_Receiver_Context::_duplicate (ctx))
  {
  }

  do_my_foo_exec_i::~do_my_foo_exec_i (void)
  {
  }

  // Operations from ::InterReturnT::MyFoo

  void
  do_my_foo_exec_i::ret_void (const char * /* in_str */,
      ::CORBA::String_out answer,
      ::CORBA::Long_out l_cmd )
  {
    answer = CORBA::string_dup ("This is my answer from ret_void");
    l_cmd = 1;
  }

  ::CORBA::Long
  do_my_foo_exec_i::ret_long (const char * /* in_str */,
  ::CORBA::String_out answer,
  ::CORBA::Long_out l_cmd)
  {
    answer = CORBA::string_dup ("This is my answer from ret_long");
    l_cmd = 2;
    return 200;
  }

  ::CORBA::Double
  do_my_foo_exec_i::ret_double (const char * /* in_str */,
      ::CORBA::String_out answer,
       ::CORBA::Long_out l_cmd)
  {
    answer = CORBA::string_dup ("This is my answer from ret_double");
    l_cmd = 3;
    return 3.14;
  }

  ::InterReturnT::TestStruct *
  do_my_foo_exec_i::ret_struct (const char * /* in_str */,
  ::CORBA::String_out answer,
  ::CORBA::Long_out l_cmd)
  {
    answer = CORBA::string_dup ("This is my answer from ret_struct");
    l_cmd = 4;
    InterReturnT::TestStruct *test_struct = new InterReturnT::TestStruct();
    test_struct->key = CORBA::string_dup("aaa");
    test_struct->x = 10;
    return test_struct;
  }

  ::InterReturnT::TestArray_slice *
  do_my_foo_exec_i::ret_array (const char * /* in_str */,
      ::CORBA::String_out answer,
       ::CORBA::Long_out l_cmd)
  {
    answer = CORBA::string_dup ("This is my answer from ret_array");
    l_cmd = 5;
    InterReturnT::TestArray test_array;
    for ( CORBA::UShort i = 0; i < 5; i ++)
      {
        test_array[i].key = CORBA::string_dup("bbb");
        for (CORBA::UShort y = 0; y < 5; y ++)
          {
            test_array[i].x_array[y] = i * 100 + y ;
          }
      }
    return InterReturnT::TestArray_dup(test_array);
  }

  ::InterReturnT::TestSeq *
  do_my_foo_exec_i::ret_seq (const char * /* in_str */,
  ::CORBA::String_out /* answer */,
  ::CORBA::Long_out l_cmd)
  {
    l_cmd = 6;
    InterReturnT::test ttt;
    ttt.x_test = 12;
    ttt.x_teststr = CORBA::string_dup("ccc");
    InterReturnT::TestSeq *seq = new InterReturnT::TestSeq();
    seq->length(2);
    (*seq)[0]= ttt;
    ttt.x_teststr = CORBA::string_dup("ddd");
    (*seq)[1]= ttt;
    return seq;
  }

  ::InterReturnT::X_Union *
  do_my_foo_exec_i::ret_union (const char * /* in_str */,
  ::CORBA::String_out answer,
  ::CORBA::Long_out l_cmd)
  {
    answer = CORBA::string_dup ("This is my answer from ret_union");
    l_cmd = 7;
    InterReturnT::X_Union *x_uni = new InterReturnT::X_Union();
    x_uni->x_long(11);
    return x_uni;
  }

  ::InterReturnT::test_enum
  do_my_foo_exec_i::ret_enum (const char * /* in_str */,
  ::CORBA::String_out answer,
  ::CORBA::Long_out l_cmd)
  {
    answer = CORBA::string_dup ("This is my answer from ret_enum");
    l_cmd = 8;
    InterReturnT::test_enum test_enum;
    test_enum = InterReturnT::TWO;
    return test_enum;
  }

  /**
   * Component Executor Implementation Class: Receiver_exec_i
   */

  Receiver_exec_i::Receiver_exec_i (void){
  }

  Receiver_exec_i::~Receiver_exec_i (void)
  {
  }

  // Supported operations and attributes.

  // Component attributes and port operations.

  ::InterReturnT::CCM_MyFoo_ptr
  Receiver_exec_i::get_do_my_foo (void)
  {
    if ( ::CORBA::is_nil (this->ciao_do_my_foo_.in ()))
      {
        do_my_foo_exec_i *tmp = 0;
        ACE_NEW_RETURN (
          tmp,
          do_my_foo_exec_i (
            this->ciao_context_.in ()),
            ::InterReturnT::CCM_MyFoo::_nil ());

          this->ciao_do_my_foo_ = tmp;
      }

    return
      ::InterReturnT::CCM_MyFoo::_duplicate (
        this->ciao_do_my_foo_.in ());
  }

  // Operations from Components::SessionComponent.

  void
  Receiver_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->ciao_context_ =
      ::InterReturnT::CCM_Receiver_Context::_narrow (ctx);

    if ( ::CORBA::is_nil (this->ciao_context_.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }
  }

  void
  Receiver_exec_i::configuration_complete (void)
  {
    /* Your code here. */
  }

  void
  Receiver_exec_i::ccm_activate (void)
  {
    /* Your code here. */
  }

  void
  Receiver_exec_i::ccm_passivate (void)
  {
    /* Your code here. */
  }

  void
  Receiver_exec_i::ccm_remove (void)
  {
    /* Your code here. */
  }

  extern "C" INTERRETURN_T_RECEIVER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_InterReturnT_Receiver_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_NORETURN (
      retval,
      Receiver_exec_i);

    return retval;
  }
}
