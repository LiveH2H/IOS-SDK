//
//  H2HNewMoreOptionsViewController.h
//  H2H
//
//  Created by pratima ghadage on 11/08/16.
//  Copyright © 2016 Sagar Kasture. All rights reserved.
//

#import <UIKit/UIKit.h>

#define IS_IPAD if([UIDevice currentDevice].userInterfaceIdiom == UIUserInterfaceIdiomPad)

@interface H2HNewMoreOptionsViewController : UIViewController

typedef enum : NSInteger
{
    LIVE_SUPPORT=0,         //Detail Cell
    LIVE_SUPPORT_LANGUAGE,  //Detail Cell
    SUBMIT_SUPPORT_REQUEST,
    LIVE_TRANSCRIPT,
    ALLOW_CHAT,
    //CHAT_OVERLAY,
    ALLOW_RAISE_HAND,
    AUTO_HIDE_TOOLBAR,
    //PARTICIPANT_SETTINGS,   //Detail Cell
    THEME_COLORS,            //Detail Cell
    SHOW_TIMER,
    DEVICE_SETTINGS        //Detail Cell
}OptionCellIndex;

typedef enum : NSInteger
{
    LIVE_SUPPORT_IPHONE,
    LIVE_SUPPORT_LANGUAGE_IPHONE,  //Detail Cell
    ALLOW_CHAT_IPHONE,
    CHAT_OVERLAY_IPHONE,
    ALLOW_RAISE_HAND_IPHONE,
    THEME_COLORS_IPHONE

}OptionIphoneCellIndex;

@end