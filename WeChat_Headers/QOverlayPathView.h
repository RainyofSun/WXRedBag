//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QOverlayView.h"

@class NSArray, UIColor;

@interface QOverlayPathView : QOverlayView
{
    int _lineJoin;
    int _lineCap;
    UIColor *_fillColor;
    UIColor *_strokeColor;
    double _lineWidth;
    double _miterLimit;
    double _lineDashPhase;
    NSArray *_lineDashPattern;
}

+ (Class)layerClass;
@property(copy, nonatomic) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property(nonatomic) double lineDashPhase; // @synthesize lineDashPhase=_lineDashPhase;
@property(nonatomic) double miterLimit; // @synthesize miterLimit=_miterLimit;
@property(nonatomic) int lineCap; // @synthesize lineCap=_lineCap;
@property(nonatomic) int lineJoin; // @synthesize lineJoin=_lineJoin;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;
- (id)initWithOverlay:(id)arg1;
- (void)initDefaultAttributes;
- (void)strokePath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)applyFillPropertiesToContext:(struct CGContext *)arg1 atZoomScale:(double)arg2;
- (void)applyStrokePropertiesToContext:(struct CGContext *)arg1 atZoomScale:(double)arg2;
@property struct CGPath *path;
- (void)invalidatePath;
- (void)createPath;
- (id)caLineJoinFromCGLineJoin:(int)arg1;
- (id)caLineCapFromCGLineCap:(int)arg1;
- (id)shapeLayer;

@end

