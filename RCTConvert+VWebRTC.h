#import <React/RCTConvert.h>
#import <VWebRTC/RTCDataChannelConfiguration.h>
#import <VWebRTC/RTCConfiguration.h>
#import <VWebRTC/RTCIceServer.h>
#import <VWebRTC/RTCSessionDescription.h>
#import <VWebRTC/RTCIceCandidate.h>

@interface RCTConvert (VWebRTC)

+ (RTCIceCandidate *)RTCIceCandidate:(id)json;
+ (RTCSessionDescription *)RTCSessionDescription:(id)json;
+ (RTCIceServer *)RTCIceServer:(id)json;
+ (RTCDataChannelConfiguration *)RTCDataChannelConfiguration:(id)json;
+ (RTCConfiguration *)RTCConfiguration:(id)json;

@end
