//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAddressBaseViewController.h"

#import "LongPressMenuViewDelegate-Protocol.h"
#import "LongPressViewDelegate-Protocol.h"
#import "PasswordLogicDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSString, PasswordLogic, UIView;
@protocol WCAddressListViewControllerDelegate;

@interface WCAddressListViewController : WCAddressBaseViewController <UIAlertViewDelegate, PasswordLogicDelegate, LongPressMenuViewDelegate, LongPressViewDelegate>
{
    id <WCAddressListViewControllerDelegate> m_delegate;
    PasswordLogic *m_passwordLogic;
    int m_enWCAddressAddressListScene;
    UIView *m_oLastLongPressView;
}

- (void).cxx_destruct;
- (void)MenuControllerWillHide:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnPress:(id)arg1;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)accessoryButtonTappedForRowWithIndexPath:(id)arg1 Cell:(id)arg2;
- (void)commitEditingForRowAtIndexPath:(id)arg1 Cell:(id)arg2;
- (void)selectActionCell:(id)arg1;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeNewCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeImportYiXunCell:(id)arg1 cellInfo:(id)arg2;
- (void)removeFooterView;
- (void)createFooterView;
- (void)refreshViewWithData:(id)arg1;
- (void)resetDefautSelect;
- (double)getCellHeightForAddress:(id)arg1;
- (id)getAddressCopyedString:(id)arg1;
- (id)getAddressDetailString:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)startImportYiXunAddress:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showImportYiXunAddressView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)onNext;
- (void)reloadAddressList:(int)arg1;
- (void)initNavigationBar;
- (void)initPasswordLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

