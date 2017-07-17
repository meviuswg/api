/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: github.com/gogo/protobuf/protobuf/google/protobuf/timestamp.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "github.com/gogo/protobuf/protobuf/google/protobuf/timestamp.pb-c.h"
void   google__protobuf__timestamp__init
                     (Google__Protobuf__Timestamp         *message)
{
  static Google__Protobuf__Timestamp init_value = GOOGLE__PROTOBUF__TIMESTAMP__INIT;
  *message = init_value;
}
size_t google__protobuf__timestamp__get_packed_size
                     (const Google__Protobuf__Timestamp *message)
{
  assert(message->base.descriptor == &google__protobuf__timestamp__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t google__protobuf__timestamp__pack
                     (const Google__Protobuf__Timestamp *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &google__protobuf__timestamp__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t google__protobuf__timestamp__pack_to_buffer
                     (const Google__Protobuf__Timestamp *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &google__protobuf__timestamp__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Google__Protobuf__Timestamp *
       google__protobuf__timestamp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Google__Protobuf__Timestamp *)
     protobuf_c_message_unpack (&google__protobuf__timestamp__descriptor,
                                allocator, len, data);
}
void   google__protobuf__timestamp__free_unpacked
                     (Google__Protobuf__Timestamp *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &google__protobuf__timestamp__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor google__protobuf__timestamp__field_descriptors[2] =
{
  {
    "seconds",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Google__Protobuf__Timestamp, has_seconds),
    offsetof(Google__Protobuf__Timestamp, seconds),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "nanos",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Google__Protobuf__Timestamp, has_nanos),
    offsetof(Google__Protobuf__Timestamp, nanos),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned google__protobuf__timestamp__field_indices_by_name[] = {
  1,   /* field[1] = nanos */
  0,   /* field[0] = seconds */
};
static const ProtobufCIntRange google__protobuf__timestamp__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor google__protobuf__timestamp__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "google.protobuf.Timestamp",
  "Timestamp",
  "Google__Protobuf__Timestamp",
  "google.protobuf",
  sizeof(Google__Protobuf__Timestamp),
  2,
  google__protobuf__timestamp__field_descriptors,
  google__protobuf__timestamp__field_indices_by_name,
  1,  google__protobuf__timestamp__number_ranges,
  (ProtobufCMessageInit) google__protobuf__timestamp__init,
  NULL,NULL,NULL    /* reserved[123] */
};