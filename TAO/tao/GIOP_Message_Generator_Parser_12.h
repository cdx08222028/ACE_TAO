// -*- C++ -*-

// ===================================================================
/**
 *  @file   GIOP_Message_Generator_Parser_12.h
 *
 *  @author Balachandran Natarajan <bala@cs.wustl.edu>
 */
// ===================================================================

#ifndef TAO_GIOP_MESSAGE_GENERATOR_PARSER_12_H
#define TAO_GIOP_MESSAGE_GENERATOR_PARSER_12_H

#include /**/ "ace/pre.h"

#include "tao/GIOP_Message_Generator_Parser.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

class TAO_Service_Context;
class TAO_Transport;

/**
 * @class TAO_GIOP_Message_Generator_Parser_12
 *
 * @brief Implementation for GIOP v1.2
 */

class TAO_GIOP_Message_Generator_Parser_12 :
  public TAO_GIOP_Message_Generator_Parser
{
public:
  /// Write the request header in to @a msg
  virtual bool write_request_header (
      const TAO_Operation_Details &opdetails,
      TAO_Target_Specification &spec,
      TAO_OutputCDR &msg);

  /// Write the LocateRequest header
  virtual bool write_locate_request_header (
      CORBA::ULong request_id,
      TAO_Target_Specification &spec,
      TAO_OutputCDR &msg);

  /// Write the reply header in to @a output
  virtual bool write_reply_header (
      TAO_OutputCDR &output,
      TAO_Pluggable_Reply_Params_Base &reply);

  /// Writes the locate _reply message in to the @a output
  virtual bool write_locate_reply_mesg (
      TAO_OutputCDR &output,
      CORBA::ULong request_id,
      TAO_GIOP_Locate_Status_Msg &status);

  virtual bool write_fragment_header (TAO_OutputCDR & cdr,
                                      CORBA::ULong request_id);

  /// Parse the Request Header from the incoming stream. This will do a
  /// version specific parsing of the incoming Request header
  virtual int parse_request_header (TAO_ServerRequest &);

  /// Parse the LocateRequest Header from the incoming stream. This will do a
  /// version specific parsing of the incoming Request header
  virtual int parse_locate_header (TAO_GIOP_Locate_Request_Header &);

  /// Parse the reply message
  virtual int parse_reply (TAO_InputCDR &input,
                           TAO_Pluggable_Reply_Params &params);

  /// Parse the locate reply message
  virtual int parse_locate_reply (TAO_InputCDR &input,
                                  TAO_Pluggable_Reply_Params &params);

  /// Our versions
  virtual CORBA::Octet major_version () const;
  virtual CORBA::Octet minor_version () const;

  /// Is the messaging object ready for processing BiDirectional
  /// request/response?
  virtual bool is_ready_for_bidirectional () const;

  /// The header length of a fragment
  virtual size_t fragment_header_length () const;

private:
  /// Marshall the TargetSpecification
  /// This method may be required for other GIOP version coming out
  /// later than 1.2. We need to share this method
  bool marshall_target_spec (TAO_Target_Specification &spec,
                             TAO_OutputCDR &msg);
};

TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif  /* TAO_GIOP_MESSAGE_GENERATOR_PARSER_12_H */
