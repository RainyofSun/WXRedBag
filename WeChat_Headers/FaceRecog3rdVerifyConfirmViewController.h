//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FaceRecog3rdVerifyConfirmLogicDelegate-Protocol.h"
#import "FaceRecogHandlerDelegate-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class FaceRecog3rdVerifyConfirmLogic, FaceRecog3rdVerifyHandler, MMTableViewInfo, MMUILabel, NSString, UIButton, UIImageView;
@protocol FaceRecog3rdVerifyConfirmViewControllerDelegate;

@interface FaceRecog3rdVerifyConfirmViewController : MMUIViewController <FaceRecog3rdVerifyConfirmLogicDelegate, FaceRecogHandlerDelegate, ILinkEventExt, UIAlertViewDelegate>
{
    _Bool _needVideo;
    unsigned int _scene;
    id <FaceRecog3rdVerifyConfirmViewControllerDelegate> _delegate;
    FaceRecog3rdVerifyHandler *_verifyHandler;
    MMTableViewInfo *_tableViewInfo;
    UIImageView *_iconView;
    MMUILabel *_sloganLabel;
    UIButton *_confirmInvokeBtn;
    FaceRecog3rdVerifyConfirmLogic *_confirmLogic;
    NSString *_appId;
    NSString *_verifyInfo;
}

@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool needVideo; // @synthesize needVideo=_needVideo;
@property(copy, nonatomic) NSString *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) FaceRecog3rdVerifyConfirmLogic *confirmLogic; // @synthesize confirmLogic=_confirmLogic;
@property(retain, nonatomic) UIButton *confirmInvokeBtn; // @synthesize confirmInvokeBtn=_confirmInvokeBtn;
@property(retain, nonatomic) MMUILabel *sloganLabel; // @synthesize sloganLabel=_sloganLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) FaceRecog3rdVerifyHandler *verifyHandler; // @synthesize verifyHandler=_verifyHandler;
@property(nonatomic) __weak id <FaceRecog3rdVerifyConfirmViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)getReportScene;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onGetConfirmInfo:(id)arg1 failedCauseOf:(unsigned int)arg2 msg:(id)arg3;
- (void)onGetConfirmInfoSucceed:(id)arg1;
- (void)faceRecogHandlerDidCancel:(id)arg1;
- (void)faceRecogHandlerDidFinish:(id)arg1;
- (void)onCancel;
- (void)initData;
- (void)onStartFaceReco;
- (void)doStartFaceReco;
- (void)initBottomRulesView:(id)arg1;
- (void)initConfirmButton:(id)arg1;
- (void)makeInfoCell:(id)arg1 CellInfo:(id)arg2;
- (void)initFooterView;
- (void)initHeaderView;
- (void)initTableView;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithAppId:(id)arg1 verifyInfo:(id)arg2 needVideo:(_Bool)arg3 scene:(unsigned int)arg4;
- (id)initWithUnionVideoAppId:(id)arg1 verifyInfo:(id)arg2 scene:(unsigned int)arg3;
- (id)initWithAppId:(id)arg1 verifyInfo:(id)arg2 scene:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

