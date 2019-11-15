//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "WCPayBeforeTransferCgiDelegate-Protocol.h"
#import "WCPayGetTransferWordingCgiDelegate-Protocol.h"
#import "WCPayNoticeBannerDelegate-Protocol.h"

@class CgiTransferBeforeResp, GetTransferWordingResponse, MMHeadImageView, MMTipsViewController, NSDictionary, NSString, RichTextView, UIButton, UILabel, UITextField, UIView, WCPayBeforeTransferCgi, WCPayGetTransferWordingCgi, WCPayMoneyTextFieldItem, WCPayNoticeBanner;
@protocol WCPayTransferMoneyViewControllerDelegate;

@interface WCPayTransferMoneyViewController : WCPayBaseViewController <WCPayNoticeBannerDelegate, WCPayGetTransferWordingCgiDelegate, WCPayBeforeTransferCgiDelegate, MMTipsViewControllerDelegate, ILinkEventExt>
{
    UIButton *m_footerButton;
    id <WCPayTransferMoneyViewControllerDelegate> m_delegate;
    WCPayMoneyTextFieldItem *m_textFieldItem;
    MMTipsViewController *tipsView;
    _Bool m_bIsPoped;
    struct CGPoint m_originalViewCenter;
    _Bool m_isShowTips;
    NSDictionary *m_dicBanners;
    WCPayNoticeBanner *noticeBanner;
    UIView *headerView;
    UIView *footerView;
    _Bool m_isPushed;
    _Bool _disableEditMoney;
    _Bool _bIsFeeTextFieldFirstTimeAutoFocus;
    NSString *_remark;
    UITextField *_feeTextField;
    RichTextView *_commentTextView;
    UILabel *_transferDisplaynameLabel;
    UILabel *_transferTitleLabel;
    MMHeadImageView *_headImageView;
    UIView *_bannerView;
    UIView *_contentView;
    UILabel *_moneyTitle;
    UILabel *_unitLabel;
    UILabel *_fixMoneyLabel;
    UIView *_m_lineView;
    UILabel *_transferDelayLabel;
    WCPayGetTransferWordingCgi *_wordingCgi;
    GetTransferWordingResponse *_wordingResponse;
    WCPayBeforeTransferCgi *_beforeCgi;
    CgiTransferBeforeResp *_beforeResponse;
}

@property(nonatomic) _Bool bIsFeeTextFieldFirstTimeAutoFocus; // @synthesize bIsFeeTextFieldFirstTimeAutoFocus=_bIsFeeTextFieldFirstTimeAutoFocus;
@property(retain, nonatomic) CgiTransferBeforeResp *beforeResponse; // @synthesize beforeResponse=_beforeResponse;
@property(retain, nonatomic) WCPayBeforeTransferCgi *beforeCgi; // @synthesize beforeCgi=_beforeCgi;
@property(retain, nonatomic) GetTransferWordingResponse *wordingResponse; // @synthesize wordingResponse=_wordingResponse;
@property(retain, nonatomic) WCPayGetTransferWordingCgi *wordingCgi; // @synthesize wordingCgi=_wordingCgi;
@property(retain, nonatomic) UILabel *transferDelayLabel; // @synthesize transferDelayLabel=_transferDelayLabel;
@property(retain, nonatomic) UIView *m_lineView; // @synthesize m_lineView=_m_lineView;
@property(retain, nonatomic) UILabel *fixMoneyLabel; // @synthesize fixMoneyLabel=_fixMoneyLabel;
@property(retain, nonatomic) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(retain, nonatomic) UILabel *moneyTitle; // @synthesize moneyTitle=_moneyTitle;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *transferTitleLabel; // @synthesize transferTitleLabel=_transferTitleLabel;
@property(retain, nonatomic) UILabel *transferDisplaynameLabel; // @synthesize transferDisplaynameLabel=_transferDisplaynameLabel;
@property(retain, nonatomic) RichTextView *commentTextView; // @synthesize commentTextView=_commentTextView;
@property(retain, nonatomic) UITextField *feeTextField; // @synthesize feeTextField=_feeTextField;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) _Bool disableEditMoney; // @synthesize disableEditMoney=_disableEditMoney;
- (void).cxx_destruct;
- (void)beforeTransferCgi:(id)arg1 didFailWith:(id)arg2;
- (void)beforeTransferCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)wcpayGetTransferWordingCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)setChargeFeeDesc;
- (void)setNoticeBanner;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)changeY:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (id)imageWithColor:(id)arg1;
- (void)showChargeFeeTips;
- (void)textFieldDidChange;
- (void)remarkConfirm:(id)arg1;
- (void)remarkCancel:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)refreshViewWithData:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onNext;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)onOpenQA;
- (void)reloadTableView;
- (void)setLeftCancelButton:(id)arg1;
- (void)initNavigationBar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (_Bool)isTransferScene;
- (void)FillSaveMoneyCancel;
- (void)CancelMySelfViewController;
- (id)getTransferDelayTips;
- (void)layoutForTransfer;
- (void)initNewHeaderView;
- (id)getTransferContactDisplayName;
- (void)requestBeforeInfo;
- (void)requestWording;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

