//
//  ModelController.h
//  OpenWeather
//
//  Created by Phanindra Kumar on 05/08/16.
//  Copyright © 2016 Phanindra Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>
{
     NSMutableArray *duplicateDatesArray ;
    NSMutableArray *weatherInfoArray;
}

@property (strong, nonatomic) NSArray *pageData;



-(void) createArrayForDataSource:(NSMutableArray *)dataArray;

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

