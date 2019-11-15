//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol QDataSourceProtocol;

@interface QTiledLayerRender : UIView
{
    _Bool _useSnapshotRenderer;
    _Bool _isHandDrawMapEnabled;
    _Bool _snapshotRenderering;
    id <QDataSourceProtocol> _dataSource;
    struct CGContext *_snapshotContext;
}

+ (Class)layerClass;
@property _Bool snapshotRenderering; // @synthesize snapshotRenderering=_snapshotRenderering;
@property(nonatomic) _Bool isHandDrawMapEnabled; // @synthesize isHandDrawMapEnabled=_isHandDrawMapEnabled;
@property struct CGContext *snapshotContext; // @synthesize snapshotContext=_snapshotContext;
@property _Bool useSnapshotRenderer; // @synthesize useSnapshotRenderer=_useSnapshotRenderer;
@property(retain, nonatomic) id <QDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupSelf;
- (void)switchDataSourceByNotification:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (id)tiledLayer;

@end

