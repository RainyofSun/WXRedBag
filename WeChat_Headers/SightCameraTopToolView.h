//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SightFiltersExt-Protocol.h"

@class NSString, UIButton;

@interface SightCameraTopToolView : UIView <SightFiltersExt>
{
    _Bool _isRecording;
    long long _flashMode;
    UIButton *_closeButton;
    unsigned long long _toolItems;
    UIButton *_cameraSwitchButton;
    CDUnknownBlockType _switchCameraBlock;
    CDUnknownBlockType _closeButtonBlock;
}

+ (long long)torchModeWithToolFlashMode:(long long)arg1;
+ (long long)flashModeWithToolFlashMode:(long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType closeButtonBlock; // @synthesize closeButtonBlock=_closeButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType switchCameraBlock; // @synthesize switchCameraBlock=_switchCameraBlock;
@property(retain, nonatomic) UIButton *cameraSwitchButton; // @synthesize cameraSwitchButton=_cameraSwitchButton;
@property(nonatomic) unsigned long long toolItems; // @synthesize toolItems=_toolItems;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
- (void).cxx_destruct;
- (void)switchCamera;
- (void)onCloseButtonClicked;
- (void)updateCameraAccessibility;
- (void)setupView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 toolItems:(unsigned long long)arg2;
- (void)rotateToOrientation:(long long)arg1;
@property(nonatomic) long long orientation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

