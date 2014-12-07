// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.0.2
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
#ifndef CIAO_SENDER_EXEC_NECH9V_H_
#define CIAO_SENDER_EXEC_NECH9V_H_

#include /**/ "ace/pre.h"

#include "SenderEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "Sender_exec_export.h"
#include "tao/LocalObject.h"

namespace CIAO_Hello_Sender_Impl
{
  class Sender_exec_i;
  /**
   * Provider Executor Implementation Class: push_message_exec_i
   */

  class push_message_exec_i
    : public virtual ::Hello::CCM_ReadMessage,
      public virtual ::CORBA::LocalObject
  {
  public:
    push_message_exec_i (
      ::Hello::CCM_Sender_Context_ptr ctx,
      Sender_exec_i& sender);
    virtual ~push_message_exec_i (void);

    /** @name Operations and attributes from Hello::ReadMessage */
    //@{

    virtual
    char * get_message (void);
    //@}

  private:
    ::Hello::CCM_Sender_Context_var ciao_context_;
    Sender_exec_i& sender_;

  };

  /**
   * Component Executor Implementation Class: Sender_exec_i
   */

  class Sender_exec_i
    : public virtual Sender_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    Sender_exec_i (void);
    virtual ~Sender_exec_i (void);

    /** @name Supported operations and attributes. */
    //@{

    virtual void start (void);

    //@}

    /** @name Component attributes and port operations. */
    //@{

    virtual ::Hello::CCM_ReadMessage_ptr
    get_push_message (void);

    virtual char * local_message (void);

    virtual void local_message (const char * local_message);
    //@}

    /** @name Operations from Components::SessionComponent. */
    //@{
    virtual void set_session_context (::Components::SessionContext_ptr ctx);
    virtual void configuration_complete (void);
    virtual void ccm_activate (void);
    virtual void ccm_passivate (void);
    virtual void ccm_remove (void);
    //@}

    /** @name User defined public operations. */
    //@{

    //@}

  private:
    ::Hello::CCM_Sender_Context_var ciao_context_;

    /** @name Component attributes. */
    //@{
    ::Hello::CCM_ReadMessage_var ciao_push_message_;

    ::CORBA::String_var local_message_;
    //@}

    /** @name User defined members. */
    //@{

    //@}

    /** @name User defined private operations. */
    //@{

    //@}
  };

  extern "C" SENDER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Hello_Sender_Impl (void);
}

#include /**/ "ace/post.h"

#endif /* ifndef */
