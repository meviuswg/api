/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: github.com/TheThingsNetwork/api/monitor/monitor.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "github.com/TheThingsNetwork/api/monitor/monitor.pb-c.h"
static const ProtobufCMethodDescriptor monitor__monitor__method_descriptors[11] =
{
  { "RouterStatus", &router__status__descriptor, &google__protobuf__empty__descriptor },
  { "GatewayStatus", &gateway__status__descriptor, &google__protobuf__empty__descriptor },
  { "GatewayUplink", &router__uplink_message__descriptor, &google__protobuf__empty__descriptor },
  { "GatewayDownlink", &router__downlink_message__descriptor, &google__protobuf__empty__descriptor },
  { "BrokerStatus", &broker__status__descriptor, &google__protobuf__empty__descriptor },
  { "BrokerUplink", &broker__deduplicated_uplink_message__descriptor, &google__protobuf__empty__descriptor },
  { "BrokerDownlink", &broker__downlink_message__descriptor, &google__protobuf__empty__descriptor },
  { "HandlerStatus", &handler__status__descriptor, &google__protobuf__empty__descriptor },
  { "HandlerUplink", &broker__deduplicated_uplink_message__descriptor, &google__protobuf__empty__descriptor },
  { "HandlerDownlink", &broker__downlink_message__descriptor, &google__protobuf__empty__descriptor },
  { "NetworkServerStatus", &networkserver__status__descriptor, &google__protobuf__empty__descriptor },
};
const unsigned monitor__monitor__method_indices_by_name[] = {
  6,        /* BrokerDownlink */
  4,        /* BrokerStatus */
  5,        /* BrokerUplink */
  3,        /* GatewayDownlink */
  1,        /* GatewayStatus */
  2,        /* GatewayUplink */
  9,        /* HandlerDownlink */
  7,        /* HandlerStatus */
  8,        /* HandlerUplink */
  10,        /* NetworkServerStatus */
  0         /* RouterStatus */
};
const ProtobufCServiceDescriptor monitor__monitor__descriptor =
{
  PROTOBUF_C__SERVICE_DESCRIPTOR_MAGIC,
  "monitor.Monitor",
  "Monitor",
  "Monitor__Monitor",
  "monitor",
  11,
  monitor__monitor__method_descriptors,
  monitor__monitor__method_indices_by_name
};
void monitor__monitor__router_status(ProtobufCService *service,
                                     const Router__Status *input,
                                     Google__Protobuf__Empty_Closure closure,
                                     void *closure_data)
{
  assert(service->descriptor == &monitor__monitor__descriptor);
  service->invoke(service, 0, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void monitor__monitor__gateway_status(ProtobufCService *service,
                                      const Gateway__Status *input,
                                      Google__Protobuf__Empty_Closure closure,
                                      void *closure_data)
{
  assert(service->descriptor == &monitor__monitor__descriptor);
  service->invoke(service, 1, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void monitor__monitor__gateway_uplink(ProtobufCService *service,
                                      const Router__UplinkMessage *input,
                                      Google__Protobuf__Empty_Closure closure,
                                      void *closure_data)
{
  assert(service->descriptor == &monitor__monitor__descriptor);
  service->invoke(service, 2, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void monitor__monitor__gateway_downlink(ProtobufCService *service,
                                        const Router__DownlinkMessage *input,
                                        Google__Protobuf__Empty_Closure closure,
                                        void *closure_data)
{
  assert(service->descriptor == &monitor__monitor__descriptor);
  service->invoke(service, 3, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void monitor__monitor__broker_status(ProtobufCService *service,
                                     const Broker__Status *input,
                                     Google__Protobuf__Empty_Closure closure,
                                     void *closure_data)
{
  assert(service->descriptor == &monitor__monitor__descriptor);
  service->invoke(service, 4, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void monitor__monitor__broker_uplink(ProtobufCService *service,
                                     const Broker__DeduplicatedUplinkMessage *input,
                                     Google__Protobuf__Empty_Closure closure,
                                     void *closure_data)
{
  assert(service->descriptor == &monitor__monitor__descriptor);
  service->invoke(service, 5, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void monitor__monitor__broker_downlink(ProtobufCService *service,
                                       const Broker__DownlinkMessage *input,
                                       Google__Protobuf__Empty_Closure closure,
                                       void *closure_data)
{
  assert(service->descriptor == &monitor__monitor__descriptor);
  service->invoke(service, 6, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void monitor__monitor__handler_status(ProtobufCService *service,
                                      const Handler__Status *input,
                                      Google__Protobuf__Empty_Closure closure,
                                      void *closure_data)
{
  assert(service->descriptor == &monitor__monitor__descriptor);
  service->invoke(service, 7, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void monitor__monitor__handler_uplink(ProtobufCService *service,
                                      const Broker__DeduplicatedUplinkMessage *input,
                                      Google__Protobuf__Empty_Closure closure,
                                      void *closure_data)
{
  assert(service->descriptor == &monitor__monitor__descriptor);
  service->invoke(service, 8, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void monitor__monitor__handler_downlink(ProtobufCService *service,
                                        const Broker__DownlinkMessage *input,
                                        Google__Protobuf__Empty_Closure closure,
                                        void *closure_data)
{
  assert(service->descriptor == &monitor__monitor__descriptor);
  service->invoke(service, 9, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void monitor__monitor__network_server_status(ProtobufCService *service,
                                             const Networkserver__Status *input,
                                             Google__Protobuf__Empty_Closure closure,
                                             void *closure_data)
{
  assert(service->descriptor == &monitor__monitor__descriptor);
  service->invoke(service, 10, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void monitor__monitor__init (Monitor__Monitor_Service *service,
                             Monitor__Monitor_ServiceDestroy destroy)
{
  protobuf_c_service_generated_init (&service->base,
                                     &monitor__monitor__descriptor,
                                     (ProtobufCServiceDestroy) destroy);
}
