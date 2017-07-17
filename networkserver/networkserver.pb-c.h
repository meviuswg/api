/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: github.com/TheThingsNetwork/api/networkserver/networkserver.proto */

#ifndef PROTOBUF_C_github_2ecom_2fTheThingsNetwork_2fapi_2fnetworkserver_2fnetworkserver_2eproto__INCLUDED
#define PROTOBUF_C_github_2ecom_2fTheThingsNetwork_2fapi_2fnetworkserver_2fnetworkserver_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "github.com/gogo/protobuf/gogoproto/gogo.pb-c.h"
#include "github.com/TheThingsNetwork/api/api.pb-c.h"
#include "github.com/TheThingsNetwork/api/protocol/lorawan/device.pb-c.h"
#include "github.com/TheThingsNetwork/api/broker/broker.pb-c.h"
#include "github.com/TheThingsNetwork/api/handler/handler.pb-c.h"

typedef struct _Networkserver__DevicesRequest Networkserver__DevicesRequest;
typedef struct _Networkserver__DevicesResponse Networkserver__DevicesResponse;
typedef struct _Networkserver__StatusRequest Networkserver__StatusRequest;
typedef struct _Networkserver__Status Networkserver__Status;


/* --- enums --- */


/* --- messages --- */

struct  _Networkserver__DevicesRequest
{
  ProtobufCMessage base;
  /*
   * Device address from the uplink message
   */
  protobuf_c_boolean has_dev_addr;
  ProtobufCBinaryData dev_addr;
  /*
   * Frame counter from the uplink message
   */
  protobuf_c_boolean has_f_cnt;
  uint32_t f_cnt;
};
#define NETWORKSERVER__DEVICES_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&networkserver__devices_request__descriptor) \
    , 0,{0,NULL}, 0,0 }


struct  _Networkserver__DevicesResponse
{
  ProtobufCMessage base;
  size_t n_results;
  Lorawan__Device **results;
};
#define NETWORKSERVER__DEVICES_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&networkserver__devices_response__descriptor) \
    , 0,NULL }


/*
 * message StatusRequest is used to request the status of this NetworkServer
 */
struct  _Networkserver__StatusRequest
{
  ProtobufCMessage base;
};
#define NETWORKSERVER__STATUS_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&networkserver__status_request__descriptor) \
     }


/*
 * message Status is the response to the StatusRequest
 */
struct  _Networkserver__Status
{
  ProtobufCMessage base;
  Api__SystemStats *system;
  Api__ComponentStats *component;
  Api__Rates *uplink;
  Api__Rates *downlink;
  Api__Rates *activations;
  Api__Percentiles *devices_per_address;
};
#define NETWORKSERVER__STATUS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&networkserver__status__descriptor) \
    , NULL, NULL, NULL, NULL, NULL, NULL }


/* Networkserver__DevicesRequest methods */
void   networkserver__devices_request__init
                     (Networkserver__DevicesRequest         *message);
size_t networkserver__devices_request__get_packed_size
                     (const Networkserver__DevicesRequest   *message);
size_t networkserver__devices_request__pack
                     (const Networkserver__DevicesRequest   *message,
                      uint8_t             *out);
size_t networkserver__devices_request__pack_to_buffer
                     (const Networkserver__DevicesRequest   *message,
                      ProtobufCBuffer     *buffer);
Networkserver__DevicesRequest *
       networkserver__devices_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   networkserver__devices_request__free_unpacked
                     (Networkserver__DevicesRequest *message,
                      ProtobufCAllocator *allocator);
/* Networkserver__DevicesResponse methods */
void   networkserver__devices_response__init
                     (Networkserver__DevicesResponse         *message);
size_t networkserver__devices_response__get_packed_size
                     (const Networkserver__DevicesResponse   *message);
size_t networkserver__devices_response__pack
                     (const Networkserver__DevicesResponse   *message,
                      uint8_t             *out);
size_t networkserver__devices_response__pack_to_buffer
                     (const Networkserver__DevicesResponse   *message,
                      ProtobufCBuffer     *buffer);
Networkserver__DevicesResponse *
       networkserver__devices_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   networkserver__devices_response__free_unpacked
                     (Networkserver__DevicesResponse *message,
                      ProtobufCAllocator *allocator);
/* Networkserver__StatusRequest methods */
void   networkserver__status_request__init
                     (Networkserver__StatusRequest         *message);
size_t networkserver__status_request__get_packed_size
                     (const Networkserver__StatusRequest   *message);
size_t networkserver__status_request__pack
                     (const Networkserver__StatusRequest   *message,
                      uint8_t             *out);
size_t networkserver__status_request__pack_to_buffer
                     (const Networkserver__StatusRequest   *message,
                      ProtobufCBuffer     *buffer);
Networkserver__StatusRequest *
       networkserver__status_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   networkserver__status_request__free_unpacked
                     (Networkserver__StatusRequest *message,
                      ProtobufCAllocator *allocator);
/* Networkserver__Status methods */
void   networkserver__status__init
                     (Networkserver__Status         *message);
size_t networkserver__status__get_packed_size
                     (const Networkserver__Status   *message);
size_t networkserver__status__pack
                     (const Networkserver__Status   *message,
                      uint8_t             *out);
size_t networkserver__status__pack_to_buffer
                     (const Networkserver__Status   *message,
                      ProtobufCBuffer     *buffer);
Networkserver__Status *
       networkserver__status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   networkserver__status__free_unpacked
                     (Networkserver__Status *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Networkserver__DevicesRequest_Closure)
                 (const Networkserver__DevicesRequest *message,
                  void *closure_data);
typedef void (*Networkserver__DevicesResponse_Closure)
                 (const Networkserver__DevicesResponse *message,
                  void *closure_data);
typedef void (*Networkserver__StatusRequest_Closure)
                 (const Networkserver__StatusRequest *message,
                  void *closure_data);
typedef void (*Networkserver__Status_Closure)
                 (const Networkserver__Status *message,
                  void *closure_data);

/* --- services --- */

typedef struct _Networkserver__NetworkServer_Service Networkserver__NetworkServer_Service;
struct _Networkserver__NetworkServer_Service
{
  ProtobufCService base;
  void (*get_devices)(Networkserver__NetworkServer_Service *service,
                      const Networkserver__DevicesRequest *input,
                      Networkserver__DevicesResponse_Closure closure,
                      void *closure_data);
  void (*prepare_activation)(Networkserver__NetworkServer_Service *service,
                             const Broker__DeduplicatedDeviceActivationRequest *input,
                             Broker__DeduplicatedDeviceActivationRequest_Closure closure,
                             void *closure_data);
  void (*activate)(Networkserver__NetworkServer_Service *service,
                   const Handler__DeviceActivationResponse *input,
                   Handler__DeviceActivationResponse_Closure closure,
                   void *closure_data);
  void (*uplink)(Networkserver__NetworkServer_Service *service,
                 const Broker__DeduplicatedUplinkMessage *input,
                 Broker__DeduplicatedUplinkMessage_Closure closure,
                 void *closure_data);
  void (*downlink)(Networkserver__NetworkServer_Service *service,
                   const Broker__DownlinkMessage *input,
                   Broker__DownlinkMessage_Closure closure,
                   void *closure_data);
};
typedef void (*Networkserver__NetworkServer_ServiceDestroy)(Networkserver__NetworkServer_Service *);
void networkserver__network_server__init (Networkserver__NetworkServer_Service *service,
                                          Networkserver__NetworkServer_ServiceDestroy destroy);
#define NETWORKSERVER__NETWORK_SERVER__BASE_INIT \
    { &networkserver__network_server__descriptor, protobuf_c_service_invoke_internal, NULL }
#define NETWORKSERVER__NETWORK_SERVER__INIT(function_prefix__) \
    { NETWORKSERVER__NETWORK_SERVER__BASE_INIT,\
      function_prefix__ ## get_devices,\
      function_prefix__ ## prepare_activation,\
      function_prefix__ ## activate,\
      function_prefix__ ## uplink,\
      function_prefix__ ## downlink  }
void networkserver__network_server__get_devices(ProtobufCService *service,
                                                const Networkserver__DevicesRequest *input,
                                                Networkserver__DevicesResponse_Closure closure,
                                                void *closure_data);
void networkserver__network_server__prepare_activation(ProtobufCService *service,
                                                       const Broker__DeduplicatedDeviceActivationRequest *input,
                                                       Broker__DeduplicatedDeviceActivationRequest_Closure closure,
                                                       void *closure_data);
void networkserver__network_server__activate(ProtobufCService *service,
                                             const Handler__DeviceActivationResponse *input,
                                             Handler__DeviceActivationResponse_Closure closure,
                                             void *closure_data);
void networkserver__network_server__uplink(ProtobufCService *service,
                                           const Broker__DeduplicatedUplinkMessage *input,
                                           Broker__DeduplicatedUplinkMessage_Closure closure,
                                           void *closure_data);
void networkserver__network_server__downlink(ProtobufCService *service,
                                             const Broker__DownlinkMessage *input,
                                             Broker__DownlinkMessage_Closure closure,
                                             void *closure_data);
typedef struct _Networkserver__NetworkServerManager_Service Networkserver__NetworkServerManager_Service;
struct _Networkserver__NetworkServerManager_Service
{
  ProtobufCService base;
  void (*get_status)(Networkserver__NetworkServerManager_Service *service,
                     const Networkserver__StatusRequest *input,
                     Networkserver__Status_Closure closure,
                     void *closure_data);
};
typedef void (*Networkserver__NetworkServerManager_ServiceDestroy)(Networkserver__NetworkServerManager_Service *);
void networkserver__network_server_manager__init (Networkserver__NetworkServerManager_Service *service,
                                                  Networkserver__NetworkServerManager_ServiceDestroy destroy);
#define NETWORKSERVER__NETWORK_SERVER_MANAGER__BASE_INIT \
    { &networkserver__network_server_manager__descriptor, protobuf_c_service_invoke_internal, NULL }
#define NETWORKSERVER__NETWORK_SERVER_MANAGER__INIT(function_prefix__) \
    { NETWORKSERVER__NETWORK_SERVER_MANAGER__BASE_INIT,\
      function_prefix__ ## get_status  }
void networkserver__network_server_manager__get_status(ProtobufCService *service,
                                                       const Networkserver__StatusRequest *input,
                                                       Networkserver__Status_Closure closure,
                                                       void *closure_data);

/* --- descriptors --- */

extern const ProtobufCMessageDescriptor networkserver__devices_request__descriptor;
extern const ProtobufCMessageDescriptor networkserver__devices_response__descriptor;
extern const ProtobufCMessageDescriptor networkserver__status_request__descriptor;
extern const ProtobufCMessageDescriptor networkserver__status__descriptor;
extern const ProtobufCServiceDescriptor networkserver__network_server__descriptor;
extern const ProtobufCServiceDescriptor networkserver__network_server_manager__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_github_2ecom_2fTheThingsNetwork_2fapi_2fnetworkserver_2fnetworkserver_2eproto__INCLUDED */
