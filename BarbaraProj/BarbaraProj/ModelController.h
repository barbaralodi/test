//
//  ModelController.h
//  BarbaraProj
//
//  Created by Barbara Lodi on 04/03/13.
//  Copyright (c) 2013 itsadmin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
