//
//  ViewController.h
//  CameraManagement
//
//  Created by LLDM on 29/07/2016.
//  Copyright © 2016 LLDM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate> {
    UIImagePickerController *imagePicker;
    IBOutlet UIImageView *imageView;
}

- (IBAction)showCamera:(id)sender;

@end

