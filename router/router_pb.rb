# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: router/router.proto

require 'google/protobuf'

require 'google/protobuf/empty_pb'
require 'api_pb'
require 'protocol/protocol_pb'
require 'gateway/gateway_pb'
require 'trace/trace_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "router.SubscribeRequest" do
  end
  add_message "router.UplinkMessage" do
    optional :payload, :bytes, 1
    optional :message, :message, 2, "protocol.Message"
    optional :protocol_metadata, :message, 11, "protocol.RxMetadata"
    optional :gateway_metadata, :message, 12, "gateway.RxMetadata"
    optional :trace, :message, 21, "trace.Trace"
  end
  add_message "router.DownlinkMessage" do
    optional :payload, :bytes, 1
    optional :message, :message, 2, "protocol.Message"
    optional :protocol_configuration, :message, 11, "protocol.TxConfiguration"
    optional :gateway_configuration, :message, 12, "gateway.TxConfiguration"
    optional :trace, :message, 21, "trace.Trace"
  end
  add_message "router.DeviceActivationRequest" do
    optional :payload, :bytes, 1
    optional :message, :message, 2, "protocol.Message"
    optional :dev_eui, :bytes, 11
    optional :app_eui, :bytes, 12
    optional :protocol_metadata, :message, 21, "protocol.RxMetadata"
    optional :gateway_metadata, :message, 22, "gateway.RxMetadata"
    optional :activation_metadata, :message, 23, "protocol.ActivationMetadata"
    optional :trace, :message, 31, "trace.Trace"
  end
  add_message "router.DeviceActivationResponse" do
  end
  add_message "router.GatewayStatusRequest" do
    optional :gateway_id, :string, 1
  end
  add_message "router.GatewayStatusResponse" do
    optional :last_seen, :int64, 1
    optional :status, :message, 2, "gateway.Status"
  end
  add_message "router.StatusRequest" do
  end
  add_message "router.Status" do
    optional :system, :message, 1, "api.SystemStats"
    optional :component, :message, 2, "api.ComponentStats"
    optional :gateway_status, :message, 11, "api.Rates"
    optional :uplink, :message, 12, "api.Rates"
    optional :downlink, :message, 13, "api.Rates"
    optional :activations, :message, 14, "api.Rates"
    optional :connected_gateways, :uint32, 21
    optional :connected_brokers, :uint32, 22
  end
end

module Router
  SubscribeRequest = Google::Protobuf::DescriptorPool.generated_pool.lookup("router.SubscribeRequest").msgclass
  UplinkMessage = Google::Protobuf::DescriptorPool.generated_pool.lookup("router.UplinkMessage").msgclass
  DownlinkMessage = Google::Protobuf::DescriptorPool.generated_pool.lookup("router.DownlinkMessage").msgclass
  DeviceActivationRequest = Google::Protobuf::DescriptorPool.generated_pool.lookup("router.DeviceActivationRequest").msgclass
  DeviceActivationResponse = Google::Protobuf::DescriptorPool.generated_pool.lookup("router.DeviceActivationResponse").msgclass
  GatewayStatusRequest = Google::Protobuf::DescriptorPool.generated_pool.lookup("router.GatewayStatusRequest").msgclass
  GatewayStatusResponse = Google::Protobuf::DescriptorPool.generated_pool.lookup("router.GatewayStatusResponse").msgclass
  StatusRequest = Google::Protobuf::DescriptorPool.generated_pool.lookup("router.StatusRequest").msgclass
  Status = Google::Protobuf::DescriptorPool.generated_pool.lookup("router.Status").msgclass
end