#include "apb_from_pb.h"
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
