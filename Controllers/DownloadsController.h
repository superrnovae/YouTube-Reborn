#import <UIKit/UIKit.h>

@interface DownloadsController : UIViewController <UITabBarControllerDelegate>

@property (nonatomic, retain) UITabBarController *tabBar;

- (void)setupDownloadsControllerView;

@end