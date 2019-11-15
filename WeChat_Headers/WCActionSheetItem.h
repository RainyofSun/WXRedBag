//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface WCActionSheetItem : NSObject
{
    _Bool _bEnable;
    _Bool _bCustom;
    _Bool _bDestructiveButton;
    NSString *_title;
    NSString *_titleColor;
    long long _titleSize;
    NSString *_desc;
    NSString *_descColor;
    long long _descSize;
    UIImage *_iconImage;
}

@property(nonatomic) _Bool bDestructiveButton; // @synthesize bDestructiveButton=_bDestructiveButton;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) _Bool bCustom; // @synthesize bCustom=_bCustom;
@property(nonatomic) _Bool bEnable; // @synthesize bEnable=_bEnable;
@property(nonatomic) long long descSize; // @synthesize descSize=_descSize;
@property(copy, nonatomic) NSString *descColor; // @synthesize descColor=_descColor;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) long long titleSize; // @synthesize titleSize=_titleSize;
@property(copy, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (double)getItemHeight;
- (id)initWithTitle:(id)arg1 fontSize:(long long)arg2 fontColor:(id)arg3 WithDesc:(id)arg4 descFontSize:(long long)arg5 descFontColor:(id)arg6 enable:(_Bool)arg7;
- (id)initWithTitle:(id)arg1;

@end

