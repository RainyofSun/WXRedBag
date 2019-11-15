//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSMutableArray;

@protocol WNArticleToolViewDelegate <NSObject>
- (MMUIViewController *)getViewController;

@optional
- (_Bool)isRecording;
- (_Bool)isReminderParagraph;
- (_Bool)isTodoParagraph;
- (_Bool)isOlLiParagraph;
- (_Bool)isUlLiParagraph;
- (_Bool)isSelectedTextBold;
- (void)onShowBasicToolView;
- (void)onShowFullToolView;
- (unsigned int)objectCount;
- (_Bool)ifHasReachedSizeLimit;
- (void)onToolViewParagraphSetTodo;
- (void)onParagraphSetOl;
- (void)onParagraphSetUl;
- (void)onTextSetBold;
- (void)insertItems:(NSMutableArray *)arg1;
@end

