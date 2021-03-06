//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KSAudioQueueBuff : NSObject
{
    struct AudioQueueBuffer *_audioBuffer;
    unsigned int _bufferSize;
    struct AudioStreamPacketDescription _packetDes[16];
}

+ (unsigned int)packDesCnt;
@property(readonly, nonatomic) unsigned int bufSize; // @synthesize bufSize=_bufferSize;
@property(readonly, nonatomic) struct AudioQueueBuffer *audioBuffer; // @synthesize audioBuffer=_audioBuffer;
@property(readonly, nonatomic) struct AudioStreamPacketDescription *audioDes;
- (void)dispose:(struct OpaqueAudioQueue *)arg1;
- (void)dealloc;
- (id)initWithAudioBuf:(struct AudioQueueBuffer *)arg1 size:(unsigned int)arg2;

@end

