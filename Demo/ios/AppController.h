//
//  DemoAppController.h
//  Demo
//
//  Created by Andreas Löw on 11.01.12.
//  Copyright codeandweb.de 2012. All rights reserved.
//

@class RootViewController;

@interface AppController : NSObject <UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate,UIApplicationDelegate> {
    UIWindow *window;
    RootViewController	*viewController;
}

@end

