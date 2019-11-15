//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BackgroundMoveViewDelegate-Protocol.h"

@class BackgroundMoveView, MMTimerLabel, NSString, UIImageView, UILabel;
@protocol MultitalkMinimizeViewControllerDelegate;

@interface MultitalkMinimizeViewController : MMUIViewController <BackgroundMoveViewDelegate>
{
    BackgroundMoveView *m_backgroundImageView;
    UIImageView *m_iconImageView;
    UILabel *m_descriptionLabel;
    MMTimerLabel *m_timerLabel;
    id <MultitalkMinimizeViewControllerDelegate> m_delegate;
}

@property(nonatomic) __weak id <MultitalkMinimizeViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMTimerLabel *m_timerLabel; // @synthesize m_timerLabel;
@property(retain, nonatomic) UILabel *m_descriptionLabel; // @synthesize m_descriptionLabel;
@property(retain, nonatomic) UIImageView *m_iconImageView; // @synthesize m_iconImageView;
@property(retain, nonatomic) BackgroundMoveView *m_backgroundImageView; // @synthesize m_backgroundImageView;
- (void).cxx_destruct;
- (void)onBackgroundMoveViewTap;
- (void)showGrayDesc:(id)arg1;
- (void)showGreenDesc:(id)arg1;
- (void)startTimer;
- (void)viewDidLayoutSubviews;
- (void)initTimerView;
- (void)initDescView;
- (void)initIconView;
- (void)initBackgroundView;
- (void)viewDidLoad;
- (void)adsorbToWindow;
- (id)backgroundView;
- (id)moveView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

