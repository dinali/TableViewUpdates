//
//  PublicationViewController.h
//  TVAnimationsGestures
//
//  Created by Dina Li on 2/20/13.
//
//

//#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <MessageUI/MessageUI.h>
#import "SectionHeaderView.h"

@class PublicationCell;

@interface PublicationViewController:UITableViewController<MFMailComposeViewControllerDelegate, SectionHeaderViewDelegate>

@property (nonatomic, strong) NSArray* Categories;
@property (nonatomic, weak) IBOutlet PublicationCell *publicationCell;

@end
