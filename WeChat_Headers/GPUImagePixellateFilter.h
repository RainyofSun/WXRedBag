//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImagePixellateFilter : GPUImageFilter
{
    int fractionalWidthOfAPixelUniform;
    int aspectRatioUniform;
    double _fractionalWidthOfAPixel;
    double _aspectRatio;
}

@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) double fractionalWidthOfAPixel; // @synthesize fractionalWidthOfAPixel=_fractionalWidthOfAPixel;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)adjustAspectRatio;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)init;

@end

