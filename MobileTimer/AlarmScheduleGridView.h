/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADClientAddValueForScalarKey.h"

@class NSCalendar, NSDate, NSDateFormatter, NSMutableArray, UIImage, UIImageView;

@interface AlarmScheduleGridView : _ADClientAddValueForScalarKey
{
    UIImage *_patternImage;
    float _leftMargin;
    float _columnWidth;
    int _highlightedColumnIndex;
    NSMutableArray *_hourLabels;
    NSCalendar *_calendar;
    NSDate *_baseDate;
    NSDateFormatter *_formatter;
    UIImageView *_backgroundImageView;
}

+ (float)heightForNumberOfHalfHours:(int)fp8;
+ (id)colorForBackground;
- (void)setHighlightedColumnIndex:(int)fp8;
- (int)highlightedColumnIndex;
- (float)columnWidth;
- (float)leftMargin;
- (void)handleLocaleChange;
- (void)rebuildGrid;
- (void)viewWillTransitionToSize:(struct CGSize)fp8 withTransitionCoordinator:(id)fp16;
- (void)setVisibleBounds:(struct CGRect)fp8;
- (void)setBounds:(struct CGRect)fp8;
- (void)setFrame:(struct CGRect)fp8;
- (void)setShowingHourLabels:(BOOL)fp8;
- (BOOL)isShowingHourLabels;
- (void)setColumnWidth:(float)fp8;
- (void)setLeftMargin:(float)fp8;
- (void)updateHourLabelValues;
- (id)newHourLabel;
- (void)layoutSubviews;
- (void)setupWithCurrentLocale;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end
