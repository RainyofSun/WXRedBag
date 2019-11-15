//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HoneyPayBaseViewController.h"

#import "HoneyPayPrepareCardViewDelegate-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "WCPayInputMoneyViewDelegate-Protocol.h"

@class HoneyPayPrepareCardView, NSString, UIButton, UIView, WCPayInputMoneyView, WCPayNavigationBarBottomBanner;
@protocol HoneyPayModifyMaximumAmountViewControllerDelegate;

@interface HoneyPayModifyMaximumAmountViewController : HoneyPayBaseViewController <HoneyPayPrepareCardViewDelegate, ILinkEventExt, WCPayInputMoneyViewDelegate>
{
    id <HoneyPayModifyMaximumAmountViewControllerDelegate> _delegate;
    UIView *_navBackground;
    UIButton *_confirmButton;
    unsigned long long _entranceType;
    NSString *_amount;
    WCPayNavigationBarBottomBanner *_alertBanner;
    HoneyPayPrepareCardView *_prepareCardView;
    WCPayInputMoneyView *_inputMoneyView;
}

@property(retain, nonatomic) WCPayInputMoneyView *inputMoneyView; // @synthesize inputMoneyView=_inputMoneyView;
@property(retain, nonatomic) HoneyPayPrepareCardView *prepareCardView; // @synthesize prepareCardView=_prepareCardView;
@property(retain, nonatomic) WCPayNavigationBarBottomBanner *alertBanner; // @synthesize alertBanner=_alertBanner;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *navBackground; // @synthesize navBackground=_navBackground;
@property(nonatomic) __weak id <HoneyPayModifyMaximumAmountViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)max;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)wcpayInputMoneyView:(id)arg1 didChangeAmount:(id)arg2;
- (void)honeyPayPrepareCardView:(id)arg1 didchangeAmount:(id)arg2;
- (void)honeyPaykeyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)done;
- (void)checkAmount;
- (id)normalStatusHeaderView;
- (id)createStatusHeaderView;
- (void)relaodTableView;
- (void)setupNavigationBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

