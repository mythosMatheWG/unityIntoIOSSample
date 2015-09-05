//
//  UnityParentViewController.h
//
//  Created by Markus Zancolò on 05/09/15.
//
//

#import <UIKit/UIKit.h>

@interface UnityParentViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIView *unityContainer;

- (void) setUnityController:(UIViewController*) anUnityController;

@end
