
#import <UIKit/UIKit.h>

@interface DemoTableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UIImageView *img;
@property (strong, nonatomic) IBOutlet UILabel *name;
@property (strong, nonatomic) IBOutlet UILabel *uni;

@property NSString *imgstr,*namestr,*unistr;

@end
