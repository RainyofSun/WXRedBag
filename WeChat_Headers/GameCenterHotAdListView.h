//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSArray;
@protocol GameCenterHotAdListViewDelegate;

@interface GameCenterHotAdListView : MMUIView
{
    NSArray *_adList;
    id <GameCenterHotAdListViewDelegate> _delegate;
}

+ (double)getImageHeight;
+ (double)heightForData:(id)arg1;
@property(nonatomic) __weak id <GameCenterHotAdListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onTapImg:(id)arg1;
- (id)makeSingleImgView:(id)arg1 frame:(struct CGRect)arg2 superView:(id)arg3;
- (id)createImageView:(id)arg1 secondImageView:(id)arg2 thirdImageView:(id)arg3;
- (id)createImageView:(id)arg1 secondImageView:(id)arg2;
- (id)createImageView:(id)arg1;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1 hotAdList:(id)arg2;

@end

