//
//  ViewController.h
//  Fancy_Text_Creator
//
//  Created by Pradip Gareja on 20/08/21.
//  Copyright © 2021 Pradip Gareja. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    CGFloat fontSize;
    BOOL state;
    
}

@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UITextField *textField;
- (IBAction)dismissKeyboard:(id)sender;
- (IBAction)red:(id)sender;
- (IBAction)blue:(id)sender;
- (IBAction)green:(id)sender;
- (IBAction)font1:(id)sender;
- (IBAction)font2:(id)sender;
- (IBAction)font3:(id)sender;
- (IBAction)font4:(id)sender;
- (IBAction)shadow:(id)sender;
- (IBAction)small:(id)sender;
- (IBAction)medium:(id)sender;
- (IBAction)large:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *shadiwButton;

@end

