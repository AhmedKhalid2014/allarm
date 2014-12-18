#import "WAllarmView.h"

@implementation WAllarmView

-(void)runThroughTable:(BOOL)state {
    
    int numOfRows = [tableView numberOfRowsInSection:0];
    
    for(int compareNum = 0; compareNum < numOfRows; compareNum++) {
        
        NSIndexPath *path = [NSIndexPath indexPathForRow:compareNum inSection:0];
        
        AlarmTableViewCell *cell = (AlarmTableViewCell*)[tableView cellForRowAtIndexPath:path];
        
        AlarmView *alarm = [cell.contentView.subviews objectAtIndex:0];
        
        [alarm.enabledSwitch setOn:state animated:YES];
        
        [cell _alarmActiveChanged:alarm.enabledSwitch];
        
        
    }
    
}
-(void)toggleAlarms:(id)sender {
    
    if (toggleSwitch.on) {
        
        [self runThroughTable:YES];
        
    } else {
        
        [self runThroughTable:NO];
        
    }
    
}

-(void)addToView {
    
    toggleLabel = [[UILabel alloc] initWithFrame:CGRectMake(15,0,200,50)];
    
    [toggleLabel setTextColor:[UIColor blackColor]];
    
    [toggleLabel setBackgroundColor:[UIColor clearColor]];
    
    toggleLabel.text = @"Toggle All Alarms:";
    
    toggleSwitch = [[UISwitch alloc] initWithFrame:CGRectMake(self.frame.size.width,10,150,50)];
    
    toggleSwitch.frame = CGRectMake((self.frame.size.width + 250),10,150,50);
    
    [toggleSwitch addTarget:self
                     action:@selector(toggleAlarms:) forControlEvents:UIControlEventValueChanged];

    toggleSwitch.onTintColor = [UIColor colorWithRed:46.0/255.0 green:160.0/255.0 blue:166.0/255.0 alpha:1.0];
    
    
    [self addSubview: toggleLabel];
    
    [self addSubview: toggleSwitch];
    
    tableView.tableHeaderView = self;
    
}

@end

%hook AlarmViewController

- (void)viewDidLoad {	

	%orig;

	controller = self;

	tableView = [self.view.subviews objectAtIndex:0];

	WAllarmView *hostView = [[WAllarmView alloc] initWithFrame:CGRectMake(0,0,tableView.frame.size.width,50)];

	[hostView addToView];
	
}


%end
