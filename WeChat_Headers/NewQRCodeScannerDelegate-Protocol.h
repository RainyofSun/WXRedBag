//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NewQRCodeScanner;

@protocol NewQRCodeScannerDelegate <NSObject>

@optional
- (void)onDetectQRCode:(_Bool)arg1 areaRatio:(float)arg2;
- (void)onGotBarcode:(NSString *)arg1 Type:(NSString *)arg2;
- (void)NewQRCodeScanner:(NewQRCodeScanner *)arg1 didScanResult:(NSString *)arg2 type:(NSString *)arg3 version:(int)arg4;
@end

