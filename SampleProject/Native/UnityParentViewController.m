//
//  UnityParentViewController.m
//
//  Created by Markus Zancolò on 05/09/15.
//
//

#import "UnityParentViewController.h"
#import "AppDelegate.h"

#import "UnityAppController+UnityInterface.h" //for setPaused

#define SYSTEM_VERSION_LESS_THAN(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)


void UnityRequestRenderingResolution(unsigned w, unsigned h);

@interface UnityParentViewController (){
    UIViewController* unityController;
    UIView* unityView;
}
@property (weak, nonatomic) IBOutlet UILabel *lblAboveUnity;

@end

@implementation UnityParentViewController

- (void)viewDidLayoutSubviews {
    [super viewDidLayoutSubviews];
    //needed to notify unity about changes in the viewsize
    UnityRequestRenderingResolution(self.unityContainer.bounds.size.width, self.unityContainer.bounds.size.height);
}

- (void) setUnityController:(UIViewController*) anUnityController {
    [self view];
    unityController= anUnityController;
    
    if (unityController != nil) {
        [unityController willMoveToParentViewController:self];
        unityView= unityController.view;
        if(SYSTEM_VERSION_LESS_THAN(@"8.0")){
            //otherwise unity messes up with orientation
            unityView.transform= CGAffineTransformIdentity;
        }
        unityView.frame= self.unityContainer.bounds;
        unityView.autoresizingMask= UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth;
        [self.unityContainer addSubview: unityView];
        [self addChildViewController:unityController];
        [unityController didMoveToParentViewController:self];
    }
    
}

- (IBAction)hitTheButton:(id)sender {
    static int count= 0;
    self.lblAboveUnity.text= [NSString stringWithFormat:@"You hit the button %d times",count++];
}
    
- (IBAction)togglePause:(UIButton*)sender {
    AppDelegate* delegate= (AppDelegate*) [[UIApplication sharedApplication] delegate];
    if([delegate paused]) {
        //Use this to pause unity whenever you dont show it, so it doesnt eat up resources
        [delegate setPaused:NO];
        [sender setTitle:@"Pause" forState:UIControlStateNormal];
    } else {
        [delegate setPaused:YES];
        [sender setTitle:@"Unpause" forState:UIControlStateNormal];
    }
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
