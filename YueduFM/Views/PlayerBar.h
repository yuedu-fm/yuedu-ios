//
//  PlayerBar.h
//  YueduFM
//
//  Created by StarNet on 9/20/15.
//  Copyright (c) 2015 StarNet. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerBar : UIView

@property (nonatomic, retain) IBOutlet UIImageView* imageView;

@property (nonatomic, retain) IBOutlet UILabel* titleLabel;
@property (nonatomic, retain) IBOutlet UILabel* authorLabel;
@property (nonatomic, retain) IBOutlet UILabel* speakerLabel;
@property (nonatomic, retain) IBOutlet UILabel* durationLabel;

@property (nonatomic, retain) IBOutlet UIButton* playButton;

@property (nonatomic, retain) IBOutlet UIButton* actionButton;

@property (nonatomic, assign) BOOL playing;

@end