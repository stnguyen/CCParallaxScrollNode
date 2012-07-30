//
//  CCParallaxScrollNodeAppController.h
//  CCParallaxScrollNode
//
//  Created by Stefan Nguyen on 7/30/12.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//

@class RootViewController;

@interface AppController : NSObject <UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate,UIApplicationDelegate> {
    UIWindow *window;
    RootViewController    *viewController;
}

@end

