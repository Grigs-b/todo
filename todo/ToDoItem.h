//
//  ToDoItem.h
//  alienred
//
//  Created by Ryan Grigsby on 4/1/15.
//  Copyright (c) 2015 Ryan Grigsby. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *name;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

- (void)setCompleted:(BOOL)completed;

@end
