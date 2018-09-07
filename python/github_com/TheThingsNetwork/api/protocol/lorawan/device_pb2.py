# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: github.com/TheThingsNetwork/api/protocol/lorawan/device.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import empty_pb2 as google_dot_protobuf_dot_empty__pb2



DESCRIPTOR = _descriptor.FileDescriptor(
  name='github.com/TheThingsNetwork/api/protocol/lorawan/device.proto',
  package='lorawan',
  syntax='proto3',
  serialized_pb=_b('\n=github.com/TheThingsNetwork/api/protocol/lorawan/device.proto\x12\x07lorawan\x1a\x1bgoogle/protobuf/empty.proto\x1a-github.com/gogo/protobuf/gogoproto/gogo.proto\"\xbe\x01\n\x10\x44\x65viceIdentifier\x12T\n\x07\x61pp_eui\x18\x01 \x01(\x0c\x42\x43\xe2\xde\x1f\x06\x41ppEUI\xc8\xde\x1f\x00\xda\xde\x1f\x31github.com/TheThingsNetwork/ttn/core/types.AppEUI\x12T\n\x07\x64\x65v_eui\x18\x02 \x01(\x0c\x42\x43\xe2\xde\x1f\x06\x44\x65vEUI\xc8\xde\x1f\x00\xda\xde\x1f\x31github.com/TheThingsNetwork/ttn/core/types.DevEUI\"\xc6\x06\n\x06\x44\x65vice\x12T\n\x07\x61pp_eui\x18\x01 \x01(\x0c\x42\x43\xe2\xde\x1f\x06\x41ppEUI\xc8\xde\x1f\x00\xda\xde\x1f\x31github.com/TheThingsNetwork/ttn/core/types.AppEUI\x12T\n\x07\x64\x65v_eui\x18\x02 \x01(\x0c\x42\x43\xe2\xde\x1f\x06\x44\x65vEUI\xc8\xde\x1f\x00\xda\xde\x1f\x31github.com/TheThingsNetwork/ttn/core/types.DevEUI\x12\x19\n\x06\x61pp_id\x18\x03 \x01(\tB\t\xe2\xde\x1f\x05\x41ppID\x12\x19\n\x06\x64\x65v_id\x18\x04 \x01(\tB\t\xe2\xde\x1f\x05\x44\x65vID\x12H\n\x08\x64\x65v_addr\x18\x05 \x01(\x0c\x42\x36\xda\xde\x1f\x32github.com/TheThingsNetwork/ttn/core/types.DevAddr\x12I\n\tnwk_s_key\x18\x06 \x01(\x0c\x42\x36\xda\xde\x1f\x32github.com/TheThingsNetwork/ttn/core/types.NwkSKey\x12I\n\tapp_s_key\x18\x07 \x01(\x0c\x42\x36\xda\xde\x1f\x32github.com/TheThingsNetwork/ttn/core/types.AppSKey\x12\x46\n\x07\x61pp_key\x18\x08 \x01(\x0c\x42\x35\xda\xde\x1f\x31github.com/TheThingsNetwork/ttn/core/types.AppKey\x12\x10\n\x08\x66_cnt_up\x18\t \x01(\r\x12\x12\n\nf_cnt_down\x18\n \x01(\r\x12\x1b\n\x13\x64isable_f_cnt_check\x18\x0b \x01(\x08\x12\x18\n\x10uses32_bit_f_cnt\x18\x0c \x01(\x08\x12\x1e\n\x16\x61\x63tivation_constraints\x18\r \x01(\t\x12P\n\x0fused_dev_nonces\x18\x0e \x03(\x0c\x42\x37\xda\xde\x1f\x33github.com/TheThingsNetwork/ttn/core/types.DevNonce\x12P\n\x0fused_app_nonces\x18\x0f \x03(\x0c\x42\x37\xda\xde\x1f\x33github.com/TheThingsNetwork/ttn/core/types.AppNonce\x12\x11\n\tlast_seen\x18\x15 \x01(\x03\x32\xc1\x01\n\rDeviceManager\x12\x37\n\tGetDevice\x12\x19.lorawan.DeviceIdentifier\x1a\x0f.lorawan.Device\x12\x34\n\tSetDevice\x12\x0f.lorawan.Device\x1a\x16.google.protobuf.Empty\x12\x41\n\x0c\x44\x65leteDevice\x12\x19.lorawan.DeviceIdentifier\x1a\x16.google.protobuf.EmptyB\x9a\x01\n)org.thethingsnetwork.api.protocol.lorawanB\x12LoRaWANDeviceProtoP\x01Z0github.com/TheThingsNetwork/api/protocol/lorawan\xaa\x02$TheThingsNetwork.API.LoRaWANProtocolb\x06proto3')
  ,
  dependencies=[google_dot_protobuf_dot_empty__pb2.DESCRIPTOR,])




_DEVICEIDENTIFIER = _descriptor.Descriptor(
  name='DeviceIdentifier',
  full_name='lorawan.DeviceIdentifier',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='app_eui', full_name='lorawan.DeviceIdentifier.app_eui', index=0,
      number=1, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\342\336\037\006AppEUI\310\336\037\000\332\336\0371github.com/TheThingsNetwork/ttn/core/types.AppEUI')), file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='dev_eui', full_name='lorawan.DeviceIdentifier.dev_eui', index=1,
      number=2, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\342\336\037\006DevEUI\310\336\037\000\332\336\0371github.com/TheThingsNetwork/ttn/core/types.DevEUI')), file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=151,
  serialized_end=341,
)


_DEVICE = _descriptor.Descriptor(
  name='Device',
  full_name='lorawan.Device',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='app_eui', full_name='lorawan.Device.app_eui', index=0,
      number=1, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\342\336\037\006AppEUI\310\336\037\000\332\336\0371github.com/TheThingsNetwork/ttn/core/types.AppEUI')), file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='dev_eui', full_name='lorawan.Device.dev_eui', index=1,
      number=2, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\342\336\037\006DevEUI\310\336\037\000\332\336\0371github.com/TheThingsNetwork/ttn/core/types.DevEUI')), file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='app_id', full_name='lorawan.Device.app_id', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\342\336\037\005AppID')), file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='dev_id', full_name='lorawan.Device.dev_id', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\342\336\037\005DevID')), file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='dev_addr', full_name='lorawan.Device.dev_addr', index=4,
      number=5, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\332\336\0372github.com/TheThingsNetwork/ttn/core/types.DevAddr')), file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='nwk_s_key', full_name='lorawan.Device.nwk_s_key', index=5,
      number=6, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\332\336\0372github.com/TheThingsNetwork/ttn/core/types.NwkSKey')), file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='app_s_key', full_name='lorawan.Device.app_s_key', index=6,
      number=7, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\332\336\0372github.com/TheThingsNetwork/ttn/core/types.AppSKey')), file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='app_key', full_name='lorawan.Device.app_key', index=7,
      number=8, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\332\336\0371github.com/TheThingsNetwork/ttn/core/types.AppKey')), file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='f_cnt_up', full_name='lorawan.Device.f_cnt_up', index=8,
      number=9, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='f_cnt_down', full_name='lorawan.Device.f_cnt_down', index=9,
      number=10, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='disable_f_cnt_check', full_name='lorawan.Device.disable_f_cnt_check', index=10,
      number=11, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='uses32_bit_f_cnt', full_name='lorawan.Device.uses32_bit_f_cnt', index=11,
      number=12, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='activation_constraints', full_name='lorawan.Device.activation_constraints', index=12,
      number=13, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='used_dev_nonces', full_name='lorawan.Device.used_dev_nonces', index=13,
      number=14, type=12, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\332\336\0373github.com/TheThingsNetwork/ttn/core/types.DevNonce')), file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='used_app_nonces', full_name='lorawan.Device.used_app_nonces', index=14,
      number=15, type=12, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\332\336\0373github.com/TheThingsNetwork/ttn/core/types.AppNonce')), file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='last_seen', full_name='lorawan.Device.last_seen', index=15,
      number=21, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=344,
  serialized_end=1182,
)

DESCRIPTOR.message_types_by_name['DeviceIdentifier'] = _DEVICEIDENTIFIER
DESCRIPTOR.message_types_by_name['Device'] = _DEVICE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

DeviceIdentifier = _reflection.GeneratedProtocolMessageType('DeviceIdentifier', (_message.Message,), dict(
  DESCRIPTOR = _DEVICEIDENTIFIER,
  __module__ = 'github.com.TheThingsNetwork.api.protocol.lorawan.device_pb2'
  # @@protoc_insertion_point(class_scope:lorawan.DeviceIdentifier)
  ))
_sym_db.RegisterMessage(DeviceIdentifier)

Device = _reflection.GeneratedProtocolMessageType('Device', (_message.Message,), dict(
  DESCRIPTOR = _DEVICE,
  __module__ = 'github.com.TheThingsNetwork.api.protocol.lorawan.device_pb2'
  # @@protoc_insertion_point(class_scope:lorawan.Device)
  ))
_sym_db.RegisterMessage(Device)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n)org.thethingsnetwork.api.protocol.lorawanB\022LoRaWANDeviceProtoP\001Z0github.com/TheThingsNetwork/api/protocol/lorawan\252\002$TheThingsNetwork.API.LoRaWANProtocol'))
_DEVICEIDENTIFIER.fields_by_name['app_eui'].has_options = True
_DEVICEIDENTIFIER.fields_by_name['app_eui']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\342\336\037\006AppEUI\310\336\037\000\332\336\0371github.com/TheThingsNetwork/ttn/core/types.AppEUI'))
_DEVICEIDENTIFIER.fields_by_name['dev_eui'].has_options = True
_DEVICEIDENTIFIER.fields_by_name['dev_eui']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\342\336\037\006DevEUI\310\336\037\000\332\336\0371github.com/TheThingsNetwork/ttn/core/types.DevEUI'))
_DEVICE.fields_by_name['app_eui'].has_options = True
_DEVICE.fields_by_name['app_eui']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\342\336\037\006AppEUI\310\336\037\000\332\336\0371github.com/TheThingsNetwork/ttn/core/types.AppEUI'))
_DEVICE.fields_by_name['dev_eui'].has_options = True
_DEVICE.fields_by_name['dev_eui']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\342\336\037\006DevEUI\310\336\037\000\332\336\0371github.com/TheThingsNetwork/ttn/core/types.DevEUI'))
_DEVICE.fields_by_name['app_id'].has_options = True
_DEVICE.fields_by_name['app_id']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\342\336\037\005AppID'))
_DEVICE.fields_by_name['dev_id'].has_options = True
_DEVICE.fields_by_name['dev_id']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\342\336\037\005DevID'))
_DEVICE.fields_by_name['dev_addr'].has_options = True
_DEVICE.fields_by_name['dev_addr']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\332\336\0372github.com/TheThingsNetwork/ttn/core/types.DevAddr'))
_DEVICE.fields_by_name['nwk_s_key'].has_options = True
_DEVICE.fields_by_name['nwk_s_key']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\332\336\0372github.com/TheThingsNetwork/ttn/core/types.NwkSKey'))
_DEVICE.fields_by_name['app_s_key'].has_options = True
_DEVICE.fields_by_name['app_s_key']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\332\336\0372github.com/TheThingsNetwork/ttn/core/types.AppSKey'))
_DEVICE.fields_by_name['app_key'].has_options = True
_DEVICE.fields_by_name['app_key']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\332\336\0371github.com/TheThingsNetwork/ttn/core/types.AppKey'))
_DEVICE.fields_by_name['used_dev_nonces'].has_options = True
_DEVICE.fields_by_name['used_dev_nonces']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\332\336\0373github.com/TheThingsNetwork/ttn/core/types.DevNonce'))
_DEVICE.fields_by_name['used_app_nonces'].has_options = True
_DEVICE.fields_by_name['used_app_nonces']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\332\336\0373github.com/TheThingsNetwork/ttn/core/types.AppNonce'))

_DEVICEMANAGER = _descriptor.ServiceDescriptor(
  name='DeviceManager',
  full_name='lorawan.DeviceManager',
  file=DESCRIPTOR,
  index=0,
  options=None,
  serialized_start=1185,
  serialized_end=1378,
  methods=[
  _descriptor.MethodDescriptor(
    name='GetDevice',
    full_name='lorawan.DeviceManager.GetDevice',
    index=0,
    containing_service=None,
    input_type=_DEVICEIDENTIFIER,
    output_type=_DEVICE,
    options=None,
  ),
  _descriptor.MethodDescriptor(
    name='SetDevice',
    full_name='lorawan.DeviceManager.SetDevice',
    index=1,
    containing_service=None,
    input_type=_DEVICE,
    output_type=google_dot_protobuf_dot_empty__pb2._EMPTY,
    options=None,
  ),
  _descriptor.MethodDescriptor(
    name='DeleteDevice',
    full_name='lorawan.DeviceManager.DeleteDevice',
    index=2,
    containing_service=None,
    input_type=_DEVICEIDENTIFIER,
    output_type=google_dot_protobuf_dot_empty__pb2._EMPTY,
    options=None,
  ),
])
_sym_db.RegisterServiceDescriptor(_DEVICEMANAGER)

DESCRIPTOR.services_by_name['DeviceManager'] = _DEVICEMANAGER

# @@protoc_insertion_point(module_scope)
