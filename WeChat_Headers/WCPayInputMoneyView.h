//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel, UITextField;
@protocol WCPayInputMoneyViewDelegate;

@interface WCPayInputMoneyView : UIView
{
    id <WCPayInputMoneyViewDelegate> _delegate;
    NSString *_titleText;
    UIColor *_titleColor;
    NSString *_unitText;
    UIColor *_unitColor;
    UIColor *_separatorColor;
    UILabel *_title;
    UILabel *_unitLabel;
    UITextField *_textField;
    UIView *_separator;
}

@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) UIColor *unitColor; // @synthesize unitColor=_unitColor;
@property(copy, nonatomic) NSString *unitText; // @synthesize unitText=_unitText;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) __weak id <WCPayInputMoneyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

