//
//  CropTestViewController.h
//  CropTest
//
//  Created by Nocero Beguhe on 6/16/17.
//  Copyright 2017 ____. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BJImageCropper.h"

@interface CropTestViewController : UIViewController {
    BJImageCropper *imageCropper;
    
    UILabel *boundsText;
}

@property (nonatomic, strong) IBOutlet UILabel *boundsText;
@property (nonatomic, strong) BJImageCropper *imageCropper;

@property (nonatomic, strong) UIImageView *preview;

@end
