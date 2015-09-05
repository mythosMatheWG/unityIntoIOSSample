//
//  AppDelegate.m
//
//  Created by Markus Zancolò on 05/09/15.
//

#import "AppDelegate.h"
#import "UnityParentViewController.h"


IMPL_APP_CONTROLLER_SUBCLASS(AppDelegate)

@interface AppDelegate () {
    UnityParentViewController* viewController;
}

@end

@implementation AppDelegate

- (void)startUnity:(UIApplication *)application {
    //this is your custom entry point instead of applicationDidFinishLaunchingWithOption
    //we start Unity so that it generates the View Hierachy
    [super startUnity:application];
    //start our own viewcontroller and make it root:
    viewController= [UnityParentViewController new];
    self.window.rootViewController= viewController;
    
    //add the unityViewController to our own so that he shows the view if he wants to
    [viewController setUnityController:super.rootViewController];
    
}


- (void)applicationWillResignActive:(UIApplication *)application {
    [super applicationWillResignActive:application];
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    [super applicationDidEnterBackground:application];
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    [super applicationWillEnterForeground:application];
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    [super applicationDidBecomeActive:application];
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application {
    [super applicationWillTerminate:application];
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
