//
//  AppDelegate.h
//  testApp
//
//  Created by HO-27 on 09/01/14.
//  Copyright (c) 2014 hiddenbrains. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, strong) NSMutableData *receivedData;
@property (nonatomic, strong) NSURLConnection *theConnection;
@property (strong, nonatomic) ViewController *viewController;

@end
