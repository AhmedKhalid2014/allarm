@interface AlarmView : UIView
-(UISwitch *)enabledSwitch;
@end


@interface AlarmViewController : UIViewController
- (UIScrollView *)contentScrollView;
- (void)activeChangedForAlarm:(id)fp8 active:(BOOL)fp12;
@end

@interface AlarmTableViewCell : UITableViewCell
{
    AlarmView *_alarmView;
}

- (void)_alarmActiveChanged:(id)fp8;

@end


static UITableView *tableView;
static AlarmViewController *controller;


@interface WAllarmView : UIView {
    
    UISwitch *toggleSwitch;
    UILabel *toggleLabel;
}
-(void)addToView;
-(void)toggleAlarms:(id)sender;
-(void)runThroughTable:(BOOL)state;
@end

