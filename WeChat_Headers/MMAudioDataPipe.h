//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSRecursiveLock;
@protocol MMAudioDataReadStreamDelegate, MMAudioDataWriteStreamDelegate;

@interface MMAudioDataPipe : NSObject
{
    NSRecursiveLock *m_lock;
    id <MMAudioDataReadStreamDelegate> m_readDelegate;
    id <MMAudioDataWriteStreamDelegate> m_writeDelegate;
    struct __CFReadStream *m_readStream;
    struct __CFWriteStream *m_writeStream;
    NSDictionary *m_streamProperties;
    NSMutableArray *m_dataQueue;
    long long m_readOffset;
    long long m_writeOffset;
}

@property(retain, nonatomic) NSMutableArray *m_dataQueue; // @synthesize m_dataQueue;
@property(retain, nonatomic) NSDictionary *m_streamProperties; // @synthesize m_streamProperties;
- (void).cxx_destruct;
- (void)resetStream;
- (_Bool)seekToPosition:(long long)arg1 andSeekTime:(double)arg2;
- (long long)read:(void *)arg1 size:(long long)arg2;
- (void)dataErrorWithCode:(long long)arg1;
- (_Bool)hasBytesAvailable;
- (void)closeStream;
- (_Bool)openReadStream;
- (id)copyStreamProperties;
- (void)handleReadFromCFStream:(struct __CFReadStream *)arg1 eventType:(unsigned long long)arg2;
- (void)handleWriteFromCFStream:(struct __CFWriteStream *)arg1 eventType:(unsigned long long)arg2;
- (long long)getWriteOffset;
- (long long)getReadOffset;
- (void)appendEOF;
- (void)stopWithError;
- (void)pumpQueueDataToWriteStream;
- (void)appendBuffer:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setWriteDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

