//
//  ViewController.h
//  ProjectForGithub
//
//  Created by student on 9/25/17.
//  Copyright © 2017 Rakesh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *registerEmail;
@property (weak, nonatomic) IBOutlet UITextField *registerPassword;
- (IBAction)loginButton:(id)sender;


@end

