//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VoicePrintQueueItem : NSObject
{
    unsigned int voiceId;
    unsigned int offset;
    unsigned int length;
    unsigned int endflag;
    unsigned int trycount;
}

@property(nonatomic) unsigned int trycount; // @synthesize trycount;
@property(nonatomic) unsigned int endflag; // @synthesize endflag;
@property(nonatomic) unsigned int length; // @synthesize length;
@property(nonatomic) unsigned int offset; // @synthesize offset;
@property(nonatomic) unsigned int voiceId; // @synthesize voiceId;

@end

