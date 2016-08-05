//
//  RootViewController.h
//  OpenWeather
//
//  Created by Phanindra Kumar on 05/08/16.
//  Copyright © 2016 Phanindra Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>
{
    NSMutableArray *weatherListObjects;
}

@property(nonatomic,strong)UIActivityIndicatorView *progressView;

@property (strong, nonatomic) UIPageViewController *pageViewController;


@end

