/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "PagingLandscapeCollectionViewController.h"

#import "AlarmActiveDelegate-Protocol.h"
#import "AlarmDelegate-Protocol.h"
#import "EditAlarmViewControllerDelegate-Protocol.h"
#import "StateManagement-Protocol.h"

@class Alarm;

@interface AlarmViewController : PagingLandscapeCollectionViewController <AlarmDelegate, AlarmActiveDelegate, EditAlarmViewControllerDelegate, StateManagement>
{
    BOOL _viewVisible;
    Alarm *_alarmToEdit;
    BOOL _didScrollToCurrentTime;
}

- (id)defaultPNGName;
- (struct CGSize)collectionView:(id)fp8 layout:(id)fp12 sizeForItemAtIndexPath:(id)fp16;
- (id)collectionView:(id)fp8 cellForItemAtIndexPath:(id)fp12;
- (int)collectionView:(id)fp8 numberOfItemsInSection:(int)fp12;
- (void)activeChangedForAlarm:(id)fp8 active:(BOOL)fp12;
- (void)alarmDidUpdate:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 commitEditingStyle:(int)fp12 forRowAtIndexPath:(id)fp16;
- (void)didEditAlarm:(id)fp8;
- (void)setEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (void)showEditViewForRow:(int)fp8;
- (void)dismissAddViewController:(id)fp8;
- (void)showAddView;
- (id)addViewController;
- (void)saveScrollPoint;
- (int)numberOfItems;
- (float)itemsTableRowHeight;
- (id)noItemsText;
- (void)saveState;
- (void)reloadState;
- (void)pagingCollectionViewDidLoad;
- (void)viewDidUnload;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)loadView;
- (id)contentScrollView;
- (id)init;

@end
