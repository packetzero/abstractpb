### These files are generated
The files are only checked in for viewing.  In real world scenario, these are generated in build.

The AbstractPB Generated structs have a ".apb.h" and are generated from the highest version of a message.  For example, if you have ProductV2.proto and ProductV3.proto, the V3 message is used to generate the abstraction.  As stated in the Guidelines section of the main product README, the V3 proto message definition needs to be an evolution of it's V2 counterpart, and contain an exact duplicate of those fields.
