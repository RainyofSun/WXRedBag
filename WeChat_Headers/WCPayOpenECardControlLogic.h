//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayECardBaseControlLogic.h"

#import "MMWebViewDelegate-Protocol.h"
#import "WCPayBindECardCgiDelegate-Protocol.h"
#import "WCPayECardBankCardListViewControllerDelegate-Protocol.h"
#import "WCPayECardFillCardInfoViewControllerDelegate-Protocol.h"
#import "WCPayECardSelectCardTypeViewControllerDelegate-Protocol.h"
#import "WCPayECardSuccessViewControllerDelegate-Protocol.h"
#import "WCPayLQTDetailControlLogicDelegate-Protocol.h"
#import "WCPayLQTOpenLqbAccountCgiDelegate-Protocol.h"
#import "WCPayOpenECardAuthCgiDelegate-Protocol.h"
#import "WCPayOpenECardCgiDelegate-Protocol.h"
#import "WCPayPayPwdViewControllerDelegate-Protocol.h"
#import "WCPayQryBankList4BindCgiDelegate-Protocol.h"
#import "WCPayVerifyPayCardViewControllerDelegate-Protocol.h"

@class NSString, WCPayBindECardCgi, WCPayLQTDetailControlLogic, WCPayLQTOpenLqbAccountCgi, WCPayOpenECardAuthCgi, WCPayOpenECardCgi, WCPayQryBankList4BindCgi;
@protocol WCPayOpenECardControlLogicDelegate;

@interface WCPayOpenECardControlLogic : WCPayECardBaseControlLogic <WCPayOpenECardAuthCgiDelegate, WCPayQryBankList4BindCgiDelegate, WCPayOpenECardCgiDelegate, WCPayBindECardCgiDelegate, WCPayPayPwdViewControllerDelegate, WCPayECardBankCardListViewControllerDelegate, WCPayECardFillCardInfoViewControllerDelegate, WCPayECardSelectCardTypeViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, MMWebViewDelegate, WCPayECardSuccessViewControllerDelegate, WCPayLQTOpenLqbAccountCgiDelegate, WCPayLQTDetailControlLogicDelegate>
{
    _Bool _bIsOpenECardSucc;
    id <WCPayOpenECardControlLogicDelegate> _delegate;
    WCPayOpenECardAuthCgi *_openECardAuthCgi;
    WCPayQryBankList4BindCgi *_bankListCgi;
    WCPayOpenECardCgi *_openECardCgi;
    WCPayBindECardCgi *_bindECardCgi;
    WCPayLQTOpenLqbAccountCgi *_lqbOpenAccoutCgi;
    NSString *_jsapiToken;
    NSString *_jsapiExtraData;
    WCPayLQTDetailControlLogic *_lqtDetailControlLogic;
}

@property(nonatomic) _Bool bIsOpenECardSucc; // @synthesize bIsOpenECardSucc=_bIsOpenECardSucc;
@property(retain, nonatomic) WCPayLQTDetailControlLogic *lqtDetailControlLogic; // @synthesize lqtDetailControlLogic=_lqtDetailControlLogic;
@property(retain, nonatomic) NSString *jsapiExtraData; // @synthesize jsapiExtraData=_jsapiExtraData;
@property(retain, nonatomic) NSString *jsapiToken; // @synthesize jsapiToken=_jsapiToken;
@property(retain, nonatomic) WCPayLQTOpenLqbAccountCgi *lqbOpenAccoutCgi; // @synthesize lqbOpenAccoutCgi=_lqbOpenAccoutCgi;
@property(retain, nonatomic) WCPayBindECardCgi *bindECardCgi; // @synthesize bindECardCgi=_bindECardCgi;
@property(retain, nonatomic) WCPayOpenECardCgi *openECardCgi; // @synthesize openECardCgi=_openECardCgi;
@property(retain, nonatomic) WCPayQryBankList4BindCgi *bankListCgi; // @synthesize bankListCgi=_bankListCgi;
@property(retain, nonatomic) WCPayOpenECardAuthCgi *openECardAuthCgi; // @synthesize openECardAuthCgi=_openECardAuthCgi;
@property(nonatomic) __weak id <WCPayOpenECardControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLQTDetailControlLogicStop;
- (void)gotoLQTDetailControLogic;
- (void)clickLqbOpenAccountError;
- (void)onGetLqbOpenAccountCgiResp:(id)arg1;
- (void)sendLqbOpenAccountRequest;
- (void)bindECardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)bindECardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)OnGetBindingCardBin:(id)arg1 AvailableBank:(id)arg2 userExInfoResponse:(id)arg3 Error:(id)arg4;
- (void)qryBankList4BindCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)qryBankList4BindCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)openECardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)openECardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)openECardAuthCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)openECardAuthCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)sendOpenEcardAuthRequestWithPwd:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)successVCFinished:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardBack;
- (void)vc:(id)arg1 didSelectCardType:(id)arg2;
- (void)fillCardInfoVC:(id)arg1 didFilledWithCardNumber:(id)arg2 phoneNumber:(id)arg3;
- (void)eCardBankListVCDidChoseNewCard:(id)arg1;
- (void)eCardBankListVC:(id)arg1 didSelectedCard:(id)arg2;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)stopLoadingVerifying;
- (void)startLodingVerifying;
- (void)showPasswordVC;
- (void)startQueryBankCardList;
- (void)startOpenECardWithBankType:(id)arg1 PhoneNumber:(id)arg2 bindSerial:(id)arg3 bankCardNo:(id)arg4 isisRepeatSend:(_Bool)arg5;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

