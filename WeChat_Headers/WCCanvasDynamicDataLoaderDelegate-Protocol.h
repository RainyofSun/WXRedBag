//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WCCanvasDynamicDataLoaderDelegate <NSObject>

@optional
- (void)onFavProductReturn:(unsigned int)arg1 errMsg:(NSString *)arg2;
- (void)onCanvasDynamicXMLReturn:(NSString *)arg1 error:(int)arg2 forCanvasId:(NSString *)arg3;
- (void)onCanvasDynamicDataReturn:(NSDictionary *)arg1;
@end

