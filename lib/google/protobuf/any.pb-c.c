/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: github.com/gogo/protobuf/protobuf/google/protobuf/any.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "github.com/gogo/protobuf/protobuf/google/protobuf/any.pb-c.h"
void   google__protobuf__any__init
                     (Google__Protobuf__Any         *message)
{
  static Google__Protobuf__Any init_value = GOOGLE__PROTOBUF__ANY__INIT;
  *message = init_value;
}
size_t google__protobuf__any__get_packed_size
                     (const Google__Protobuf__Any *message)
{
  assert(message->base.descriptor == &google__protobuf__any__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t google__protobuf__any__pack
                     (const Google__Protobuf__Any *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &google__protobuf__any__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t google__protobuf__any__pack_to_buffer
                     (const Google__Protobuf__Any *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &google__protobuf__any__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Google__Protobuf__Any *
       google__protobuf__any__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Google__Protobuf__Any *)
     protobuf_c_message_unpack (&google__protobuf__any__descriptor,
                                allocator, len, data);
}
void   google__protobuf__any__free_unpacked
                     (Google__Protobuf__Any *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &google__protobuf__any__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor google__protobuf__any__field_descriptors[2] =
{
  {
    "type_url",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Google__Protobuf__Any, type_url),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "value",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Google__Protobuf__Any, has_value),
    offsetof(Google__Protobuf__Any, value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned google__protobuf__any__field_indices_by_name[] = {
  0,   /* field[0] = type_url */
  1,   /* field[1] = value */
};
static const ProtobufCIntRange google__protobuf__any__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor google__protobuf__any__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "google.protobuf.Any",
  "Any",
  "Google__Protobuf__Any",
  "google.protobuf",
  sizeof(Google__Protobuf__Any),
  2,
  google__protobuf__any__field_descriptors,
  google__protobuf__any__field_indices_by_name,
  1,  google__protobuf__any__number_ranges,
  (ProtobufCMessageInit) google__protobuf__any__init,
  NULL,NULL,NULL    /* reserved[123] */
};
