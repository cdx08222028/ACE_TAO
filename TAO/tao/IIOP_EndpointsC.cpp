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

// TAO_IDL - Generated from
// be\be_codegen.cpp:323


#include "IIOP_EndpointsC.h"
#include "tao/CDR.h"
#include "tao/Typecode.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "IIOP_EndpointsC.i"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:64

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from 
// be\be_visitor_structure/structure_cs.cpp:66

void 
TAO::IIOP_Endpoint_Info::_tao_any_destructor (
    void *_tao_void_pointer
  )
{
  IIOP_Endpoint_Info *_tao_tmp_pointer =
    ACE_static_cast (IIOP_Endpoint_Info *, _tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from 
// be\be_visitor_sequence/sequence_cs.cpp:65

#if !defined (_TAO_IIOPENDPOINTSEQUENCE_CS_)
#define _TAO_IIOPENDPOINTSEQUENCE_CS_

TAO::IIOPEndpointSequence::IIOPEndpointSequence (void)
{}

TAO::IIOPEndpointSequence::IIOPEndpointSequence (
    CORBA::ULong max
  )
  : TAO_Unbounded_Sequence<
        TAO::IIOP_Endpoint_Info
      >
    (max)
{}

TAO::IIOPEndpointSequence::IIOPEndpointSequence (
    CORBA::ULong max,
    CORBA::ULong length,
    TAO::IIOP_Endpoint_Info * buffer,
    CORBA::Boolean release
  )
  : TAO_Unbounded_Sequence<
        TAO::IIOP_Endpoint_Info
      >
    (max, length, buffer, release)
{}

TAO::IIOPEndpointSequence::IIOPEndpointSequence (
    const IIOPEndpointSequence &seq
  )
  : TAO_Unbounded_Sequence<
        TAO::IIOP_Endpoint_Info
      >
    (seq)
{}

TAO::IIOPEndpointSequence::~IIOPEndpointSequence (void)
{}

void TAO::IIOPEndpointSequence::_tao_any_destructor (
    void * _tao_void_pointer
  )
{
  IIOPEndpointSequence * _tao_tmp_pointer =
    ACE_static_cast (IIOPEndpointSequence *, _tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be\be_visitor_structure/cdr_op_cs.cpp:61

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TAO::IIOP_Endpoint_Info &_tao_aggregate
  )
{
  return
    (strm << _tao_aggregate.host.in ()) &&
    (strm << _tao_aggregate.port) &&
    (strm << _tao_aggregate.priority);
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    TAO::IIOP_Endpoint_Info &_tao_aggregate
  )
{
  return
    (strm >> _tao_aggregate.host.out ()) &&
    (strm >> _tao_aggregate.port) &&
    (strm >> _tao_aggregate.priority);
}

// TAO_IDL - Generated from
// be\be_visitor_sequence/cdr_op_cs.cpp:96

#if !defined _TAO_CDR_OP_TAO_IIOPEndpointSequence_CPP_
#define _TAO_CDR_OP_TAO_IIOPEndpointSequence_CPP_

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TAO::IIOPEndpointSequence &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len = _tao_sequence.length ();
  
  if (strm << _tao_seq_len)
    {
      // Encode all elements.
      CORBA::Boolean _tao_marshal_flag = 1;
      
      for (CORBA::ULong i = 0; i < _tao_seq_len && _tao_marshal_flag; ++i)
        {
          _tao_marshal_flag = (strm << _tao_sequence[i]);
        }
      
      return _tao_marshal_flag;
    }
  
  return 0;
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    TAO::IIOPEndpointSequence &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len;
  
  if (strm >> _tao_seq_len)
    {
      // Add a check to the length of the sequence
      // to make sure it does not exceed the length
      // of the stream. (See bug 58.)
      if (_tao_seq_len > strm.length ())
        {
          return 0;
        }
      
      // Set the length of the sequence.
      _tao_sequence.length (_tao_seq_len);
      
      // If length is 0 we return true.
      if (0 >= _tao_seq_len) 
        {
          return 1;
        }
      
      // Retrieve all the elements.
      CORBA::Boolean _tao_marshal_flag = 1;
      
      for (CORBA::ULong i = 0; i < _tao_seq_len && _tao_marshal_flag; ++i)
        {
          _tao_marshal_flag = (strm >> _tao_sequence[i]);
        }
      
      return _tao_marshal_flag;
    
    }
  
  return 0;
}

#endif /* _TAO_CDR_OP_TAO_IIOPEndpointSequence_CPP_ */

// TAO_IDL - Generated from
// be\be_visitor_root/root.cpp:1628

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO_Var_Var_T<
        TAO::IIOP_Endpoint_Info
      >;

  template class
    TAO_Var_Base_T<
        TAO::IIOP_Endpoint_Info
      >;

  template class
    TAO_Out_T<
        TAO::IIOP_Endpoint_Info,
        TAO::IIOP_Endpoint_Info_var
      >;

  template class
    TAO_VarSeq_Var_T<
        TAO::IIOPEndpointSequence,
        TAO::IIOP_Endpoint_Info
      >;

  template class
    TAO_Seq_Var_Base_T<
        TAO::IIOPEndpointSequence,
        TAO::IIOP_Endpoint_Info
      >;

  template class
    TAO_Seq_Out_T<
        TAO::IIOPEndpointSequence,
        TAO::IIOPEndpointSequence_var,
        TAO::IIOP_Endpoint_Info
      >;

#if !defined (_TAO_IIOP_ENDPOINT_INFO__EXPLICIT_CS_)
#define _TAO_IIOP_ENDPOINT_INFO__EXPLICIT_CS_

  template class
    TAO_Unbounded_Sequence<
        TAO::IIOP_Endpoint_Info
      >;

#endif /* end #if !defined */

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO_Var_Var_T< \
        TAO::IIOP_Endpoint_Info \
      >

# pragma instantiate \
    TAO_Var_Base_T< \
        TAO::IIOP_Endpoint_Info \
      >

# pragma instantiate \
    TAO_Out_T< \
        TAO::IIOP_Endpoint_Info, \
        TAO::IIOP_Endpoint_Info_var \
      >

# pragma instantiate \
    TAO_VarSeq_Var_T< \
        TAO::IIOPEndpointSequence, \
        TAO::IIOP_Endpoint_Info \
      >

# pragma instantiate \
    TAO_Seq_Var_Base_T< \
        TAO::IIOPEndpointSequence, \
        TAO::IIOP_Endpoint_Info \
      >

# pragma instantiate \
    TAO_Seq_Out_T< \
        TAO::IIOPEndpointSequence, \
        TAO::IIOPEndpointSequence_var, \
        TAO::IIOP_Endpoint_Info \
      >

#if !defined (_TAO_IIOP_ENDPOINT_INFO__EXPLICIT_CS_)
#define _TAO_IIOP_ENDPOINT_INFO__EXPLICIT_CS_

# pragma instantiate \
    TAO_Unbounded_Sequence< \
        TAO::IIOP_Endpoint_Info \
      >

#endif /* end #if !defined */

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 

