/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADClientAddValueForScalarKey.h"

#import "UISearchBarDelegate-Protocol.h"

@class ClockSearchField, NSArray, NSMutableIndexSet, UILabel;

@interface AddClockViewController : _ADClientAddValueForScalarKey <UISearchBarDelegate>
{
    id <AddClockViewControllerDelegate> _delegate;
    ClockSearchField *_searchField;
    UILabel *_noResultsFoundLabel;
    NSArray *_cities;
    NSArray *_partitionedCities;
    NSArray *_sectionIndexTitles;
    NSMutableIndexSet *_populatedIndexSet;
}

- (id)searchField;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)searchBar:(id)fp8 textDidChange:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 sectionForSectionIndexTitle:(id)fp12 atIndex:(int)fp16;
- (int)numberOfSectionsInTableView:(id)fp8;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (id)sectionIndexTitlesForTableView:(id)fp8;
- (void)prepopulateSuggestions;
- (void)_showNoResultsFound:(BOOL)fp8;
- (void)_dismiss;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

@end

