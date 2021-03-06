// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: github.com/TheThingsNetwork/api/handler/handler.proto

package org.thethingsnetwork.api.handler;

public interface DryDownlinkMessageOrBuilder extends
    // @@protoc_insertion_point(interface_extends:handler.DryDownlinkMessage)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <pre>
   * The binary payload to use
   * </pre>
   *
   * <code>bytes payload = 1;</code>
   * @return The payload.
   */
  com.google.protobuf.ByteString getPayload();

  /**
   * <pre>
   * JSON-encoded object with fields to encode
   * </pre>
   *
   * <code>string fields = 2;</code>
   * @return The fields.
   */
  java.lang.String getFields();
  /**
   * <pre>
   * JSON-encoded object with fields to encode
   * </pre>
   *
   * <code>string fields = 2;</code>
   * @return The bytes for fields.
   */
  com.google.protobuf.ByteString
      getFieldsBytes();

  /**
   * <pre>
   * The Application containing the payload functions that should be executed
   * </pre>
   *
   * <code>.handler.Application app = 3 [(.gogoproto.nullable) = false];</code>
   * @return Whether the app field is set.
   */
  boolean hasApp();
  /**
   * <pre>
   * The Application containing the payload functions that should be executed
   * </pre>
   *
   * <code>.handler.Application app = 3 [(.gogoproto.nullable) = false];</code>
   * @return The app.
   */
  org.thethingsnetwork.api.handler.Application getApp();
  /**
   * <pre>
   * The Application containing the payload functions that should be executed
   * </pre>
   *
   * <code>.handler.Application app = 3 [(.gogoproto.nullable) = false];</code>
   */
  org.thethingsnetwork.api.handler.ApplicationOrBuilder getAppOrBuilder();

  /**
   * <pre>
   * The port number that should be passed to the payload function
   * </pre>
   *
   * <code>uint32 port = 4;</code>
   * @return The port.
   */
  int getPort();
}
