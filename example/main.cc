#include "../abstractpb_types.h"
#include "apb/apb_to_pb.h"

void doSomethingWithPaymentRequest()
{
  CPaymentRequest apb;

  apb.payment_details_version = 1;
  apb.pki_type = "some value here";

  std::string dest;
  bool success = to_pb_v3(apb, dest);
  
  printf("PaymentRequest serialization %s length:%d\n", (success?"SUCCESS":"FAILED"), dest.length());

}

int main(int argc, char *argv[])
{
  doSomethingWithPaymentRequest();

  return 0;
}
