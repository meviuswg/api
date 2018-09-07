//
// DO NOT EDIT.
//
// Generated by the protocol buffer compiler.
// Source: github.com/TheThingsNetwork/api/handler/handler.proto
//

//
// Copyright 2018, gRPC Authors All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
import Foundation
import Dispatch
import SwiftGRPC
import SwiftProtobuf

internal protocol Handler_HandlerActivationChallengeCall: ClientCallUnary {}

fileprivate final class Handler_HandlerActivationChallengeCallBase: ClientCallUnaryBase<Broker_ActivationChallengeRequest, Broker_ActivationChallengeResponse>, Handler_HandlerActivationChallengeCall {
  override class var method: String { return "/handler.Handler/ActivationChallenge" }
}

internal protocol Handler_HandlerActivateCall: ClientCallUnary {}

fileprivate final class Handler_HandlerActivateCallBase: ClientCallUnaryBase<Broker_DeduplicatedDeviceActivationRequest, Handler_DeviceActivationResponse>, Handler_HandlerActivateCall {
  override class var method: String { return "/handler.Handler/Activate" }
}


/// Instantiate Handler_HandlerServiceClient, then call methods of this protocol to make API calls.
internal protocol Handler_HandlerService: ServiceClient {
  /// Synchronous. Unary.
  func activationChallenge(_ request: Broker_ActivationChallengeRequest) throws -> Broker_ActivationChallengeResponse
  /// Asynchronous. Unary.
  func activationChallenge(_ request: Broker_ActivationChallengeRequest, completion: @escaping (Broker_ActivationChallengeResponse?, CallResult) -> Void) throws -> Handler_HandlerActivationChallengeCall

  /// Synchronous. Unary.
  func activate(_ request: Broker_DeduplicatedDeviceActivationRequest) throws -> Handler_DeviceActivationResponse
  /// Asynchronous. Unary.
  func activate(_ request: Broker_DeduplicatedDeviceActivationRequest, completion: @escaping (Handler_DeviceActivationResponse?, CallResult) -> Void) throws -> Handler_HandlerActivateCall

}

internal final class Handler_HandlerServiceClient: ServiceClientBase, Handler_HandlerService {
  /// Synchronous. Unary.
  internal func activationChallenge(_ request: Broker_ActivationChallengeRequest) throws -> Broker_ActivationChallengeResponse {
    return try Handler_HandlerActivationChallengeCallBase(channel)
      .run(request: request, metadata: metadata)
  }
  /// Asynchronous. Unary.
  internal func activationChallenge(_ request: Broker_ActivationChallengeRequest, completion: @escaping (Broker_ActivationChallengeResponse?, CallResult) -> Void) throws -> Handler_HandlerActivationChallengeCall {
    return try Handler_HandlerActivationChallengeCallBase(channel)
      .start(request: request, metadata: metadata, completion: completion)
  }

  /// Synchronous. Unary.
  internal func activate(_ request: Broker_DeduplicatedDeviceActivationRequest) throws -> Handler_DeviceActivationResponse {
    return try Handler_HandlerActivateCallBase(channel)
      .run(request: request, metadata: metadata)
  }
  /// Asynchronous. Unary.
  internal func activate(_ request: Broker_DeduplicatedDeviceActivationRequest, completion: @escaping (Handler_DeviceActivationResponse?, CallResult) -> Void) throws -> Handler_HandlerActivateCall {
    return try Handler_HandlerActivateCallBase(channel)
      .start(request: request, metadata: metadata, completion: completion)
  }

}
internal protocol Handler_ApplicationManagerRegisterApplicationCall: ClientCallUnary {}

fileprivate final class Handler_ApplicationManagerRegisterApplicationCallBase: ClientCallUnaryBase<Handler_ApplicationIdentifier, SwiftProtobuf.Google_Protobuf_Empty>, Handler_ApplicationManagerRegisterApplicationCall {
  override class var method: String { return "/handler.ApplicationManager/RegisterApplication" }
}

internal protocol Handler_ApplicationManagerGetApplicationCall: ClientCallUnary {}

fileprivate final class Handler_ApplicationManagerGetApplicationCallBase: ClientCallUnaryBase<Handler_ApplicationIdentifier, Handler_Application>, Handler_ApplicationManagerGetApplicationCall {
  override class var method: String { return "/handler.ApplicationManager/GetApplication" }
}

internal protocol Handler_ApplicationManagerSetApplicationCall: ClientCallUnary {}

fileprivate final class Handler_ApplicationManagerSetApplicationCallBase: ClientCallUnaryBase<Handler_Application, SwiftProtobuf.Google_Protobuf_Empty>, Handler_ApplicationManagerSetApplicationCall {
  override class var method: String { return "/handler.ApplicationManager/SetApplication" }
}

internal protocol Handler_ApplicationManagerDeleteApplicationCall: ClientCallUnary {}

fileprivate final class Handler_ApplicationManagerDeleteApplicationCallBase: ClientCallUnaryBase<Handler_ApplicationIdentifier, SwiftProtobuf.Google_Protobuf_Empty>, Handler_ApplicationManagerDeleteApplicationCall {
  override class var method: String { return "/handler.ApplicationManager/DeleteApplication" }
}

internal protocol Handler_ApplicationManagerGetDeviceCall: ClientCallUnary {}

fileprivate final class Handler_ApplicationManagerGetDeviceCallBase: ClientCallUnaryBase<Handler_DeviceIdentifier, Handler_Device>, Handler_ApplicationManagerGetDeviceCall {
  override class var method: String { return "/handler.ApplicationManager/GetDevice" }
}

internal protocol Handler_ApplicationManagerSetDeviceCall: ClientCallUnary {}

fileprivate final class Handler_ApplicationManagerSetDeviceCallBase: ClientCallUnaryBase<Handler_Device, SwiftProtobuf.Google_Protobuf_Empty>, Handler_ApplicationManagerSetDeviceCall {
  override class var method: String { return "/handler.ApplicationManager/SetDevice" }
}

internal protocol Handler_ApplicationManagerDeleteDeviceCall: ClientCallUnary {}

fileprivate final class Handler_ApplicationManagerDeleteDeviceCallBase: ClientCallUnaryBase<Handler_DeviceIdentifier, SwiftProtobuf.Google_Protobuf_Empty>, Handler_ApplicationManagerDeleteDeviceCall {
  override class var method: String { return "/handler.ApplicationManager/DeleteDevice" }
}

internal protocol Handler_ApplicationManagerGetDevicesForApplicationCall: ClientCallUnary {}

fileprivate final class Handler_ApplicationManagerGetDevicesForApplicationCallBase: ClientCallUnaryBase<Handler_ApplicationIdentifier, Handler_DeviceList>, Handler_ApplicationManagerGetDevicesForApplicationCall {
  override class var method: String { return "/handler.ApplicationManager/GetDevicesForApplication" }
}

internal protocol Handler_ApplicationManagerDryDownlinkCall: ClientCallUnary {}

fileprivate final class Handler_ApplicationManagerDryDownlinkCallBase: ClientCallUnaryBase<Handler_DryDownlinkMessage, Handler_DryDownlinkResult>, Handler_ApplicationManagerDryDownlinkCall {
  override class var method: String { return "/handler.ApplicationManager/DryDownlink" }
}

internal protocol Handler_ApplicationManagerDryUplinkCall: ClientCallUnary {}

fileprivate final class Handler_ApplicationManagerDryUplinkCallBase: ClientCallUnaryBase<Handler_DryUplinkMessage, Handler_DryUplinkResult>, Handler_ApplicationManagerDryUplinkCall {
  override class var method: String { return "/handler.ApplicationManager/DryUplink" }
}

internal protocol Handler_ApplicationManagerSimulateUplinkCall: ClientCallUnary {}

fileprivate final class Handler_ApplicationManagerSimulateUplinkCallBase: ClientCallUnaryBase<Handler_SimulatedUplinkMessage, SwiftProtobuf.Google_Protobuf_Empty>, Handler_ApplicationManagerSimulateUplinkCall {
  override class var method: String { return "/handler.ApplicationManager/SimulateUplink" }
}


/// Instantiate Handler_ApplicationManagerServiceClient, then call methods of this protocol to make API calls.
internal protocol Handler_ApplicationManagerService: ServiceClient {
  /// Synchronous. Unary.
  func registerApplication(_ request: Handler_ApplicationIdentifier) throws -> SwiftProtobuf.Google_Protobuf_Empty
  /// Asynchronous. Unary.
  func registerApplication(_ request: Handler_ApplicationIdentifier, completion: @escaping (SwiftProtobuf.Google_Protobuf_Empty?, CallResult) -> Void) throws -> Handler_ApplicationManagerRegisterApplicationCall

  /// Synchronous. Unary.
  func getApplication(_ request: Handler_ApplicationIdentifier) throws -> Handler_Application
  /// Asynchronous. Unary.
  func getApplication(_ request: Handler_ApplicationIdentifier, completion: @escaping (Handler_Application?, CallResult) -> Void) throws -> Handler_ApplicationManagerGetApplicationCall

  /// Synchronous. Unary.
  func setApplication(_ request: Handler_Application) throws -> SwiftProtobuf.Google_Protobuf_Empty
  /// Asynchronous. Unary.
  func setApplication(_ request: Handler_Application, completion: @escaping (SwiftProtobuf.Google_Protobuf_Empty?, CallResult) -> Void) throws -> Handler_ApplicationManagerSetApplicationCall

  /// Synchronous. Unary.
  func deleteApplication(_ request: Handler_ApplicationIdentifier) throws -> SwiftProtobuf.Google_Protobuf_Empty
  /// Asynchronous. Unary.
  func deleteApplication(_ request: Handler_ApplicationIdentifier, completion: @escaping (SwiftProtobuf.Google_Protobuf_Empty?, CallResult) -> Void) throws -> Handler_ApplicationManagerDeleteApplicationCall

  /// Synchronous. Unary.
  func getDevice(_ request: Handler_DeviceIdentifier) throws -> Handler_Device
  /// Asynchronous. Unary.
  func getDevice(_ request: Handler_DeviceIdentifier, completion: @escaping (Handler_Device?, CallResult) -> Void) throws -> Handler_ApplicationManagerGetDeviceCall

  /// Synchronous. Unary.
  func setDevice(_ request: Handler_Device) throws -> SwiftProtobuf.Google_Protobuf_Empty
  /// Asynchronous. Unary.
  func setDevice(_ request: Handler_Device, completion: @escaping (SwiftProtobuf.Google_Protobuf_Empty?, CallResult) -> Void) throws -> Handler_ApplicationManagerSetDeviceCall

  /// Synchronous. Unary.
  func deleteDevice(_ request: Handler_DeviceIdentifier) throws -> SwiftProtobuf.Google_Protobuf_Empty
  /// Asynchronous. Unary.
  func deleteDevice(_ request: Handler_DeviceIdentifier, completion: @escaping (SwiftProtobuf.Google_Protobuf_Empty?, CallResult) -> Void) throws -> Handler_ApplicationManagerDeleteDeviceCall

  /// Synchronous. Unary.
  func getDevicesForApplication(_ request: Handler_ApplicationIdentifier) throws -> Handler_DeviceList
  /// Asynchronous. Unary.
  func getDevicesForApplication(_ request: Handler_ApplicationIdentifier, completion: @escaping (Handler_DeviceList?, CallResult) -> Void) throws -> Handler_ApplicationManagerGetDevicesForApplicationCall

  /// Synchronous. Unary.
  func dryDownlink(_ request: Handler_DryDownlinkMessage) throws -> Handler_DryDownlinkResult
  /// Asynchronous. Unary.
  func dryDownlink(_ request: Handler_DryDownlinkMessage, completion: @escaping (Handler_DryDownlinkResult?, CallResult) -> Void) throws -> Handler_ApplicationManagerDryDownlinkCall

  /// Synchronous. Unary.
  func dryUplink(_ request: Handler_DryUplinkMessage) throws -> Handler_DryUplinkResult
  /// Asynchronous. Unary.
  func dryUplink(_ request: Handler_DryUplinkMessage, completion: @escaping (Handler_DryUplinkResult?, CallResult) -> Void) throws -> Handler_ApplicationManagerDryUplinkCall

  /// Synchronous. Unary.
  func simulateUplink(_ request: Handler_SimulatedUplinkMessage) throws -> SwiftProtobuf.Google_Protobuf_Empty
  /// Asynchronous. Unary.
  func simulateUplink(_ request: Handler_SimulatedUplinkMessage, completion: @escaping (SwiftProtobuf.Google_Protobuf_Empty?, CallResult) -> Void) throws -> Handler_ApplicationManagerSimulateUplinkCall

}

internal final class Handler_ApplicationManagerServiceClient: ServiceClientBase, Handler_ApplicationManagerService {
  /// Synchronous. Unary.
  internal func registerApplication(_ request: Handler_ApplicationIdentifier) throws -> SwiftProtobuf.Google_Protobuf_Empty {
    return try Handler_ApplicationManagerRegisterApplicationCallBase(channel)
      .run(request: request, metadata: metadata)
  }
  /// Asynchronous. Unary.
  internal func registerApplication(_ request: Handler_ApplicationIdentifier, completion: @escaping (SwiftProtobuf.Google_Protobuf_Empty?, CallResult) -> Void) throws -> Handler_ApplicationManagerRegisterApplicationCall {
    return try Handler_ApplicationManagerRegisterApplicationCallBase(channel)
      .start(request: request, metadata: metadata, completion: completion)
  }

  /// Synchronous. Unary.
  internal func getApplication(_ request: Handler_ApplicationIdentifier) throws -> Handler_Application {
    return try Handler_ApplicationManagerGetApplicationCallBase(channel)
      .run(request: request, metadata: metadata)
  }
  /// Asynchronous. Unary.
  internal func getApplication(_ request: Handler_ApplicationIdentifier, completion: @escaping (Handler_Application?, CallResult) -> Void) throws -> Handler_ApplicationManagerGetApplicationCall {
    return try Handler_ApplicationManagerGetApplicationCallBase(channel)
      .start(request: request, metadata: metadata, completion: completion)
  }

  /// Synchronous. Unary.
  internal func setApplication(_ request: Handler_Application) throws -> SwiftProtobuf.Google_Protobuf_Empty {
    return try Handler_ApplicationManagerSetApplicationCallBase(channel)
      .run(request: request, metadata: metadata)
  }
  /// Asynchronous. Unary.
  internal func setApplication(_ request: Handler_Application, completion: @escaping (SwiftProtobuf.Google_Protobuf_Empty?, CallResult) -> Void) throws -> Handler_ApplicationManagerSetApplicationCall {
    return try Handler_ApplicationManagerSetApplicationCallBase(channel)
      .start(request: request, metadata: metadata, completion: completion)
  }

  /// Synchronous. Unary.
  internal func deleteApplication(_ request: Handler_ApplicationIdentifier) throws -> SwiftProtobuf.Google_Protobuf_Empty {
    return try Handler_ApplicationManagerDeleteApplicationCallBase(channel)
      .run(request: request, metadata: metadata)
  }
  /// Asynchronous. Unary.
  internal func deleteApplication(_ request: Handler_ApplicationIdentifier, completion: @escaping (SwiftProtobuf.Google_Protobuf_Empty?, CallResult) -> Void) throws -> Handler_ApplicationManagerDeleteApplicationCall {
    return try Handler_ApplicationManagerDeleteApplicationCallBase(channel)
      .start(request: request, metadata: metadata, completion: completion)
  }

  /// Synchronous. Unary.
  internal func getDevice(_ request: Handler_DeviceIdentifier) throws -> Handler_Device {
    return try Handler_ApplicationManagerGetDeviceCallBase(channel)
      .run(request: request, metadata: metadata)
  }
  /// Asynchronous. Unary.
  internal func getDevice(_ request: Handler_DeviceIdentifier, completion: @escaping (Handler_Device?, CallResult) -> Void) throws -> Handler_ApplicationManagerGetDeviceCall {
    return try Handler_ApplicationManagerGetDeviceCallBase(channel)
      .start(request: request, metadata: metadata, completion: completion)
  }

  /// Synchronous. Unary.
  internal func setDevice(_ request: Handler_Device) throws -> SwiftProtobuf.Google_Protobuf_Empty {
    return try Handler_ApplicationManagerSetDeviceCallBase(channel)
      .run(request: request, metadata: metadata)
  }
  /// Asynchronous. Unary.
  internal func setDevice(_ request: Handler_Device, completion: @escaping (SwiftProtobuf.Google_Protobuf_Empty?, CallResult) -> Void) throws -> Handler_ApplicationManagerSetDeviceCall {
    return try Handler_ApplicationManagerSetDeviceCallBase(channel)
      .start(request: request, metadata: metadata, completion: completion)
  }

  /// Synchronous. Unary.
  internal func deleteDevice(_ request: Handler_DeviceIdentifier) throws -> SwiftProtobuf.Google_Protobuf_Empty {
    return try Handler_ApplicationManagerDeleteDeviceCallBase(channel)
      .run(request: request, metadata: metadata)
  }
  /// Asynchronous. Unary.
  internal func deleteDevice(_ request: Handler_DeviceIdentifier, completion: @escaping (SwiftProtobuf.Google_Protobuf_Empty?, CallResult) -> Void) throws -> Handler_ApplicationManagerDeleteDeviceCall {
    return try Handler_ApplicationManagerDeleteDeviceCallBase(channel)
      .start(request: request, metadata: metadata, completion: completion)
  }

  /// Synchronous. Unary.
  internal func getDevicesForApplication(_ request: Handler_ApplicationIdentifier) throws -> Handler_DeviceList {
    return try Handler_ApplicationManagerGetDevicesForApplicationCallBase(channel)
      .run(request: request, metadata: metadata)
  }
  /// Asynchronous. Unary.
  internal func getDevicesForApplication(_ request: Handler_ApplicationIdentifier, completion: @escaping (Handler_DeviceList?, CallResult) -> Void) throws -> Handler_ApplicationManagerGetDevicesForApplicationCall {
    return try Handler_ApplicationManagerGetDevicesForApplicationCallBase(channel)
      .start(request: request, metadata: metadata, completion: completion)
  }

  /// Synchronous. Unary.
  internal func dryDownlink(_ request: Handler_DryDownlinkMessage) throws -> Handler_DryDownlinkResult {
    return try Handler_ApplicationManagerDryDownlinkCallBase(channel)
      .run(request: request, metadata: metadata)
  }
  /// Asynchronous. Unary.
  internal func dryDownlink(_ request: Handler_DryDownlinkMessage, completion: @escaping (Handler_DryDownlinkResult?, CallResult) -> Void) throws -> Handler_ApplicationManagerDryDownlinkCall {
    return try Handler_ApplicationManagerDryDownlinkCallBase(channel)
      .start(request: request, metadata: metadata, completion: completion)
  }

  /// Synchronous. Unary.
  internal func dryUplink(_ request: Handler_DryUplinkMessage) throws -> Handler_DryUplinkResult {
    return try Handler_ApplicationManagerDryUplinkCallBase(channel)
      .run(request: request, metadata: metadata)
  }
  /// Asynchronous. Unary.
  internal func dryUplink(_ request: Handler_DryUplinkMessage, completion: @escaping (Handler_DryUplinkResult?, CallResult) -> Void) throws -> Handler_ApplicationManagerDryUplinkCall {
    return try Handler_ApplicationManagerDryUplinkCallBase(channel)
      .start(request: request, metadata: metadata, completion: completion)
  }

  /// Synchronous. Unary.
  internal func simulateUplink(_ request: Handler_SimulatedUplinkMessage) throws -> SwiftProtobuf.Google_Protobuf_Empty {
    return try Handler_ApplicationManagerSimulateUplinkCallBase(channel)
      .run(request: request, metadata: metadata)
  }
  /// Asynchronous. Unary.
  internal func simulateUplink(_ request: Handler_SimulatedUplinkMessage, completion: @escaping (SwiftProtobuf.Google_Protobuf_Empty?, CallResult) -> Void) throws -> Handler_ApplicationManagerSimulateUplinkCall {
    return try Handler_ApplicationManagerSimulateUplinkCallBase(channel)
      .start(request: request, metadata: metadata, completion: completion)
  }

}
internal protocol Handler_HandlerManagerGetStatusCall: ClientCallUnary {}

fileprivate final class Handler_HandlerManagerGetStatusCallBase: ClientCallUnaryBase<Handler_StatusRequest, Handler_Status>, Handler_HandlerManagerGetStatusCall {
  override class var method: String { return "/handler.HandlerManager/GetStatus" }
}


/// Instantiate Handler_HandlerManagerServiceClient, then call methods of this protocol to make API calls.
internal protocol Handler_HandlerManagerService: ServiceClient {
  /// Synchronous. Unary.
  func getStatus(_ request: Handler_StatusRequest) throws -> Handler_Status
  /// Asynchronous. Unary.
  func getStatus(_ request: Handler_StatusRequest, completion: @escaping (Handler_Status?, CallResult) -> Void) throws -> Handler_HandlerManagerGetStatusCall

}

internal final class Handler_HandlerManagerServiceClient: ServiceClientBase, Handler_HandlerManagerService {
  /// Synchronous. Unary.
  internal func getStatus(_ request: Handler_StatusRequest) throws -> Handler_Status {
    return try Handler_HandlerManagerGetStatusCallBase(channel)
      .run(request: request, metadata: metadata)
  }
  /// Asynchronous. Unary.
  internal func getStatus(_ request: Handler_StatusRequest, completion: @escaping (Handler_Status?, CallResult) -> Void) throws -> Handler_HandlerManagerGetStatusCall {
    return try Handler_HandlerManagerGetStatusCallBase(channel)
      .start(request: request, metadata: metadata, completion: completion)
  }

}

/// To build a server, implement a class that conforms to this protocol.
internal protocol Handler_HandlerProvider {
  func activationChallenge(request: Broker_ActivationChallengeRequest, session: Handler_HandlerActivationChallengeSession) throws -> Broker_ActivationChallengeResponse
  func activate(request: Broker_DeduplicatedDeviceActivationRequest, session: Handler_HandlerActivateSession) throws -> Handler_DeviceActivationResponse
}

internal protocol Handler_HandlerActivationChallengeSession: ServerSessionUnary {}

fileprivate final class Handler_HandlerActivationChallengeSessionBase: ServerSessionUnaryBase<Broker_ActivationChallengeRequest, Broker_ActivationChallengeResponse>, Handler_HandlerActivationChallengeSession {}

internal protocol Handler_HandlerActivateSession: ServerSessionUnary {}

fileprivate final class Handler_HandlerActivateSessionBase: ServerSessionUnaryBase<Broker_DeduplicatedDeviceActivationRequest, Handler_DeviceActivationResponse>, Handler_HandlerActivateSession {}


/// Main server for generated service
internal final class Handler_HandlerServer: ServiceServer {
  private let provider: Handler_HandlerProvider

  internal init(address: String, provider: Handler_HandlerProvider) {
    self.provider = provider
    super.init(address: address)
  }

  internal init?(address: String, certificateURL: URL, keyURL: URL, provider: Handler_HandlerProvider) {
    self.provider = provider
    super.init(address: address, certificateURL: certificateURL, keyURL: keyURL)
  }

  internal init?(address: String, certificateString: String, keyString: String, provider: Handler_HandlerProvider) {
    self.provider = provider
    super.init(address: address, certificateString: certificateString, keyString: keyString)
  }

  /// Start the server.
  internal override func handleMethod(_ method: String, handler: Handler, queue: DispatchQueue) throws -> Bool {
    let provider = self.provider
    switch method {
    case "/handler.Handler/ActivationChallenge":
      try Handler_HandlerActivationChallengeSessionBase(
        handler: handler,
        providerBlock: { try provider.activationChallenge(request: $0, session: $1 as! Handler_HandlerActivationChallengeSessionBase) })
          .run(queue: queue)
      return true
    case "/handler.Handler/Activate":
      try Handler_HandlerActivateSessionBase(
        handler: handler,
        providerBlock: { try provider.activate(request: $0, session: $1 as! Handler_HandlerActivateSessionBase) })
          .run(queue: queue)
      return true
    default:
      return false
    }
  }
}

/// To build a server, implement a class that conforms to this protocol.
internal protocol Handler_ApplicationManagerProvider {
  func registerApplication(request: Handler_ApplicationIdentifier, session: Handler_ApplicationManagerRegisterApplicationSession) throws -> SwiftProtobuf.Google_Protobuf_Empty
  func getApplication(request: Handler_ApplicationIdentifier, session: Handler_ApplicationManagerGetApplicationSession) throws -> Handler_Application
  func setApplication(request: Handler_Application, session: Handler_ApplicationManagerSetApplicationSession) throws -> SwiftProtobuf.Google_Protobuf_Empty
  func deleteApplication(request: Handler_ApplicationIdentifier, session: Handler_ApplicationManagerDeleteApplicationSession) throws -> SwiftProtobuf.Google_Protobuf_Empty
  func getDevice(request: Handler_DeviceIdentifier, session: Handler_ApplicationManagerGetDeviceSession) throws -> Handler_Device
  func setDevice(request: Handler_Device, session: Handler_ApplicationManagerSetDeviceSession) throws -> SwiftProtobuf.Google_Protobuf_Empty
  func deleteDevice(request: Handler_DeviceIdentifier, session: Handler_ApplicationManagerDeleteDeviceSession) throws -> SwiftProtobuf.Google_Protobuf_Empty
  func getDevicesForApplication(request: Handler_ApplicationIdentifier, session: Handler_ApplicationManagerGetDevicesForApplicationSession) throws -> Handler_DeviceList
  func dryDownlink(request: Handler_DryDownlinkMessage, session: Handler_ApplicationManagerDryDownlinkSession) throws -> Handler_DryDownlinkResult
  func dryUplink(request: Handler_DryUplinkMessage, session: Handler_ApplicationManagerDryUplinkSession) throws -> Handler_DryUplinkResult
  func simulateUplink(request: Handler_SimulatedUplinkMessage, session: Handler_ApplicationManagerSimulateUplinkSession) throws -> SwiftProtobuf.Google_Protobuf_Empty
}

internal protocol Handler_ApplicationManagerRegisterApplicationSession: ServerSessionUnary {}

fileprivate final class Handler_ApplicationManagerRegisterApplicationSessionBase: ServerSessionUnaryBase<Handler_ApplicationIdentifier, SwiftProtobuf.Google_Protobuf_Empty>, Handler_ApplicationManagerRegisterApplicationSession {}

internal protocol Handler_ApplicationManagerGetApplicationSession: ServerSessionUnary {}

fileprivate final class Handler_ApplicationManagerGetApplicationSessionBase: ServerSessionUnaryBase<Handler_ApplicationIdentifier, Handler_Application>, Handler_ApplicationManagerGetApplicationSession {}

internal protocol Handler_ApplicationManagerSetApplicationSession: ServerSessionUnary {}

fileprivate final class Handler_ApplicationManagerSetApplicationSessionBase: ServerSessionUnaryBase<Handler_Application, SwiftProtobuf.Google_Protobuf_Empty>, Handler_ApplicationManagerSetApplicationSession {}

internal protocol Handler_ApplicationManagerDeleteApplicationSession: ServerSessionUnary {}

fileprivate final class Handler_ApplicationManagerDeleteApplicationSessionBase: ServerSessionUnaryBase<Handler_ApplicationIdentifier, SwiftProtobuf.Google_Protobuf_Empty>, Handler_ApplicationManagerDeleteApplicationSession {}

internal protocol Handler_ApplicationManagerGetDeviceSession: ServerSessionUnary {}

fileprivate final class Handler_ApplicationManagerGetDeviceSessionBase: ServerSessionUnaryBase<Handler_DeviceIdentifier, Handler_Device>, Handler_ApplicationManagerGetDeviceSession {}

internal protocol Handler_ApplicationManagerSetDeviceSession: ServerSessionUnary {}

fileprivate final class Handler_ApplicationManagerSetDeviceSessionBase: ServerSessionUnaryBase<Handler_Device, SwiftProtobuf.Google_Protobuf_Empty>, Handler_ApplicationManagerSetDeviceSession {}

internal protocol Handler_ApplicationManagerDeleteDeviceSession: ServerSessionUnary {}

fileprivate final class Handler_ApplicationManagerDeleteDeviceSessionBase: ServerSessionUnaryBase<Handler_DeviceIdentifier, SwiftProtobuf.Google_Protobuf_Empty>, Handler_ApplicationManagerDeleteDeviceSession {}

internal protocol Handler_ApplicationManagerGetDevicesForApplicationSession: ServerSessionUnary {}

fileprivate final class Handler_ApplicationManagerGetDevicesForApplicationSessionBase: ServerSessionUnaryBase<Handler_ApplicationIdentifier, Handler_DeviceList>, Handler_ApplicationManagerGetDevicesForApplicationSession {}

internal protocol Handler_ApplicationManagerDryDownlinkSession: ServerSessionUnary {}

fileprivate final class Handler_ApplicationManagerDryDownlinkSessionBase: ServerSessionUnaryBase<Handler_DryDownlinkMessage, Handler_DryDownlinkResult>, Handler_ApplicationManagerDryDownlinkSession {}

internal protocol Handler_ApplicationManagerDryUplinkSession: ServerSessionUnary {}

fileprivate final class Handler_ApplicationManagerDryUplinkSessionBase: ServerSessionUnaryBase<Handler_DryUplinkMessage, Handler_DryUplinkResult>, Handler_ApplicationManagerDryUplinkSession {}

internal protocol Handler_ApplicationManagerSimulateUplinkSession: ServerSessionUnary {}

fileprivate final class Handler_ApplicationManagerSimulateUplinkSessionBase: ServerSessionUnaryBase<Handler_SimulatedUplinkMessage, SwiftProtobuf.Google_Protobuf_Empty>, Handler_ApplicationManagerSimulateUplinkSession {}


/// Main server for generated service
internal final class Handler_ApplicationManagerServer: ServiceServer {
  private let provider: Handler_ApplicationManagerProvider

  internal init(address: String, provider: Handler_ApplicationManagerProvider) {
    self.provider = provider
    super.init(address: address)
  }

  internal init?(address: String, certificateURL: URL, keyURL: URL, provider: Handler_ApplicationManagerProvider) {
    self.provider = provider
    super.init(address: address, certificateURL: certificateURL, keyURL: keyURL)
  }

  internal init?(address: String, certificateString: String, keyString: String, provider: Handler_ApplicationManagerProvider) {
    self.provider = provider
    super.init(address: address, certificateString: certificateString, keyString: keyString)
  }

  /// Start the server.
  internal override func handleMethod(_ method: String, handler: Handler, queue: DispatchQueue) throws -> Bool {
    let provider = self.provider
    switch method {
    case "/handler.ApplicationManager/RegisterApplication":
      try Handler_ApplicationManagerRegisterApplicationSessionBase(
        handler: handler,
        providerBlock: { try provider.registerApplication(request: $0, session: $1 as! Handler_ApplicationManagerRegisterApplicationSessionBase) })
          .run(queue: queue)
      return true
    case "/handler.ApplicationManager/GetApplication":
      try Handler_ApplicationManagerGetApplicationSessionBase(
        handler: handler,
        providerBlock: { try provider.getApplication(request: $0, session: $1 as! Handler_ApplicationManagerGetApplicationSessionBase) })
          .run(queue: queue)
      return true
    case "/handler.ApplicationManager/SetApplication":
      try Handler_ApplicationManagerSetApplicationSessionBase(
        handler: handler,
        providerBlock: { try provider.setApplication(request: $0, session: $1 as! Handler_ApplicationManagerSetApplicationSessionBase) })
          .run(queue: queue)
      return true
    case "/handler.ApplicationManager/DeleteApplication":
      try Handler_ApplicationManagerDeleteApplicationSessionBase(
        handler: handler,
        providerBlock: { try provider.deleteApplication(request: $0, session: $1 as! Handler_ApplicationManagerDeleteApplicationSessionBase) })
          .run(queue: queue)
      return true
    case "/handler.ApplicationManager/GetDevice":
      try Handler_ApplicationManagerGetDeviceSessionBase(
        handler: handler,
        providerBlock: { try provider.getDevice(request: $0, session: $1 as! Handler_ApplicationManagerGetDeviceSessionBase) })
          .run(queue: queue)
      return true
    case "/handler.ApplicationManager/SetDevice":
      try Handler_ApplicationManagerSetDeviceSessionBase(
        handler: handler,
        providerBlock: { try provider.setDevice(request: $0, session: $1 as! Handler_ApplicationManagerSetDeviceSessionBase) })
          .run(queue: queue)
      return true
    case "/handler.ApplicationManager/DeleteDevice":
      try Handler_ApplicationManagerDeleteDeviceSessionBase(
        handler: handler,
        providerBlock: { try provider.deleteDevice(request: $0, session: $1 as! Handler_ApplicationManagerDeleteDeviceSessionBase) })
          .run(queue: queue)
      return true
    case "/handler.ApplicationManager/GetDevicesForApplication":
      try Handler_ApplicationManagerGetDevicesForApplicationSessionBase(
        handler: handler,
        providerBlock: { try provider.getDevicesForApplication(request: $0, session: $1 as! Handler_ApplicationManagerGetDevicesForApplicationSessionBase) })
          .run(queue: queue)
      return true
    case "/handler.ApplicationManager/DryDownlink":
      try Handler_ApplicationManagerDryDownlinkSessionBase(
        handler: handler,
        providerBlock: { try provider.dryDownlink(request: $0, session: $1 as! Handler_ApplicationManagerDryDownlinkSessionBase) })
          .run(queue: queue)
      return true
    case "/handler.ApplicationManager/DryUplink":
      try Handler_ApplicationManagerDryUplinkSessionBase(
        handler: handler,
        providerBlock: { try provider.dryUplink(request: $0, session: $1 as! Handler_ApplicationManagerDryUplinkSessionBase) })
          .run(queue: queue)
      return true
    case "/handler.ApplicationManager/SimulateUplink":
      try Handler_ApplicationManagerSimulateUplinkSessionBase(
        handler: handler,
        providerBlock: { try provider.simulateUplink(request: $0, session: $1 as! Handler_ApplicationManagerSimulateUplinkSessionBase) })
          .run(queue: queue)
      return true
    default:
      return false
    }
  }
}

/// To build a server, implement a class that conforms to this protocol.
internal protocol Handler_HandlerManagerProvider {
  func getStatus(request: Handler_StatusRequest, session: Handler_HandlerManagerGetStatusSession) throws -> Handler_Status
}

internal protocol Handler_HandlerManagerGetStatusSession: ServerSessionUnary {}

fileprivate final class Handler_HandlerManagerGetStatusSessionBase: ServerSessionUnaryBase<Handler_StatusRequest, Handler_Status>, Handler_HandlerManagerGetStatusSession {}


/// Main server for generated service
internal final class Handler_HandlerManagerServer: ServiceServer {
  private let provider: Handler_HandlerManagerProvider

  internal init(address: String, provider: Handler_HandlerManagerProvider) {
    self.provider = provider
    super.init(address: address)
  }

  internal init?(address: String, certificateURL: URL, keyURL: URL, provider: Handler_HandlerManagerProvider) {
    self.provider = provider
    super.init(address: address, certificateURL: certificateURL, keyURL: keyURL)
  }

  internal init?(address: String, certificateString: String, keyString: String, provider: Handler_HandlerManagerProvider) {
    self.provider = provider
    super.init(address: address, certificateString: certificateString, keyString: keyString)
  }

  /// Start the server.
  internal override func handleMethod(_ method: String, handler: Handler, queue: DispatchQueue) throws -> Bool {
    let provider = self.provider
    switch method {
    case "/handler.HandlerManager/GetStatus":
      try Handler_HandlerManagerGetStatusSessionBase(
        handler: handler,
        providerBlock: { try provider.getStatus(request: $0, session: $1 as! Handler_HandlerManagerGetStatusSessionBase) })
          .run(queue: queue)
      return true
    default:
      return false
    }
  }
}

