/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADClientAddValueForScalarKey.h"

@class UIButton;

@interface WeatherAttributionView : _ADClientAddValueForScalarKey
{
    id <WorldClockCollectionEditDelegate> _delegate;
    UIButton *_twcButton;
}

- (void)setTwcButton:(id)fp8;
- (id)twcButton;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)_twcLogoTapped;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

