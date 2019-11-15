//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "WCPrivacyPolicyToolBarViewDelegate-Protocol.h"

@class MMUIViewController, MMUIWindow, MMWebViewController, NSString, NSURL, WCPrivacyPolicyToolBarView;
@protocol WCPrivacyPolicyControlLogicDelegate;

@interface WCPrivacyPolicyControlLogic : MMObject <MMWebViewDelegate, MMTipsViewControllerDelegate, WCPrivacyPolicyToolBarViewDelegate>
{
    MMUIWindow *_window;
    MMUIViewController *_rootVC;
    MMWebViewController *_webviewVC;
    NSURL *_url;
    WCPrivacyPolicyToolBarView *_toolBar;
    _Bool _bFromReg;
    id <WCPrivacyPolicyControlLogicDelegate> _delegate;
    NSString *_webviewUrl;
    NSString *_guidanceContent;
    NSString *_doublecheckContent;
    NSString *_doublecheckCancel;
    NSString *_doublecheckOk;
    NSString *_cc;
    NSString *_scene;
}

@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *cc; // @synthesize cc=_cc;
@property(nonatomic) _Bool bFromReg; // @synthesize bFromReg=_bFromReg;
@property(retain, nonatomic) NSString *doublecheckOk; // @synthesize doublecheckOk=_doublecheckOk;
@property(retain, nonatomic) NSString *doublecheckCancel; // @synthesize doublecheckCancel=_doublecheckCancel;
@property(retain, nonatomic) NSString *doublecheckContent; // @synthesize doublecheckContent=_doublecheckContent;
@property(retain, nonatomic) NSString *guidanceContent; // @synthesize guidanceContent=_guidanceContent;
@property(retain, nonatomic) NSString *webviewUrl; // @synthesize webviewUrl=_webviewUrl;
@property(nonatomic) __weak id <WCPrivacyPolicyControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onWCPrivacyPolicyToolBarViewClickCancel;
- (void)onWCPrivacyPolicyToolBarViewClickDone;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onWebViewClickClose;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)showPrivacyPolicyView;
- (void)startLogic;
- (_Bool)checkData;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

