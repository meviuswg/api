// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: github.com/TheThingsNetwork/api/networkserver/networkserver.proto

package org.thethingsnetwork.api.networkserver;

/**
 * Protobuf type {@code networkserver.DevicesResponse}
 */
public  final class DevicesResponse extends
    com.google.protobuf.GeneratedMessageV3 implements
    // @@protoc_insertion_point(message_implements:networkserver.DevicesResponse)
    DevicesResponseOrBuilder {
private static final long serialVersionUID = 0L;
  // Use DevicesResponse.newBuilder() to construct.
  private DevicesResponse(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
    super(builder);
  }
  private DevicesResponse() {
    results_ = java.util.Collections.emptyList();
  }

  @java.lang.Override
  public final com.google.protobuf.UnknownFieldSet
  getUnknownFields() {
    return this.unknownFields;
  }
  private DevicesResponse(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    this();
    if (extensionRegistry == null) {
      throw new java.lang.NullPointerException();
    }
    int mutable_bitField0_ = 0;
    com.google.protobuf.UnknownFieldSet.Builder unknownFields =
        com.google.protobuf.UnknownFieldSet.newBuilder();
    try {
      boolean done = false;
      while (!done) {
        int tag = input.readTag();
        switch (tag) {
          case 0:
            done = true;
            break;
          default: {
            if (!parseUnknownFieldProto3(
                input, unknownFields, extensionRegistry, tag)) {
              done = true;
            }
            break;
          }
          case 10: {
            if (!((mutable_bitField0_ & 0x00000001) == 0x00000001)) {
              results_ = new java.util.ArrayList<org.thethingsnetwork.api.protocol.lorawan.Device>();
              mutable_bitField0_ |= 0x00000001;
            }
            results_.add(
                input.readMessage(org.thethingsnetwork.api.protocol.lorawan.Device.parser(), extensionRegistry));
            break;
          }
        }
      }
    } catch (com.google.protobuf.InvalidProtocolBufferException e) {
      throw e.setUnfinishedMessage(this);
    } catch (java.io.IOException e) {
      throw new com.google.protobuf.InvalidProtocolBufferException(
          e).setUnfinishedMessage(this);
    } finally {
      if (((mutable_bitField0_ & 0x00000001) == 0x00000001)) {
        results_ = java.util.Collections.unmodifiableList(results_);
      }
      this.unknownFields = unknownFields.build();
      makeExtensionsImmutable();
    }
  }
  public static final com.google.protobuf.Descriptors.Descriptor
      getDescriptor() {
    return org.thethingsnetwork.api.networkserver.NetworkServerProto.internal_static_networkserver_DevicesResponse_descriptor;
  }

  protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internalGetFieldAccessorTable() {
    return org.thethingsnetwork.api.networkserver.NetworkServerProto.internal_static_networkserver_DevicesResponse_fieldAccessorTable
        .ensureFieldAccessorsInitialized(
            org.thethingsnetwork.api.networkserver.DevicesResponse.class, org.thethingsnetwork.api.networkserver.DevicesResponse.Builder.class);
  }

  public static final int RESULTS_FIELD_NUMBER = 1;
  private java.util.List<org.thethingsnetwork.api.protocol.lorawan.Device> results_;
  /**
   * <code>repeated .lorawan.Device results = 1;</code>
   */
  public java.util.List<org.thethingsnetwork.api.protocol.lorawan.Device> getResultsList() {
    return results_;
  }
  /**
   * <code>repeated .lorawan.Device results = 1;</code>
   */
  public java.util.List<? extends org.thethingsnetwork.api.protocol.lorawan.DeviceOrBuilder> 
      getResultsOrBuilderList() {
    return results_;
  }
  /**
   * <code>repeated .lorawan.Device results = 1;</code>
   */
  public int getResultsCount() {
    return results_.size();
  }
  /**
   * <code>repeated .lorawan.Device results = 1;</code>
   */
  public org.thethingsnetwork.api.protocol.lorawan.Device getResults(int index) {
    return results_.get(index);
  }
  /**
   * <code>repeated .lorawan.Device results = 1;</code>
   */
  public org.thethingsnetwork.api.protocol.lorawan.DeviceOrBuilder getResultsOrBuilder(
      int index) {
    return results_.get(index);
  }

  private byte memoizedIsInitialized = -1;
  public final boolean isInitialized() {
    byte isInitialized = memoizedIsInitialized;
    if (isInitialized == 1) return true;
    if (isInitialized == 0) return false;

    memoizedIsInitialized = 1;
    return true;
  }

  public void writeTo(com.google.protobuf.CodedOutputStream output)
                      throws java.io.IOException {
    for (int i = 0; i < results_.size(); i++) {
      output.writeMessage(1, results_.get(i));
    }
    unknownFields.writeTo(output);
  }

  public int getSerializedSize() {
    int size = memoizedSize;
    if (size != -1) return size;

    size = 0;
    for (int i = 0; i < results_.size(); i++) {
      size += com.google.protobuf.CodedOutputStream
        .computeMessageSize(1, results_.get(i));
    }
    size += unknownFields.getSerializedSize();
    memoizedSize = size;
    return size;
  }

  @java.lang.Override
  public boolean equals(final java.lang.Object obj) {
    if (obj == this) {
     return true;
    }
    if (!(obj instanceof org.thethingsnetwork.api.networkserver.DevicesResponse)) {
      return super.equals(obj);
    }
    org.thethingsnetwork.api.networkserver.DevicesResponse other = (org.thethingsnetwork.api.networkserver.DevicesResponse) obj;

    boolean result = true;
    result = result && getResultsList()
        .equals(other.getResultsList());
    result = result && unknownFields.equals(other.unknownFields);
    return result;
  }

  @java.lang.Override
  public int hashCode() {
    if (memoizedHashCode != 0) {
      return memoizedHashCode;
    }
    int hash = 41;
    hash = (19 * hash) + getDescriptor().hashCode();
    if (getResultsCount() > 0) {
      hash = (37 * hash) + RESULTS_FIELD_NUMBER;
      hash = (53 * hash) + getResultsList().hashCode();
    }
    hash = (29 * hash) + unknownFields.hashCode();
    memoizedHashCode = hash;
    return hash;
  }

  public static org.thethingsnetwork.api.networkserver.DevicesResponse parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static org.thethingsnetwork.api.networkserver.DevicesResponse parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static org.thethingsnetwork.api.networkserver.DevicesResponse parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static org.thethingsnetwork.api.networkserver.DevicesResponse parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static org.thethingsnetwork.api.networkserver.DevicesResponse parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static org.thethingsnetwork.api.networkserver.DevicesResponse parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static org.thethingsnetwork.api.networkserver.DevicesResponse parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static org.thethingsnetwork.api.networkserver.DevicesResponse parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }
  public static org.thethingsnetwork.api.networkserver.DevicesResponse parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input);
  }
  public static org.thethingsnetwork.api.networkserver.DevicesResponse parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
  }
  public static org.thethingsnetwork.api.networkserver.DevicesResponse parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static org.thethingsnetwork.api.networkserver.DevicesResponse parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }

  public Builder newBuilderForType() { return newBuilder(); }
  public static Builder newBuilder() {
    return DEFAULT_INSTANCE.toBuilder();
  }
  public static Builder newBuilder(org.thethingsnetwork.api.networkserver.DevicesResponse prototype) {
    return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
  }
  public Builder toBuilder() {
    return this == DEFAULT_INSTANCE
        ? new Builder() : new Builder().mergeFrom(this);
  }

  @java.lang.Override
  protected Builder newBuilderForType(
      com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
    Builder builder = new Builder(parent);
    return builder;
  }
  /**
   * Protobuf type {@code networkserver.DevicesResponse}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
      // @@protoc_insertion_point(builder_implements:networkserver.DevicesResponse)
      org.thethingsnetwork.api.networkserver.DevicesResponseOrBuilder {
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return org.thethingsnetwork.api.networkserver.NetworkServerProto.internal_static_networkserver_DevicesResponse_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return org.thethingsnetwork.api.networkserver.NetworkServerProto.internal_static_networkserver_DevicesResponse_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              org.thethingsnetwork.api.networkserver.DevicesResponse.class, org.thethingsnetwork.api.networkserver.DevicesResponse.Builder.class);
    }

    // Construct using org.thethingsnetwork.api.networkserver.DevicesResponse.newBuilder()
    private Builder() {
      maybeForceBuilderInitialization();
    }

    private Builder(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      super(parent);
      maybeForceBuilderInitialization();
    }
    private void maybeForceBuilderInitialization() {
      if (com.google.protobuf.GeneratedMessageV3
              .alwaysUseFieldBuilders) {
        getResultsFieldBuilder();
      }
    }
    public Builder clear() {
      super.clear();
      if (resultsBuilder_ == null) {
        results_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000001);
      } else {
        resultsBuilder_.clear();
      }
      return this;
    }

    public com.google.protobuf.Descriptors.Descriptor
        getDescriptorForType() {
      return org.thethingsnetwork.api.networkserver.NetworkServerProto.internal_static_networkserver_DevicesResponse_descriptor;
    }

    public org.thethingsnetwork.api.networkserver.DevicesResponse getDefaultInstanceForType() {
      return org.thethingsnetwork.api.networkserver.DevicesResponse.getDefaultInstance();
    }

    public org.thethingsnetwork.api.networkserver.DevicesResponse build() {
      org.thethingsnetwork.api.networkserver.DevicesResponse result = buildPartial();
      if (!result.isInitialized()) {
        throw newUninitializedMessageException(result);
      }
      return result;
    }

    public org.thethingsnetwork.api.networkserver.DevicesResponse buildPartial() {
      org.thethingsnetwork.api.networkserver.DevicesResponse result = new org.thethingsnetwork.api.networkserver.DevicesResponse(this);
      int from_bitField0_ = bitField0_;
      if (resultsBuilder_ == null) {
        if (((bitField0_ & 0x00000001) == 0x00000001)) {
          results_ = java.util.Collections.unmodifiableList(results_);
          bitField0_ = (bitField0_ & ~0x00000001);
        }
        result.results_ = results_;
      } else {
        result.results_ = resultsBuilder_.build();
      }
      onBuilt();
      return result;
    }

    public Builder clone() {
      return (Builder) super.clone();
    }
    public Builder setField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        java.lang.Object value) {
      return (Builder) super.setField(field, value);
    }
    public Builder clearField(
        com.google.protobuf.Descriptors.FieldDescriptor field) {
      return (Builder) super.clearField(field);
    }
    public Builder clearOneof(
        com.google.protobuf.Descriptors.OneofDescriptor oneof) {
      return (Builder) super.clearOneof(oneof);
    }
    public Builder setRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        int index, java.lang.Object value) {
      return (Builder) super.setRepeatedField(field, index, value);
    }
    public Builder addRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        java.lang.Object value) {
      return (Builder) super.addRepeatedField(field, value);
    }
    public Builder mergeFrom(com.google.protobuf.Message other) {
      if (other instanceof org.thethingsnetwork.api.networkserver.DevicesResponse) {
        return mergeFrom((org.thethingsnetwork.api.networkserver.DevicesResponse)other);
      } else {
        super.mergeFrom(other);
        return this;
      }
    }

    public Builder mergeFrom(org.thethingsnetwork.api.networkserver.DevicesResponse other) {
      if (other == org.thethingsnetwork.api.networkserver.DevicesResponse.getDefaultInstance()) return this;
      if (resultsBuilder_ == null) {
        if (!other.results_.isEmpty()) {
          if (results_.isEmpty()) {
            results_ = other.results_;
            bitField0_ = (bitField0_ & ~0x00000001);
          } else {
            ensureResultsIsMutable();
            results_.addAll(other.results_);
          }
          onChanged();
        }
      } else {
        if (!other.results_.isEmpty()) {
          if (resultsBuilder_.isEmpty()) {
            resultsBuilder_.dispose();
            resultsBuilder_ = null;
            results_ = other.results_;
            bitField0_ = (bitField0_ & ~0x00000001);
            resultsBuilder_ = 
              com.google.protobuf.GeneratedMessageV3.alwaysUseFieldBuilders ?
                 getResultsFieldBuilder() : null;
          } else {
            resultsBuilder_.addAllMessages(other.results_);
          }
        }
      }
      this.mergeUnknownFields(other.unknownFields);
      onChanged();
      return this;
    }

    public final boolean isInitialized() {
      return true;
    }

    public Builder mergeFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      org.thethingsnetwork.api.networkserver.DevicesResponse parsedMessage = null;
      try {
        parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        parsedMessage = (org.thethingsnetwork.api.networkserver.DevicesResponse) e.getUnfinishedMessage();
        throw e.unwrapIOException();
      } finally {
        if (parsedMessage != null) {
          mergeFrom(parsedMessage);
        }
      }
      return this;
    }
    private int bitField0_;

    private java.util.List<org.thethingsnetwork.api.protocol.lorawan.Device> results_ =
      java.util.Collections.emptyList();
    private void ensureResultsIsMutable() {
      if (!((bitField0_ & 0x00000001) == 0x00000001)) {
        results_ = new java.util.ArrayList<org.thethingsnetwork.api.protocol.lorawan.Device>(results_);
        bitField0_ |= 0x00000001;
       }
    }

    private com.google.protobuf.RepeatedFieldBuilderV3<
        org.thethingsnetwork.api.protocol.lorawan.Device, org.thethingsnetwork.api.protocol.lorawan.Device.Builder, org.thethingsnetwork.api.protocol.lorawan.DeviceOrBuilder> resultsBuilder_;

    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public java.util.List<org.thethingsnetwork.api.protocol.lorawan.Device> getResultsList() {
      if (resultsBuilder_ == null) {
        return java.util.Collections.unmodifiableList(results_);
      } else {
        return resultsBuilder_.getMessageList();
      }
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public int getResultsCount() {
      if (resultsBuilder_ == null) {
        return results_.size();
      } else {
        return resultsBuilder_.getCount();
      }
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public org.thethingsnetwork.api.protocol.lorawan.Device getResults(int index) {
      if (resultsBuilder_ == null) {
        return results_.get(index);
      } else {
        return resultsBuilder_.getMessage(index);
      }
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public Builder setResults(
        int index, org.thethingsnetwork.api.protocol.lorawan.Device value) {
      if (resultsBuilder_ == null) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureResultsIsMutable();
        results_.set(index, value);
        onChanged();
      } else {
        resultsBuilder_.setMessage(index, value);
      }
      return this;
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public Builder setResults(
        int index, org.thethingsnetwork.api.protocol.lorawan.Device.Builder builderForValue) {
      if (resultsBuilder_ == null) {
        ensureResultsIsMutable();
        results_.set(index, builderForValue.build());
        onChanged();
      } else {
        resultsBuilder_.setMessage(index, builderForValue.build());
      }
      return this;
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public Builder addResults(org.thethingsnetwork.api.protocol.lorawan.Device value) {
      if (resultsBuilder_ == null) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureResultsIsMutable();
        results_.add(value);
        onChanged();
      } else {
        resultsBuilder_.addMessage(value);
      }
      return this;
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public Builder addResults(
        int index, org.thethingsnetwork.api.protocol.lorawan.Device value) {
      if (resultsBuilder_ == null) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureResultsIsMutable();
        results_.add(index, value);
        onChanged();
      } else {
        resultsBuilder_.addMessage(index, value);
      }
      return this;
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public Builder addResults(
        org.thethingsnetwork.api.protocol.lorawan.Device.Builder builderForValue) {
      if (resultsBuilder_ == null) {
        ensureResultsIsMutable();
        results_.add(builderForValue.build());
        onChanged();
      } else {
        resultsBuilder_.addMessage(builderForValue.build());
      }
      return this;
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public Builder addResults(
        int index, org.thethingsnetwork.api.protocol.lorawan.Device.Builder builderForValue) {
      if (resultsBuilder_ == null) {
        ensureResultsIsMutable();
        results_.add(index, builderForValue.build());
        onChanged();
      } else {
        resultsBuilder_.addMessage(index, builderForValue.build());
      }
      return this;
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public Builder addAllResults(
        java.lang.Iterable<? extends org.thethingsnetwork.api.protocol.lorawan.Device> values) {
      if (resultsBuilder_ == null) {
        ensureResultsIsMutable();
        com.google.protobuf.AbstractMessageLite.Builder.addAll(
            values, results_);
        onChanged();
      } else {
        resultsBuilder_.addAllMessages(values);
      }
      return this;
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public Builder clearResults() {
      if (resultsBuilder_ == null) {
        results_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000001);
        onChanged();
      } else {
        resultsBuilder_.clear();
      }
      return this;
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public Builder removeResults(int index) {
      if (resultsBuilder_ == null) {
        ensureResultsIsMutable();
        results_.remove(index);
        onChanged();
      } else {
        resultsBuilder_.remove(index);
      }
      return this;
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public org.thethingsnetwork.api.protocol.lorawan.Device.Builder getResultsBuilder(
        int index) {
      return getResultsFieldBuilder().getBuilder(index);
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public org.thethingsnetwork.api.protocol.lorawan.DeviceOrBuilder getResultsOrBuilder(
        int index) {
      if (resultsBuilder_ == null) {
        return results_.get(index);  } else {
        return resultsBuilder_.getMessageOrBuilder(index);
      }
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public java.util.List<? extends org.thethingsnetwork.api.protocol.lorawan.DeviceOrBuilder> 
         getResultsOrBuilderList() {
      if (resultsBuilder_ != null) {
        return resultsBuilder_.getMessageOrBuilderList();
      } else {
        return java.util.Collections.unmodifiableList(results_);
      }
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public org.thethingsnetwork.api.protocol.lorawan.Device.Builder addResultsBuilder() {
      return getResultsFieldBuilder().addBuilder(
          org.thethingsnetwork.api.protocol.lorawan.Device.getDefaultInstance());
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public org.thethingsnetwork.api.protocol.lorawan.Device.Builder addResultsBuilder(
        int index) {
      return getResultsFieldBuilder().addBuilder(
          index, org.thethingsnetwork.api.protocol.lorawan.Device.getDefaultInstance());
    }
    /**
     * <code>repeated .lorawan.Device results = 1;</code>
     */
    public java.util.List<org.thethingsnetwork.api.protocol.lorawan.Device.Builder> 
         getResultsBuilderList() {
      return getResultsFieldBuilder().getBuilderList();
    }
    private com.google.protobuf.RepeatedFieldBuilderV3<
        org.thethingsnetwork.api.protocol.lorawan.Device, org.thethingsnetwork.api.protocol.lorawan.Device.Builder, org.thethingsnetwork.api.protocol.lorawan.DeviceOrBuilder> 
        getResultsFieldBuilder() {
      if (resultsBuilder_ == null) {
        resultsBuilder_ = new com.google.protobuf.RepeatedFieldBuilderV3<
            org.thethingsnetwork.api.protocol.lorawan.Device, org.thethingsnetwork.api.protocol.lorawan.Device.Builder, org.thethingsnetwork.api.protocol.lorawan.DeviceOrBuilder>(
                results_,
                ((bitField0_ & 0x00000001) == 0x00000001),
                getParentForChildren(),
                isClean());
        results_ = null;
      }
      return resultsBuilder_;
    }
    public final Builder setUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.setUnknownFieldsProto3(unknownFields);
    }

    public final Builder mergeUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.mergeUnknownFields(unknownFields);
    }


    // @@protoc_insertion_point(builder_scope:networkserver.DevicesResponse)
  }

  // @@protoc_insertion_point(class_scope:networkserver.DevicesResponse)
  private static final org.thethingsnetwork.api.networkserver.DevicesResponse DEFAULT_INSTANCE;
  static {
    DEFAULT_INSTANCE = new org.thethingsnetwork.api.networkserver.DevicesResponse();
  }

  public static org.thethingsnetwork.api.networkserver.DevicesResponse getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static final com.google.protobuf.Parser<DevicesResponse>
      PARSER = new com.google.protobuf.AbstractParser<DevicesResponse>() {
    public DevicesResponse parsePartialFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return new DevicesResponse(input, extensionRegistry);
    }
  };

  public static com.google.protobuf.Parser<DevicesResponse> parser() {
    return PARSER;
  }

  @java.lang.Override
  public com.google.protobuf.Parser<DevicesResponse> getParserForType() {
    return PARSER;
  }

  public org.thethingsnetwork.api.networkserver.DevicesResponse getDefaultInstanceForType() {
    return DEFAULT_INSTANCE;
  }

}

