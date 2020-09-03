//
//  VWebRTCModule.h
//
//  Created by one on 2015/9/24.
//  Copyright © 2015 One. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

#import <React/RCTBridgeModule.h>
#import <React/RCTConvert.h>
#import <React/RCTEventEmitter.h>

#import <VWebRTC/RTCMediaStream.h>
#import <VWebRTC/RTCPeerConnectionFactory.h>
#import <VWebRTC/RTCPeerConnection.h>
#import <VWebRTC/RTCAudioTrack.h>
#import <VWebRTC/RTCVideoTrack.h>
#import <VWebRTC/RTCVideoDecoderFactory.h>
#import <VWebRTC/RTCVideoEncoderFactory.h>

static NSString *const kEventPeerConnectionSignalingStateChanged = @"peerConnectionSignalingStateChanged";
static NSString *const kEventPeerConnectionStateChanged = @"peerConnectionStateChanged";
static NSString *const kEventPeerConnectionAddedStream = @"peerConnectionAddedStream";
static NSString *const kEventPeerConnectionRemovedStream = @"peerConnectionRemovedStream";
static NSString *const kEventPeerConnectionOnRenegotiationNeeded = @"peerConnectionOnRenegotiationNeeded";
static NSString *const kEventPeerConnectionIceConnectionChanged = @"peerConnectionIceConnectionChanged";
static NSString *const kEventPeerConnectionIceGatheringChanged = @"peerConnectionIceGatheringChanged";
static NSString *const kEventPeerConnectionGotICECandidate = @"peerConnectionGotICECandidate";
static NSString *const kEventPeerConnectionDidOpenDataChannel = @"peerConnectionDidOpenDataChannel";
static NSString *const kEventDataChannelStateChanged = @"dataChannelStateChanged";
static NSString *const kEventDataChannelReceiveMessage = @"dataChannelReceiveMessage";
static NSString *const kEventMediaStreamTrackMuteChanged = @"mediaStreamTrackMuteChanged";

@interface VWebRTCModule : RCTEventEmitter <RCTBridgeModule>

@property(nonatomic, strong) dispatch_queue_t workerQueue;

@property (nonatomic, strong) RTCPeerConnectionFactory *peerConnectionFactory;

@property (nonatomic, strong) NSMutableDictionary<NSNumber *, RTCPeerConnection *> *peerConnections;
@property (nonatomic, strong) NSMutableDictionary<NSString *, RTCMediaStream *> *localStreams;
@property (nonatomic, strong) NSMutableDictionary<NSString *, RTCMediaStreamTrack *> *localTracks;

- (instancetype)initWithEncoderFactory:(id<RTCVideoEncoderFactory>)encoderFactory
                        decoderFactory:(id<RTCVideoDecoderFactory>)decoderFactory;

- (RTCMediaStream*)streamForReactTag:(NSString*)reactTag;

@end
