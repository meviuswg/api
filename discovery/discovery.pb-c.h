/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: github.com/TheThingsNetwork/api/discovery/discovery.proto */

#ifndef PROTOBUF_C_github_2ecom_2fTheThingsNetwork_2fapi_2fdiscovery_2fdiscovery_2eproto__INCLUDED
#define PROTOBUF_C_github_2ecom_2fTheThingsNetwork_2fapi_2fdiscovery_2fdiscovery_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "google/protobuf/empty.pb-c.h"
#include "google/api/annotations.pb-c.h"
#include "github.com/gogo/protobuf/gogoproto/gogo.pb-c.h"

typedef struct _Discovery__Metadata Discovery__Metadata;
typedef struct _Discovery__Announcement Discovery__Announcement;
typedef struct _Discovery__GetServiceRequest Discovery__GetServiceRequest;
typedef struct _Discovery__GetRequest Discovery__GetRequest;
typedef struct _Discovery__MetadataRequest Discovery__MetadataRequest;
typedef struct _Discovery__AnnouncementsResponse Discovery__AnnouncementsResponse;
typedef struct _Discovery__GetByAppIDRequest Discovery__GetByAppIDRequest;
typedef struct _Discovery__GetByAppEUIRequest Discovery__GetByAppEUIRequest;


/* --- enums --- */


/* --- messages --- */

typedef enum {
  DISCOVERY__METADATA__METADATA__NOT_SET = 0,
  DISCOVERY__METADATA__METADATA_DEV_ADDR_PREFIX = 20,
  DISCOVERY__METADATA__METADATA_APP_ID = 30,
  DISCOVERY__METADATA__METADATA_APP_EUI = 31,
} Discovery__Metadata__MetadataCase;

struct  _Discovery__Metadata
{
  ProtobufCMessage base;
  Discovery__Metadata__MetadataCase metadata_case;
  union {
    /*
     * DevAddr prefix that is routed by this Broker
     * 5 bytes; the first byte is the prefix length, the following 4 bytes are the address.
     * Only authorized Brokers can announce PREFIX metadata.
     */
    /*
     * for some reason gogoproto customtype doesn't work in a oneof, so we do this manually
     */
    ProtobufCBinaryData dev_addr_prefix;
    /*
     * AppID that is registered to this Handler
     * This metadata can only be added if the requesting client is authorized to manage this AppID.
     */
    char *app_id;
    /*
     * AppEUI that is registered to this Join Handler
     * Only authorized Join Handlers can announce APP_EUI metadata (and we don't have any of those yet).
     */
    /*
     * for some reason gogoproto customtype doesn't work in a oneof, so we do this manually
     */
    ProtobufCBinaryData app_eui;
  };
};
#define DISCOVERY__METADATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&discovery__metadata__descriptor) \
    , DISCOVERY__METADATA__METADATA__NOT_SET, {0} }


/*
 * The Announcement of a service (also called component)
 */
struct  _Discovery__Announcement
{
  ProtobufCMessage base;
  /*
   * The ID of the component
   */
  char *id;
  /*
   * The name of the component (router/broker/handler)
   */
  char *service_name;
  /*
   * Service version in the form "[version]-[commit] ([build date])"
   */
  char *service_version;
  /*
   * Description of the component
   */
  char *description;
  /*
   * URL with documentation or more information about this component
   */
  char *url;
  /*
   * Indicates whether this service is part of The Things Network (the public community network)
   */
  protobuf_c_boolean has_public_;
  protobuf_c_boolean public_;
  /*
   * Comma-separated network addresses in the form "domain1:port,domain2:port,domain3:port" (currently we only use the first)
   */
  char *net_address;
  /*
   * ECDSA public key of this component
   */
  char *public_key;
  /*
   * TLS Certificate for gRPC on net_address (if TLS is enabled)
   */
  char *certificate;
  /*
   * Contains the address where the HTTP API is exposed (if there is one).
   * Format of api_address: `http(s)://domain(:port)`
   * default http port is 80, default https port is 443.
   */
  char *api_address;
  /*
   * Contains the address where the MQTT API is exposed (if there is one)
   * Format of mqtt_address: `(mqtt(s)://)host(:port)`
   * default mqtt port is 1883, default mqtts port is 8883.
   * Examples:
   * if `host:port` then `mqtt://host:port`
   * if `host:8883` then `mqtts://host:8883`
   * if `host` then `mqtt://host:1883` and `mqtts://host:8883`
   * if `mqtt://host` then `mqtt://host:1883`
   * if `mqtts://host` then `mqtt://host:1883` and `mqtts://host:8883`
   */
  char *mqtt_address;
  /*
   * Contains the address where the AMQP API is exposed (if there is one)
   * Format of amqp_address: `(amqp(s)://)host(:port)`
   * default amqp port is 5672, default amqps port is 5671.
   * Examples:
   * if `host:port` then `amqp://host:port`
   * if `host:5671` then `amqps://host:5671`
   * if `host` then `amqp://host:5672` and `amqps://host:5671`
   * if `amqp://host` then `amqp://host:5672`
   * if `amqps://host` then `amqp://host:5672` and `amqps://host:5671`
   */
  char *amqp_address;
  /*
   * Metadata for this component
   */
  size_t n_metadata;
  Discovery__Metadata **metadata;
};
#define DISCOVERY__ANNOUNCEMENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&discovery__announcement__descriptor) \
    , NULL, NULL, NULL, NULL, NULL, 0,0, NULL, NULL, NULL, NULL, NULL, NULL, 0,NULL }


struct  _Discovery__GetServiceRequest
{
  ProtobufCMessage base;
  /*
   * The name of the service (router/broker/handler)
   */
  char *service_name;
};
#define DISCOVERY__GET_SERVICE_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&discovery__get_service_request__descriptor) \
    , NULL }


/*
 * The identifier of the service that should be returned
 */
struct  _Discovery__GetRequest
{
  ProtobufCMessage base;
  /*
   * The ID of the service
   */
  char *id;
  /*
   * The name of the service (router/broker/handler)
   */
  char *service_name;
};
#define DISCOVERY__GET_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&discovery__get_request__descriptor) \
    , NULL, NULL }


/*
 * The metadata to add or remove from an announement
 */
struct  _Discovery__MetadataRequest
{
  ProtobufCMessage base;
  /*
   * The ID of the service that should be modified
   */
  char *id;
  /*
   * The name of the service (router/broker/handler) that should be modified
   */
  char *service_name;
  /*
   * Metadata to add or remove
   */
  Discovery__Metadata *metadata;
};
#define DISCOVERY__METADATA_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&discovery__metadata_request__descriptor) \
    , NULL, NULL, NULL }


/*
 * A list of announcements
 */
struct  _Discovery__AnnouncementsResponse
{
  ProtobufCMessage base;
  size_t n_services;
  Discovery__Announcement **services;
};
#define DISCOVERY__ANNOUNCEMENTS_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&discovery__announcements_response__descriptor) \
    , 0,NULL }


struct  _Discovery__GetByAppIDRequest
{
  ProtobufCMessage base;
  /*
   * compatible with Metadata message
   */
  char *app_id;
};
#define DISCOVERY__GET_BY_APP_IDREQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&discovery__get_by_app_idrequest__descriptor) \
    , NULL }


struct  _Discovery__GetByAppEUIRequest
{
  ProtobufCMessage base;
  /*
   * compatible with Metadata message
   */
  protobuf_c_boolean has_app_eui;
  ProtobufCBinaryData app_eui;
};
#define DISCOVERY__GET_BY_APP_EUIREQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&discovery__get_by_app_euirequest__descriptor) \
    , 0,{0,NULL} }


/* Discovery__Metadata methods */
void   discovery__metadata__init
                     (Discovery__Metadata         *message);
size_t discovery__metadata__get_packed_size
                     (const Discovery__Metadata   *message);
size_t discovery__metadata__pack
                     (const Discovery__Metadata   *message,
                      uint8_t             *out);
size_t discovery__metadata__pack_to_buffer
                     (const Discovery__Metadata   *message,
                      ProtobufCBuffer     *buffer);
Discovery__Metadata *
       discovery__metadata__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   discovery__metadata__free_unpacked
                     (Discovery__Metadata *message,
                      ProtobufCAllocator *allocator);
/* Discovery__Announcement methods */
void   discovery__announcement__init
                     (Discovery__Announcement         *message);
size_t discovery__announcement__get_packed_size
                     (const Discovery__Announcement   *message);
size_t discovery__announcement__pack
                     (const Discovery__Announcement   *message,
                      uint8_t             *out);
size_t discovery__announcement__pack_to_buffer
                     (const Discovery__Announcement   *message,
                      ProtobufCBuffer     *buffer);
Discovery__Announcement *
       discovery__announcement__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   discovery__announcement__free_unpacked
                     (Discovery__Announcement *message,
                      ProtobufCAllocator *allocator);
/* Discovery__GetServiceRequest methods */
void   discovery__get_service_request__init
                     (Discovery__GetServiceRequest         *message);
size_t discovery__get_service_request__get_packed_size
                     (const Discovery__GetServiceRequest   *message);
size_t discovery__get_service_request__pack
                     (const Discovery__GetServiceRequest   *message,
                      uint8_t             *out);
size_t discovery__get_service_request__pack_to_buffer
                     (const Discovery__GetServiceRequest   *message,
                      ProtobufCBuffer     *buffer);
Discovery__GetServiceRequest *
       discovery__get_service_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   discovery__get_service_request__free_unpacked
                     (Discovery__GetServiceRequest *message,
                      ProtobufCAllocator *allocator);
/* Discovery__GetRequest methods */
void   discovery__get_request__init
                     (Discovery__GetRequest         *message);
size_t discovery__get_request__get_packed_size
                     (const Discovery__GetRequest   *message);
size_t discovery__get_request__pack
                     (const Discovery__GetRequest   *message,
                      uint8_t             *out);
size_t discovery__get_request__pack_to_buffer
                     (const Discovery__GetRequest   *message,
                      ProtobufCBuffer     *buffer);
Discovery__GetRequest *
       discovery__get_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   discovery__get_request__free_unpacked
                     (Discovery__GetRequest *message,
                      ProtobufCAllocator *allocator);
/* Discovery__MetadataRequest methods */
void   discovery__metadata_request__init
                     (Discovery__MetadataRequest         *message);
size_t discovery__metadata_request__get_packed_size
                     (const Discovery__MetadataRequest   *message);
size_t discovery__metadata_request__pack
                     (const Discovery__MetadataRequest   *message,
                      uint8_t             *out);
size_t discovery__metadata_request__pack_to_buffer
                     (const Discovery__MetadataRequest   *message,
                      ProtobufCBuffer     *buffer);
Discovery__MetadataRequest *
       discovery__metadata_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   discovery__metadata_request__free_unpacked
                     (Discovery__MetadataRequest *message,
                      ProtobufCAllocator *allocator);
/* Discovery__AnnouncementsResponse methods */
void   discovery__announcements_response__init
                     (Discovery__AnnouncementsResponse         *message);
size_t discovery__announcements_response__get_packed_size
                     (const Discovery__AnnouncementsResponse   *message);
size_t discovery__announcements_response__pack
                     (const Discovery__AnnouncementsResponse   *message,
                      uint8_t             *out);
size_t discovery__announcements_response__pack_to_buffer
                     (const Discovery__AnnouncementsResponse   *message,
                      ProtobufCBuffer     *buffer);
Discovery__AnnouncementsResponse *
       discovery__announcements_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   discovery__announcements_response__free_unpacked
                     (Discovery__AnnouncementsResponse *message,
                      ProtobufCAllocator *allocator);
/* Discovery__GetByAppIDRequest methods */
void   discovery__get_by_app_idrequest__init
                     (Discovery__GetByAppIDRequest         *message);
size_t discovery__get_by_app_idrequest__get_packed_size
                     (const Discovery__GetByAppIDRequest   *message);
size_t discovery__get_by_app_idrequest__pack
                     (const Discovery__GetByAppIDRequest   *message,
                      uint8_t             *out);
size_t discovery__get_by_app_idrequest__pack_to_buffer
                     (const Discovery__GetByAppIDRequest   *message,
                      ProtobufCBuffer     *buffer);
Discovery__GetByAppIDRequest *
       discovery__get_by_app_idrequest__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   discovery__get_by_app_idrequest__free_unpacked
                     (Discovery__GetByAppIDRequest *message,
                      ProtobufCAllocator *allocator);
/* Discovery__GetByAppEUIRequest methods */
void   discovery__get_by_app_euirequest__init
                     (Discovery__GetByAppEUIRequest         *message);
size_t discovery__get_by_app_euirequest__get_packed_size
                     (const Discovery__GetByAppEUIRequest   *message);
size_t discovery__get_by_app_euirequest__pack
                     (const Discovery__GetByAppEUIRequest   *message,
                      uint8_t             *out);
size_t discovery__get_by_app_euirequest__pack_to_buffer
                     (const Discovery__GetByAppEUIRequest   *message,
                      ProtobufCBuffer     *buffer);
Discovery__GetByAppEUIRequest *
       discovery__get_by_app_euirequest__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   discovery__get_by_app_euirequest__free_unpacked
                     (Discovery__GetByAppEUIRequest *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Discovery__Metadata_Closure)
                 (const Discovery__Metadata *message,
                  void *closure_data);
typedef void (*Discovery__Announcement_Closure)
                 (const Discovery__Announcement *message,
                  void *closure_data);
typedef void (*Discovery__GetServiceRequest_Closure)
                 (const Discovery__GetServiceRequest *message,
                  void *closure_data);
typedef void (*Discovery__GetRequest_Closure)
                 (const Discovery__GetRequest *message,
                  void *closure_data);
typedef void (*Discovery__MetadataRequest_Closure)
                 (const Discovery__MetadataRequest *message,
                  void *closure_data);
typedef void (*Discovery__AnnouncementsResponse_Closure)
                 (const Discovery__AnnouncementsResponse *message,
                  void *closure_data);
typedef void (*Discovery__GetByAppIDRequest_Closure)
                 (const Discovery__GetByAppIDRequest *message,
                  void *closure_data);
typedef void (*Discovery__GetByAppEUIRequest_Closure)
                 (const Discovery__GetByAppEUIRequest *message,
                  void *closure_data);

/* --- services --- */

typedef struct _Discovery__Discovery_Service Discovery__Discovery_Service;
struct _Discovery__Discovery_Service
{
  ProtobufCService base;
  void (*announce)(Discovery__Discovery_Service *service,
                   const Discovery__Announcement *input,
                   Google__Protobuf__Empty_Closure closure,
                   void *closure_data);
  void (*get_all)(Discovery__Discovery_Service *service,
                  const Discovery__GetServiceRequest *input,
                  Discovery__AnnouncementsResponse_Closure closure,
                  void *closure_data);
  void (*get)(Discovery__Discovery_Service *service,
              const Discovery__GetRequest *input,
              Discovery__Announcement_Closure closure,
              void *closure_data);
  void (*add_metadata)(Discovery__Discovery_Service *service,
                       const Discovery__MetadataRequest *input,
                       Google__Protobuf__Empty_Closure closure,
                       void *closure_data);
  void (*delete_metadata)(Discovery__Discovery_Service *service,
                          const Discovery__MetadataRequest *input,
                          Google__Protobuf__Empty_Closure closure,
                          void *closure_data);
  void (*get_by_app_id)(Discovery__Discovery_Service *service,
                        const Discovery__GetByAppIDRequest *input,
                        Discovery__Announcement_Closure closure,
                        void *closure_data);
  void (*get_by_app_eui)(Discovery__Discovery_Service *service,
                         const Discovery__GetByAppEUIRequest *input,
                         Discovery__Announcement_Closure closure,
                         void *closure_data);
};
typedef void (*Discovery__Discovery_ServiceDestroy)(Discovery__Discovery_Service *);
void discovery__discovery__init (Discovery__Discovery_Service *service,
                                 Discovery__Discovery_ServiceDestroy destroy);
#define DISCOVERY__DISCOVERY__BASE_INIT \
    { &discovery__discovery__descriptor, protobuf_c_service_invoke_internal, NULL }
#define DISCOVERY__DISCOVERY__INIT(function_prefix__) \
    { DISCOVERY__DISCOVERY__BASE_INIT,\
      function_prefix__ ## announce,\
      function_prefix__ ## get_all,\
      function_prefix__ ## get,\
      function_prefix__ ## add_metadata,\
      function_prefix__ ## delete_metadata,\
      function_prefix__ ## get_by_app_id,\
      function_prefix__ ## get_by_app_eui  }
void discovery__discovery__announce(ProtobufCService *service,
                                    const Discovery__Announcement *input,
                                    Google__Protobuf__Empty_Closure closure,
                                    void *closure_data);
void discovery__discovery__get_all(ProtobufCService *service,
                                   const Discovery__GetServiceRequest *input,
                                   Discovery__AnnouncementsResponse_Closure closure,
                                   void *closure_data);
void discovery__discovery__get(ProtobufCService *service,
                               const Discovery__GetRequest *input,
                               Discovery__Announcement_Closure closure,
                               void *closure_data);
void discovery__discovery__add_metadata(ProtobufCService *service,
                                        const Discovery__MetadataRequest *input,
                                        Google__Protobuf__Empty_Closure closure,
                                        void *closure_data);
void discovery__discovery__delete_metadata(ProtobufCService *service,
                                           const Discovery__MetadataRequest *input,
                                           Google__Protobuf__Empty_Closure closure,
                                           void *closure_data);
void discovery__discovery__get_by_app_id(ProtobufCService *service,
                                         const Discovery__GetByAppIDRequest *input,
                                         Discovery__Announcement_Closure closure,
                                         void *closure_data);
void discovery__discovery__get_by_app_eui(ProtobufCService *service,
                                          const Discovery__GetByAppEUIRequest *input,
                                          Discovery__Announcement_Closure closure,
                                          void *closure_data);
typedef struct _Discovery__DiscoveryManager_Service Discovery__DiscoveryManager_Service;
struct _Discovery__DiscoveryManager_Service
{
  ProtobufCService base;
};
typedef void (*Discovery__DiscoveryManager_ServiceDestroy)(Discovery__DiscoveryManager_Service *);
void discovery__discovery_manager__init (Discovery__DiscoveryManager_Service *service,
                                         Discovery__DiscoveryManager_ServiceDestroy destroy);
#define DISCOVERY__DISCOVERY_MANAGER__BASE_INIT \
    { &discovery__discovery_manager__descriptor, protobuf_c_service_invoke_internal, NULL }
#define DISCOVERY__DISCOVERY_MANAGER__INIT(function_prefix__) \
    { DISCOVERY__DISCOVERY_MANAGER__BASE_INIT  }

/* --- descriptors --- */

extern const ProtobufCMessageDescriptor discovery__metadata__descriptor;
extern const ProtobufCMessageDescriptor discovery__announcement__descriptor;
extern const ProtobufCMessageDescriptor discovery__get_service_request__descriptor;
extern const ProtobufCMessageDescriptor discovery__get_request__descriptor;
extern const ProtobufCMessageDescriptor discovery__metadata_request__descriptor;
extern const ProtobufCMessageDescriptor discovery__announcements_response__descriptor;
extern const ProtobufCMessageDescriptor discovery__get_by_app_idrequest__descriptor;
extern const ProtobufCMessageDescriptor discovery__get_by_app_euirequest__descriptor;
extern const ProtobufCServiceDescriptor discovery__discovery__descriptor;
extern const ProtobufCServiceDescriptor discovery__discovery_manager__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_github_2ecom_2fTheThingsNetwork_2fapi_2fdiscovery_2fdiscovery_2eproto__INCLUDED */
