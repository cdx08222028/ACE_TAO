// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
//
// Information about TAO is available at:
//     http://www.dre.vanderbilt.edu/~schmidt/TAO.html

#include "Messenger_i.h"
#include <iostream>
// Implementation skeleton constructor
Messenger_i::Messenger_i (void)
  {
  }

// Implementation skeleton destructor
Messenger_i::~Messenger_i (void)
{
}

CORBA::Boolean
Messenger_i::send_message (
  const char * user_name,
  const char * subject,
  char *& message)
{
  std::cout << "Message from: " << user_name << std::endl;
  std::cout << "Subject:      " << subject << std::endl;
  std::cout << "Message:      " << message << std::endl;
  return true;
}

