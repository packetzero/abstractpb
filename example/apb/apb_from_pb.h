#include "Output.apb.h"
bool from_pb_v3(CBytes &src, COutput &dest);
#include "Payment.apb.h"
bool from_pb_v3(CBytes &src, CPayment &dest);
#include "PaymentAck.apb.h"
bool from_pb_v3(CBytes &src, CPaymentAck &dest);
#include "PaymentDetails.apb.h"
bool from_pb_v3(CBytes &src, CPaymentDetails &dest);
#include "PaymentRequest.apb.h"
bool from_pb_v3(CBytes &src, CPaymentRequest &dest);
