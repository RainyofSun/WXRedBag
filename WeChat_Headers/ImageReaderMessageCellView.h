//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReaderMessageCellView.h"

#import "AsyncImageViewDelegate-Protocol.h"

@class AsyncImageView, CAGradientLayer, CALayer, ImageReaderMessageViewModel, NSString, RichTextView, UIImageView;

@interface ImageReaderMessageCellView : ReaderMessageCellView <AsyncImageViewDelegate>
{
    CALayer *m_hightlightLayer;
    UIImageView *m_imageIcon;
    RichTextView *m_imageNumLabel;
    AsyncImageView *m_coverImageView;
    CAGradientLayer *m_coverMaskLayer;
    CAGradientLayer *m_gradientLayer;
}

- (void).cxx_destruct;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)onAsyncLoadImageOK:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) ImageReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

