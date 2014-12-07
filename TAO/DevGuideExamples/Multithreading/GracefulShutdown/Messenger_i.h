/* -*- C++ -*- $Id$ */

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.dre.vanderbilt.edu/~schmidt/TAO.html

#ifndef MESSENGER_I_H_
#define MESSENGER_I_H_

#include "MessengerS.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
#pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

//Class Messenger_i
class  Messenger_i : public virtual POA_Messenger
{
public:
  //Constructor
  Messenger_i (CORBA::ORB_ptr orb);

  //Destructor
  virtual ~Messenger_i (void);

  virtual CORBA::Boolean send_message (
    const char * user_name,
    const char * subject,
    char *& message
  );

  virtual void shutdown ();

private:
  CORBA::ORB_var orb_;

};

#endif /* MESSENGER_I_H_  */
