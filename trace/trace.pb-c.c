/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: github.com/TheThingsNetwork/api/trace/trace.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "github.com/TheThingsNetwork/api/trace/trace.pb-c.h"
void   trace__trace__metadata_entry__init
                     (Trace__Trace__MetadataEntry         *message)
{
  static Trace__Trace__MetadataEntry init_value = TRACE__TRACE__METADATA_ENTRY__INIT;
  *message = init_value;
}
void   trace__trace__init
                     (Trace__Trace         *message)
{
  static Trace__Trace init_value = TRACE__TRACE__INIT;
  *message = init_value;
}
size_t trace__trace__get_packed_size
                     (const Trace__Trace *message)
{
  assert(message->base.descriptor == &trace__trace__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t trace__trace__pack
                     (const Trace__Trace *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &trace__trace__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t trace__trace__pack_to_buffer
                     (const Trace__Trace *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &trace__trace__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Trace__Trace *
       trace__trace__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Trace__Trace *)
     protobuf_c_message_unpack (&trace__trace__descriptor,
                                allocator, len, data);
}
void   trace__trace__free_unpacked
                     (Trace__Trace *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &trace__trace__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor trace__trace__metadata_entry__field_descriptors[2] =
{
  {
    "key",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Trace__Trace__MetadataEntry, key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "value",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Trace__Trace__MetadataEntry, value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned trace__trace__metadata_entry__field_indices_by_name[] = {
  0,   /* field[0] = key */
  1,   /* field[1] = value */
};
static const ProtobufCIntRange trace__trace__metadata_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor trace__trace__metadata_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "trace.Trace.MetadataEntry",
  "MetadataEntry",
  "Trace__Trace__MetadataEntry",
  "trace",
  sizeof(Trace__Trace__MetadataEntry),
  2,
  trace__trace__metadata_entry__field_descriptors,
  trace__trace__metadata_entry__field_indices_by_name,
  1,  trace__trace__metadata_entry__number_ranges,
  (ProtobufCMessageInit) trace__trace__metadata_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor trace__trace__field_descriptors[7] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Trace__Trace, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "time",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Trace__Trace, has_time),
    offsetof(Trace__Trace, time),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "service_id",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Trace__Trace, service_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "service_name",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Trace__Trace, service_name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "event",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Trace__Trace, event),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "metadata",
    6,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Trace__Trace, n_metadata),
    offsetof(Trace__Trace, metadata),
    &trace__trace__metadata_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "parents",
    11,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Trace__Trace, n_parents),
    offsetof(Trace__Trace, parents),
    &trace__trace__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned trace__trace__field_indices_by_name[] = {
  4,   /* field[4] = event */
  0,   /* field[0] = id */
  5,   /* field[5] = metadata */
  6,   /* field[6] = parents */
  2,   /* field[2] = service_id */
  3,   /* field[3] = service_name */
  1,   /* field[1] = time */
};
static const ProtobufCIntRange trace__trace__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 11, 6 },
  { 0, 7 }
};
const ProtobufCMessageDescriptor trace__trace__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "trace.Trace",
  "Trace",
  "Trace__Trace",
  "trace",
  sizeof(Trace__Trace),
  7,
  trace__trace__field_descriptors,
  trace__trace__field_indices_by_name,
  2,  trace__trace__number_ranges,
  (ProtobufCMessageInit) trace__trace__init,
  NULL,NULL,NULL    /* reserved[123] */
};
