//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CTFrameWrap : NSObject
{
    struct __CTFrame *_frameRef;
    struct CGSize _frameSize;
}

@property(nonatomic) struct CGSize frameSize; // @synthesize frameSize=_frameSize;
@property(nonatomic) struct __CTFrame *frameRef; // @synthesize frameRef=_frameRef;
- (void)dealloc;
- (id)initWithFrameRef:(struct __CTFrame *)arg1;

@end

