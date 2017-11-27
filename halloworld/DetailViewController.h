//
//  DetailViewController.h
//  halloworld
//
//  Created by william on 15-2-25.
//  Copyright (c) 2015年 william. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

