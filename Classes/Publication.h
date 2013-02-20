//
//  Publication.h
//  TVAnimationsGestures
//
//  Created by Dina Li on 2/20/13.
//
//

#import <Foundation/Foundation.h>

@interface Publication : NSObject

@property (nonatomic, strong) NSString *titleName;
@property (nonatomic, strong) NSString *author;
@property (nonatomic, strong) NSString *pubDate;
@property (nonatomic, strong) NSString *shortDescription;
@property (nonatomic, strong) NSString *longDescription;
@property (nonatomic, strong) NSString *pdfURL;
@property (nonatomic, strong) NSString *keywords;

@end
