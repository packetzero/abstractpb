#include "apb_from_pb.h"
#include <Output.pb.h>

static void _init_from_pb_v3(const Output &pb, COutput &dest)
{
  if (pb.has_amount())
  dest.amount = pb.amount();
  
  if (pb.has_script())
  dest.script = pb.script();
  
}

bool from_pb_v2(CBytes &src, COutput &dest)
{
  Output pb = Output();
  
  if (false == pb.ParseFromArray(src.ptr(), src.size())) return false;
  
  _init_from_pb_v3(pb, dest);
  
  return true;
}
#include <Payment.pb.h>

static void _init_from_pb_v3(const Payment &pb, CPayment &dest)
{
  if (pb.has_merchant_data())
  dest.merchant_data = pb.merchant_data();
  
  for (auto it = pb.transactions().begin(); it != pb.transactions().end(); it++)
     dest.transactions.push_back( *it);  // V_Bytes
  
  for (auto it = pb.refund_to().begin(); it != pb.refund_to().end(); it++)
  {
     int idx = dest.refund_to.size();
     dest.refund_to.resize(idx + 1);
     _init_from_pb_v3(*it, dest.refund_to[idx]);
  }
  
  if (pb.has_memo())
  dest.memo = pb.memo();
  
}

bool from_pb_v2(CBytes &src, CPayment &dest)
{
  Payment pb = Payment();
  
  if (false == pb.ParseFromArray(src.ptr(), src.size())) return false;
  
  _init_from_pb_v3(pb, dest);
  
  return true;
}
#include <PaymentAck.pb.h>

static void _init_from_pb_v3(const PaymentAck &pb, CPaymentAck &dest)
{
  if (pb.has_payment())
  {
    dest.payment = new CPayment();
    _init_from_pb_v3(pb.payment(), *dest.payment);
  }
  
  if (pb.has_memo())
  dest.memo = pb.memo();
  
}

bool from_pb_v2(CBytes &src, CPaymentAck &dest)
{
  PaymentAck pb = PaymentAck();
  
  if (false == pb.ParseFromArray(src.ptr(), src.size())) return false;
  
  _init_from_pb_v3(pb, dest);
  
  return true;
}
#include <PaymentDetails.pb.h>

static void _init_from_pb_v3(const PaymentDetails &pb, CPaymentDetails &dest)
{
  if (pb.has_network())
  dest.network = pb.network();
  
  for (auto it = pb.outputs().begin(); it != pb.outputs().end(); it++)
  {
     int idx = dest.outputs.size();
     dest.outputs.resize(idx + 1);
     _init_from_pb_v3(*it, dest.outputs[idx]);
  }
  
  if (pb.has_time())
  dest.time = pb.time();
  
  if (pb.has_expires())
  dest.expires = pb.expires();
  
  if (pb.has_memo())
  dest.memo = pb.memo();
  
  if (pb.has_payment_url())
  dest.payment_url = pb.payment_url();
  
  if (pb.has_merchant_data())
  dest.merchant_data = pb.merchant_data();
  
}

bool from_pb_v2(CBytes &src, CPaymentDetails &dest)
{
  PaymentDetails pb = PaymentDetails();
  
  if (false == pb.ParseFromArray(src.ptr(), src.size())) return false;
  
  _init_from_pb_v3(pb, dest);
  
  return true;
}
#include <PaymentRequest.pb.h>

static void _init_from_pb_v3(const PaymentRequest &pb, CPaymentRequest &dest)
{
  if (pb.has_payment_details_version())
  dest.payment_details_version = pb.payment_details_version();
  
  if (pb.has_pki_type())
  dest.pki_type = pb.pki_type();
  
  if (pb.has_pki_data())
  dest.pki_data = pb.pki_data();
  
  if (pb.has_serialized_payment_details())
  dest.serialized_payment_details = pb.serialized_payment_details();
  
  if (pb.has_signature())
  dest.signature = pb.signature();
  
}

bool from_pb_v2(CBytes &src, CPaymentRequest &dest)
{
  PaymentRequest pb = PaymentRequest();
  
  if (false == pb.ParseFromArray(src.ptr(), src.size())) return false;
  
  _init_from_pb_v3(pb, dest);
  
  return true;
}
#include <OutputV3.pb.h>

static void _init_from_pb_v3(const com::bitcoin::proto3::Output &pb, COutput &dest)
{
  dest.amount = pb.amount();
  
  dest.script = pb.script();
  
}

bool from_pb_v3(CBytes &src, COutput &dest)
{
  com::bitcoin::proto3::Output pb = com::bitcoin::proto3::Output();
  
  if (false == pb.ParseFromArray(src.ptr(), src.size())) return false;
  
  _init_from_pb_v3(pb, dest);
  
  return true;
}
#include <PaymentV3.pb.h>

static void _init_from_pb_v3(const com::bitcoin::proto3::Payment &pb, CPayment &dest)
{
  dest.merchant_data = pb.merchant_data();
  
  for (auto it = pb.transactions().begin(); it != pb.transactions().end(); it++)
     dest.transactions.push_back( *it);  // V_Bytes
  
  for (auto it = pb.refund_to().begin(); it != pb.refund_to().end(); it++)
  {
     int idx = dest.refund_to.size();
     dest.refund_to.resize(idx + 1);
     _init_from_pb_v3(*it, dest.refund_to[idx]);
  }
  
  dest.memo = pb.memo();
  
  dest.tod = ( TimeOfDay )pb.tod(); // CPrim< TimeOfDay >
  
}

bool from_pb_v3(CBytes &src, CPayment &dest)
{
  com::bitcoin::proto3::Payment pb = com::bitcoin::proto3::Payment();
  
  if (false == pb.ParseFromArray(src.ptr(), src.size())) return false;
  
  _init_from_pb_v3(pb, dest);
  
  return true;
}
#include <PaymentAckV3.pb.h>

static void _init_from_pb_v3(const com::bitcoin::proto3::PaymentAck &pb, CPaymentAck &dest)
{
  {
    dest.payment = new CPayment();
    _init_from_pb_v3(pb.payment(), *dest.payment);
  }
  
  dest.memo = pb.memo();
  
  dest.responseTime = pb.responsetime();
  
}

bool from_pb_v3(CBytes &src, CPaymentAck &dest)
{
  com::bitcoin::proto3::PaymentAck pb = com::bitcoin::proto3::PaymentAck();
  
  if (false == pb.ParseFromArray(src.ptr(), src.size())) return false;
  
  _init_from_pb_v3(pb, dest);
  
  return true;
}
#include <PaymentDetailsV3.pb.h>

static void _init_from_pb_v3(const com::bitcoin::proto3::PaymentDetails &pb, CPaymentDetails &dest)
{
  dest.network = pb.network();
  
  for (auto it = pb.outputs().begin(); it != pb.outputs().end(); it++)
  {
     int idx = dest.outputs.size();
     dest.outputs.resize(idx + 1);
     _init_from_pb_v3(*it, dest.outputs[idx]);
  }
  
  dest.time = pb.time();
  
  dest.expires = pb.expires();
  
  dest.memo = pb.memo();
  
  dest.payment_url = pb.payment_url();
  
  dest.merchant_data = pb.merchant_data();
  
  dest.someNewField = pb.somenewfield();
  
  dest.someNewInt = pb.somenewint();
  
}

bool from_pb_v3(CBytes &src, CPaymentDetails &dest)
{
  com::bitcoin::proto3::PaymentDetails pb = com::bitcoin::proto3::PaymentDetails();
  
  if (false == pb.ParseFromArray(src.ptr(), src.size())) return false;
  
  _init_from_pb_v3(pb, dest);
  
  return true;
}
#include <PaymentRequestV3.pb.h>

static void _init_from_pb_v3(const com::bitcoin::proto3::PaymentRequest &pb, CPaymentRequest &dest)
{
  dest.payment_details_version = pb.payment_details_version();
  
  dest.pki_type = pb.pki_type();
  
  dest.pki_data = pb.pki_data();
  
  dest.serialized_payment_details = pb.serialized_payment_details();
  
  dest.signature = pb.signature();
  
}

bool from_pb_v3(CBytes &src, CPaymentRequest &dest)
{
  com::bitcoin::proto3::PaymentRequest pb = com::bitcoin::proto3::PaymentRequest();
  
  if (false == pb.ParseFromArray(src.ptr(), src.size())) return false;
  
  _init_from_pb_v3(pb, dest);
  
  return true;
}
