//
//  Category.h
//  TVAnimationsGestures
//  Description: the categories for grouping the publications
//  Created by Dina Li on 2/20/13.
//
//

#import <Foundation/Foundation.h>

@interface Category : NSObject

@property (nonatomic, strong) NSString *name; // of the category
@property (nonatomic, strong) NSArray *title; // associated titles

@end
