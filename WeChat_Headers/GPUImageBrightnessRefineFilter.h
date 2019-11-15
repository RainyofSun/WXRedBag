//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageTwoInputFilter.h"

@interface GPUImageBrightnessRefineFilter : GPUImageTwoInputFilter
{
    int ratioParamUniform;
    int offsetParamUniform;
    int curveIndexUniform;
    double _ratioParam;
    double _offsetParam;
    double _curveIndex;
    double _maxRatioTH;
    double _maxOffsetTH;
    double _timeParam;
}

@property(nonatomic) double timeParam; // @synthesize timeParam=_timeParam;
@property(nonatomic) double maxOffsetTH; // @synthesize maxOffsetTH=_maxOffsetTH;
@property(nonatomic) double maxRatioTH; // @synthesize maxRatioTH=_maxRatioTH;
@property(nonatomic) double curveIndex; // @synthesize curveIndex=_curveIndex;
@property(nonatomic) double offsetParam; // @synthesize offsetParam=_offsetParam;
@property(nonatomic) double ratioParam; // @synthesize ratioParam=_ratioParam;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)reset;
- (id)init;

@end

