/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADClientAddValueForScalarKey.h"

@class UIColor;

@interface CircleProgressView : _ADClientAddValueForScalarKey
{
    float _progress;
    float _animateNextPathChange;
    UIColor *_color;
    float _thickness;
}

- (void)setThickness:(float)fp8;
- (float)thickness;
- (void)setColor:(id)fp8;
- (id)color;
- (void)setAnimateNextPathChange:(float)fp8;
- (float)animateNextPathChange;
- (float)progress;
- (void)drawRect:(struct CGRect)fp8;
- (void)setProgress:(float)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end

