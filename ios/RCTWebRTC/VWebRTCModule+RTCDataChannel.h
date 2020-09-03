#import "VWebRTCModule.h"
#import <VWebRTC/RTCDataChannel.h>

@interface RTCDataChannel (React)

@property (nonatomic, strong) NSNumber *peerConnectionId;

@end

@interface VWebRTCModule (RTCDataChannel) <RTCDataChannelDelegate>

@end
