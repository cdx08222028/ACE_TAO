/* -*- C++ -*- */
// $Id$

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#if ! defined (TAO_HAS_MINIMUM_CORBA)

#include "WrongTransactionC.h"

// default constructor
CORBA_WrongTransaction::CORBA_WrongTransaction (void)
  : CORBA_UserException (CORBA::_tc_WrongTransaction)
{
}

// destructor - all members are of self managing types
CORBA_WrongTransaction::~CORBA_WrongTransaction (void)
{
}

// copy constructor
CORBA_WrongTransaction::CORBA_WrongTransaction (const CORBA_WrongTransaction &_tao_excp)
  : CORBA_UserException (_tao_excp._type ())
{
}

// assignment operator
CORBA_WrongTransaction&
CORBA_WrongTransaction::operator= (const CORBA_WrongTransaction &_tao_excp)
{

  this->CORBA_UserException::operator= (_tao_excp);
  return *this;
}

// narrow
CORBA_WrongTransaction_ptr 
CORBA_WrongTransaction::_narrow (CORBA::Exception *exc)
{
  if (!ACE_OS::strcmp ("IDL:omg.org/CORBA/WrongTransaction:1.0", exc->_id ())) // same type
    return ACE_dynamic_cast (CORBA_WrongTransaction_ptr, exc);
  else
    return 0;
}


void CORBA_WrongTransaction::_raise ()
{
  TAO_RAISE(*this);
}

// TAO extension - the _alloc method
CORBA::Exception *CORBA_WrongTransaction::_alloc (void)
{
  return new CORBA_WrongTransaction;
}

#endif /* ! defined TAO_HAS_MINIMUM_CORBA */


