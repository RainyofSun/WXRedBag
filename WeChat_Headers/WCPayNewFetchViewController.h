//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCPayBalanceSelectCardViewDelegate-Protocol.h"
#import "WCPayNoticeBannerDelegate-Protocol.h"

@class MMUIButton, MMUILabel, MMUIView, NSDictionary, NSString, UIButton, UITextField, WCPayBalanceTipsLogic, WCPayBindCardInfo, WCPayNoticeBanner;
@protocol WCPayNewFetchViewControllerDelegate;

@interface WCPayNewFetchViewController : WCPayBaseViewController <UITableViewDelegate, WCPayNoticeBannerDelegate, MMTipsViewControllerDelegate, WCPayBalanceSelectCardViewDelegate>
{
    WCPayBindCardInfo *m_oCardInfo;
    WCPayNoticeBanner *m_banner;
    MMUIView *m_containerView;
    MMUIView *m_cardBgView;
    MMUILabel *m_cardLabel;
    MMUIButton *m_bankNameBtn;
    MMUILabel *m_bankChargeFeeLabel;
    MMUIView *m_fetchBgView;
    MMUILabel *m_fetchLabel;
    MMUILabel *m_symbolLabel;
    UITextField *m_fetchMoneyFeild;
    MMUIView *m_fetchLine;
    MMUILabel *m_fetchTipLabel;
    MMUIButton *m_fetchAllBtn;
    UIButton *m_fetchNextBtn;
    WCPayBalanceTipsLogic *tipLogic;
    _Bool m_bFetchAll;
    NSDictionary *m_dicBanners;
    _Bool _m_hasManualSelectedCard;
    id <WCPayNewFetchViewControllerDelegate> _m_delegate;
}

@property(nonatomic) _Bool m_hasManualSelectedCard; // @synthesize m_hasManualSelectedCard=_m_hasManualSelectedCard;
@property(nonatomic) __weak id <WCPayNewFetchViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)selectCardViewDidSelectAddNewCard:(id)arg1;
- (void)selectCardView:(id)arg1 didSelectCard:(id)arg2;
- (void)checkAndShowFirstVisitTips;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)showFetchRuleTips;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (double)getRealtimeChargeFeeFor:(double)arg1;
- (void)showFetchBalanceTip;
- (void)showChargeFeeTip:(double)arg1;
- (void)showBeyondFetchBalanceErrorTip;
- (void)updateFetchTipLable:(id)arg1;
- (void)textFieldDidChange;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)onFetchAllBtnClick:(id)arg1;
- (void)doNext;
- (void)onClickBankName:(id)arg1;
- (void)onClickNext:(id)arg1;
- (void)onCancelClick;
- (void)onRightBarButtonClick;
- (void)setCurrentCardInfo:(id)arg1;
- (id)getNoticeBanner;
- (void)setCardInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)getCardNameFrom:(id)arg1;
- (id)genLabelWithFontSize:(int)arg1 textColor:(id)arg2;
- (void)layoutBottomView;
- (void)layoutFetchInfo;
- (void)layoutBankCardInfo;
- (void)layoutAllViews;
- (void)setupView;
- (void)setupNavigationBar;
- (id)getFirstAvailableCard;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

