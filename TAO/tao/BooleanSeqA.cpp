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
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

#include "BooleanSeqC.h"
#include "tao/Typecode.h"
#include "tao/Any_Dual_Impl_T.h"

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:290

static const CORBA::Long _oc_CORBA_BooleanSeq[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  33,
  ACE_NTOHL (0x49444c3a),
  ACE_NTOHL (0x6f6d672e),
  ACE_NTOHL (0x6f72672f),
  ACE_NTOHL (0x434f5242),
  ACE_NTOHL (0x412f426f),
  ACE_NTOHL (0x6f6c6561),
  ACE_NTOHL (0x6e536571),
  ACE_NTOHL (0x3a312e30),
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CORBA/BooleanSeq:1.0
    11,
  ACE_NTOHL (0x426f6f6c),
  ACE_NTOHL (0x65616e53),
  ACE_NTOHL (0x65710000),  // name = BooleanSeq
    CORBA::tk_sequence, // typecode kind
  12, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    CORBA::tk_boolean,

    0U,

};

static CORBA::TypeCode _tc_TAO_tc_CORBA_BooleanSeq (
    CORBA::tk_alias,
    sizeof (_oc_CORBA_BooleanSeq),
    (char *) &_oc_CORBA_BooleanSeq,
    0,
    sizeof (CORBA::BooleanSeq)
  );

namespace CORBA
{
  ::CORBA::TypeCode_ptr _tc_BooleanSeq =
    &_tc_TAO_tc_CORBA_BooleanSeq;
}

// TAO_IDL - Generated from
// be\be_visitor_sequence/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const CORBA::BooleanSeq &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CORBA::BooleanSeq>::insert_copy (
      _tao_any,
      CORBA::BooleanSeq::_tao_any_destructor,
      CORBA::_tc_BooleanSeq,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    CORBA::BooleanSeq *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CORBA::BooleanSeq>::insert (
      _tao_any,
      CORBA::BooleanSeq::_tao_any_destructor,
      CORBA::_tc_BooleanSeq,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    CORBA::BooleanSeq *&_tao_elem
  )
{
  return _tao_any >>= ACE_const_cast (
      const CORBA::BooleanSeq *&,
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const CORBA::BooleanSeq *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CORBA::BooleanSeq>::extract (
        _tao_any,
        CORBA::BooleanSeq::_tao_any_destructor,
        CORBA::_tc_BooleanSeq,
        _tao_elem
      );
}



#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO::Any_Dual_Impl_T<
        CORBA::BooleanSeq
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        CORBA::BooleanSeq \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */

