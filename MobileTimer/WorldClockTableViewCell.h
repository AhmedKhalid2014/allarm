/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADClientAddValueForScalarKey.h"

#import "WorldClockCellViewDelegate-Protocol.h"

@class WorldClockCellView, WorldClockCity;

@interface WorldClockTableViewCell : _ADClientAddValueForScalarKey <WorldClockCellViewDelegate>
{
    WorldClockCity *_city;
    WorldClockCellView *_clockCellView;
    int _style;
}

+ (float)defaultHeight;
- (void)timeDidChangeForClockCell:(id)fp8;
- (void)setEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setStyle:(int)fp8 animated:(BOOL)fp12;
- (void)stop;
- (void)start;
- (id)city;
- (void)setCity:(id)fp8;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end

