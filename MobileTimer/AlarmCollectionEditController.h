/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADClientAddValueForScalarKey.h"

#import "EditAlarmViewControllerDelegate-Protocol.h"

@class EditAlarmViewController;

@interface AlarmCollectionEditController : _ADClientAddValueForScalarKey <EditAlarmViewControllerDelegate>
{
    EditAlarmViewController *_editController;
    id <EditAlarmViewControllerDelegate> _collectionDelegate;
}

- (void)setCollectionDelegate:(id)fp8;
- (id)collectionDelegate;
- (id)editController;
- (void)dismissAddViewController:(id)fp8;
- (void)didEditAlarm:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 commitEditingStyle:(int)fp12 forRowAtIndexPath:(id)fp16;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

