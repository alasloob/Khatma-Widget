//
//  KhatmaWidgetController.m
//  KhatmaWidget
//
//  Created by Youssef Eid on 8/23/1435 AH.
//  Copyright (c) 1435 AH __MyCompanyName__. All rights reserved.
//

#import "KhatmaWidgetController.h"

#define kSetting @"/var/mobile/Library/Preferences/com.arbphone.KhatmaSetting.plist"

static NSString* getSetting(NSString *key, NSString* defualt) {
    
    NSMutableDictionary *plist = [[NSMutableDictionary alloc] initWithContentsOfFile:kSetting];
    NSString *settings = plist == nil ? defualt : ([plist objectForKey:key] == nil ? defualt : [plist objectForKey:key]);
    return settings;
    
}

static void setSetting(NSString *key , NSString *val) {
    NSMutableDictionary *plist = nil;
    if ([[NSFileManager defaultManager] fileExistsAtPath:kSetting]) {
        plist = [[NSMutableDictionary alloc] initWithContentsOfFile:kSetting];
    } else {
        plist = [[NSMutableDictionary alloc] init];
    }
    [plist setObject:val forKey:key];
    [plist writeToFile:kSetting atomically:YES];
    
}


NSBundle *bundle = nil;

@interface KhatmaWidgetController () <UITextFieldDelegate>
{
    UITextField *txtPage;
    UITextField *txtAyah;
}

@end

@implementation KhatmaWidgetController

+ (void)initialize {
	bundle = [[NSBundle bundleForClass:self.class] retain];
}

- (id)init {
    
    [super init];
    
    // Create Top Border
    
    CALayer *topBorder = [CALayer layer];
    topBorder.frame = CGRectMake(0.0f, 0.0f, self.view.frame.size.width, 1.0f);
    topBorder.backgroundColor = [UIColor whiteColor].CGColor;
    [self.view.layer addSublayer:topBorder];
    
    
    UILabel *lbPage = [[UILabel alloc] initWithFrame:CGRectMake(320 - 60, 15, 60, 30)];
    lbPage.text = @"الصفحة";
    lbPage.textColor = [UIColor whiteColor];
    [self.view addSubview:lbPage];
    [lbPage release];
    UILabel *lbAyah = [[UILabel alloc] initWithFrame:CGRectMake(320 - 210, 15, 60, 30)];
    lbAyah.text = @"الآيه";
    lbAyah.textColor = [UIColor whiteColor];
    [self.view addSubview:lbAyah];
    [lbAyah release];
    
    txtPage = [[UITextField alloc] initWithFrame:CGRectMake(175, 15, 80, 30)];
    txtPage.layer.borderWidth = 1;
    txtPage.layer.borderColor = [UIColor whiteColor].CGColor;
    txtPage.layer.cornerRadius = 15.0f;
    txtPage.textColor = [UIColor whiteColor];
    txtPage.text = getSetting(@"Page", @"0");
    txtPage.textAlignment = NSTextAlignmentCenter;
    txtPage.keyboardType = UIKeyboardTypeNumbersAndPunctuation;
    txtPage.returnKeyType = UIReturnKeyDone;
    txtPage.delegate = self;
    txtPage.keyboardAppearance = UIKeyboardAppearanceDark;
    
    [self.view addSubview:txtPage];
    
    
    txtAyah = [[UITextField alloc] initWithFrame:CGRectMake(20, 15, 80, 30)];
    txtAyah.layer.borderWidth = 1;
    txtAyah.layer.borderColor = [UIColor whiteColor].CGColor;
    txtAyah.layer.cornerRadius = 15.0f;
    txtAyah.textColor = [UIColor whiteColor];
    txtAyah.text = getSetting(@"Ayah", @"0");
    txtAyah.textAlignment = NSTextAlignmentCenter;
    txtAyah.keyboardType = UIKeyboardTypeNumbersAndPunctuation;
    txtAyah.returnKeyType = UIReturnKeyDone;
    txtAyah.delegate = self;
    txtAyah.keyboardAppearance = UIKeyboardAppearanceDark;
    
    [self.view addSubview:txtAyah];
    
    return self;
}

- (void)loadView {
	[super loadView];
    
	/*
	 Set up UI here. Called when SpringBoard is launching.
	 Access resources from your bundle via the private method
	 +[UIImage imageNamed:inBundle:], passing in the bundle
	 variable set above.
     */
    
    
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    
    [textField resignFirstResponder];
    setSetting(@"Ayah", txtAyah.text);
    setSetting(@"Page", txtPage.text);
    
    return YES;
}

- (void)dealloc {
    [super dealloc];
    
    [txtPage release];
    [txtAyah release];

    
}

- (CGSize)preferredViewSize {
	// Provide a height by modifying the second parameter.
	return CGSizeMake([super preferredViewSize].width, 55.0f);
}

- (void)hostDidPresent {
	[super hostDidPresent];
	// Notification Center was opened.
    NSLog(@"Youssef Eid Ayah");
    txtPage.text = getSetting(@"Page", @"0");
    txtAyah.text = getSetting(@"Ayah", @"0");
    
}

- (void)hostDidDismiss {
	[super hostDidDismiss];
	// Notification Center was closed.
}

@end
