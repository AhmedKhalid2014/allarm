/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADClientAddValueForScalarKey.h"

@class MTStopwatchController, UILabel, UIView;

@interface StopwatchPadControls : _ADClientAddValueForScalarKey
{
    double _timeValue;
    UILabel *_timeLabel;
    double _currentLapTimeInterval;
    UILabel *_currentLapTimeLabel;
    UIView *_middleKeylineView;
    UIView *_bottomKeylineView;
    UIView *_buttonsBackgroundView;
    BOOL _rotating;
    MTStopwatchController *_controller;
}

+ (float)defaultHeight;
- (void)setMode:(int)fp8;
- (int)mode;
- (id)target;
- (void)layoutSubviews;
- (void)hostViewDidRotate;
- (void)_setControlsBackgroundColor;
- (void)hostViewWillRotate;
- (void)handleLocaleChange;
- (void)setCurrentLapTime:(double)fp8;
- (void)setTime:(double)fp8;
- (void)setButtonSize:(unsigned int)fp8;
- (void)dealloc;
- (id)initWithTarget:(id)fp8;
- (void)_configureAndAddButton:(id)fp8;

@end

