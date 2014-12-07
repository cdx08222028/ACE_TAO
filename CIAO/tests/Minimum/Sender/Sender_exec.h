// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.7.6
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
 *       http://doc.ece.uci.edu/
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

// TAO_IDL - Generated from
// .\be\be_codegen.cpp:1217

#ifndef CIAO_SENDER_EXEC_H_
#define CIAO_SENDER_EXEC_H_


#include "SenderEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "Sender_exec_export.h"
#include "tao/LocalObject.h"


namespace CIAO_Minimum_Sender_Impl
{
  class SENDER_EXEC_Export Sender_exec_i
    : public virtual Sender_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    Sender_exec_i (void);
    virtual ~Sender_exec_i (void);

    //@{
    /** Supported operations and attributes. */


    // TAO_IDL - Generated from
    // c:\middleware\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42

    virtual void
    bar (void);
    //@}

    //@{
    /** Component attributes and port operations. */

    //@}

    //@{
    /** Operations from Components::SessionComponent. */

    virtual void
    set_session_context (
      ::Components::SessionContext_ptr ctx);

    virtual void configuration_complete (void);

    virtual void ccm_activate (void);
    virtual void ccm_passivate (void);
    virtual void ccm_remove (void);
    //@}


  private:
    ::Minimum::CCM_Sender_Context_var context_;
  };

  extern "C" SENDER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Minimum_Sender_Impl (void);
}

namespace CIAO_Minimum_Sender_Impl
{
  class SENDER_EXEC_Export SenderHome_exec_i
    : public virtual SenderHome_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    SenderHome_exec_i (void);

    virtual ~SenderHome_exec_i (void);

    // All operations and attributes.

    // Factory operations.

    // Finder operations.

    // Implicit operations.

    virtual ::Components::EnterpriseComponent_ptr
    create (void);
  };

  extern "C" SENDER_EXEC_Export ::Components::HomeExecutorBase_ptr
  create_Minimum_SenderHome_Impl (void);
}

#endif /* ifndef */

