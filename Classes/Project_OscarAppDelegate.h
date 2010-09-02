//
//  Project_OscarAppDelegate.h
//  Project-Oscar
//
//  Created by Isa Goksu on 10-08-16.
//  Copyright Isa Goksu 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Three20/Three20.h>

@class HomeScreenViewController;

@interface Project_OscarAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UIWindow *window;
	IBOutlet UITabBarController *tabBarController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) UITabBarController *tabBarController;

@end

