// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: github.com/TheThingsNetwork/api/networkserver/networkserver.proto

package org.thethingsnetwork.api.networkserver;

public interface StatusOrBuilder extends
    // @@protoc_insertion_point(interface_extends:networkserver.Status)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <code>.api.SystemStats system = 1 [(.gogoproto.nullable) = false];</code>
   * @return Whether the system field is set.
   */
  boolean hasSystem();
  /**
   * <code>.api.SystemStats system = 1 [(.gogoproto.nullable) = false];</code>
   * @return The system.
   */
  org.thethingsnetwork.api.SystemStats getSystem();
  /**
   * <code>.api.SystemStats system = 1 [(.gogoproto.nullable) = false];</code>
   */
  org.thethingsnetwork.api.SystemStatsOrBuilder getSystemOrBuilder();

  /**
   * <code>.api.ComponentStats component = 2 [(.gogoproto.nullable) = false];</code>
   * @return Whether the component field is set.
   */
  boolean hasComponent();
  /**
   * <code>.api.ComponentStats component = 2 [(.gogoproto.nullable) = false];</code>
   * @return The component.
   */
  org.thethingsnetwork.api.ComponentStats getComponent();
  /**
   * <code>.api.ComponentStats component = 2 [(.gogoproto.nullable) = false];</code>
   */
  org.thethingsnetwork.api.ComponentStatsOrBuilder getComponentOrBuilder();

  /**
   * <code>.api.Rates uplink = 11;</code>
   * @return Whether the uplink field is set.
   */
  boolean hasUplink();
  /**
   * <code>.api.Rates uplink = 11;</code>
   * @return The uplink.
   */
  org.thethingsnetwork.api.Rates getUplink();
  /**
   * <code>.api.Rates uplink = 11;</code>
   */
  org.thethingsnetwork.api.RatesOrBuilder getUplinkOrBuilder();

  /**
   * <code>.api.Rates downlink = 12;</code>
   * @return Whether the downlink field is set.
   */
  boolean hasDownlink();
  /**
   * <code>.api.Rates downlink = 12;</code>
   * @return The downlink.
   */
  org.thethingsnetwork.api.Rates getDownlink();
  /**
   * <code>.api.Rates downlink = 12;</code>
   */
  org.thethingsnetwork.api.RatesOrBuilder getDownlinkOrBuilder();

  /**
   * <code>.api.Rates activations = 13;</code>
   * @return Whether the activations field is set.
   */
  boolean hasActivations();
  /**
   * <code>.api.Rates activations = 13;</code>
   * @return The activations.
   */
  org.thethingsnetwork.api.Rates getActivations();
  /**
   * <code>.api.Rates activations = 13;</code>
   */
  org.thethingsnetwork.api.RatesOrBuilder getActivationsOrBuilder();

  /**
   * <code>.api.Percentiles devices_per_address = 21;</code>
   * @return Whether the devicesPerAddress field is set.
   */
  boolean hasDevicesPerAddress();
  /**
   * <code>.api.Percentiles devices_per_address = 21;</code>
   * @return The devicesPerAddress.
   */
  org.thethingsnetwork.api.Percentiles getDevicesPerAddress();
  /**
   * <code>.api.Percentiles devices_per_address = 21;</code>
   */
  org.thethingsnetwork.api.PercentilesOrBuilder getDevicesPerAddressOrBuilder();
}
