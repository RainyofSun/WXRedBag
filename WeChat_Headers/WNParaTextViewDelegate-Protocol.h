//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITextViewDelegate-Protocol.h"

@protocol WNParaTextViewDelegate <UITextViewDelegate>

@optional
- (void)onWNTextViewAttrTextChanged;
- (_Bool)isTextViewMenuEnable;
- (void)onTextViewTouched:(long long)arg1;
- (void)onTextViewMenuPaste;
- (_Bool)shouldHandleSelectAllByself;
- (void)onSelectAll;
- (void)onSelectText:(struct _NSRange)arg1;
@end

