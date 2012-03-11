//
//  AppDelegate.h
//  LeFuq
//
//  Created by Luis Matute on 3/11/12.
//  Copyright San Services 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
