//
//  LDGlobalSwitchView.m
//  LDNavigationSolution
//
//  Created by Dennis on 19/03/2017.
//  Copyright © 2017 Dennis Lee. All rights reserved.
//

#import "LDGlobalSwitchView.h"
#import "UINavigationController+LDNavigationSolution.h"

@interface LDGlobalSwitchView()
@property (weak, nonatomic) IBOutlet UISwitch *globalSwitch;
@end

@implementation LDGlobalSwitchView
+ (instancetype)globalSwitchView {
    return [[[NSBundle mainBundle] loadNibNamed:NSStringFromClass([self class]) owner:nil options:nil] lastObject];
}

- (IBAction)clickGlobalSwitch:(UISwitch *)sender {
    if (self.delegate && [self.delegate respondsToSelector:@selector(globalSwitchView:didClickSwitch:)]) {
        [self.delegate globalSwitchView:self didClickSwitch:sender];
    }
}

#pragma mark - Publick method
- (void)changeSwitchStatus:(BOOL)status {
    [self.globalSwitch setOn:status animated:YES];
}

@end
