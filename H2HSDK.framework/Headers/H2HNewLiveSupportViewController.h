//
//  H2HNewLiveSupportViewController.h
//  H2H
//
//  Created by pratima ghadage on 12/08/16.
//  Copyright © 2016 Sagar Kasture. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface H2HNewLiveSupportViewController : UIViewController
typedef enum : NSInteger
{
    LIVE_SUPPORT_CAMERA,
    LIVE_SUPPORT_MICROPHONE,
    LIVE_SUPPORT_CONNECTION,
    LIVE_SUPPORT_LIVEBOARD,
    LIVE_SUPPORT_INVITATION,
    LIVE_SUPPORT_OTHERS
}LiveSupportCellIndex;

@end
