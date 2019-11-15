//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCFilterGroup.h"

@class TXCUIElement, TXCWaterBlendFilter, UIView;

@interface TXCWaterMark : TXCFilterGroup
{
    TXCWaterBlendFilter *alphaBlendFilter;
    TXCUIElement *uiElement;
    UIView *contentView;
    _Bool _waterMirror;
    UIView *_waterMark;
}

@property(nonatomic) _Bool waterMirror; // @synthesize waterMirror=_waterMirror;
@property(retain, nonatomic) UIView *waterMark; // @synthesize waterMark=_waterMark;
- (void).cxx_destruct;
- (unsigned long long)getRotation:(long long)arg1 mirror:(_Bool)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (id)init;

@end

