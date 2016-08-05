//
//  DataViewController.h
//  OpenWeather
//
//  Created by Phanindra Kumar on 05/08/16.
//  Copyright © 2016 Phanindra Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ModelDataObject.h"

@interface DataViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
{
    NSArray *weatherDataArray;

}

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) IBOutlet UITableView *weatherInfoTable;
@property (strong, nonatomic) id dataObject;
@property (strong, nonatomic) ModelDataObject *weatherModelObject;

@end

