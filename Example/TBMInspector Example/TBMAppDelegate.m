//
//  TBMAppDelegate.m
//  TBMInspector Example
//
//  Created by Thore Bartholomäus on 18/03/14.
//
//

#import "TBMAppDelegate.h"

#import "TBMInspectorView.h"

@implementation TBMAppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    [self.inspector addView:self.view1 label:@"View 1" expanded:YES];
    [self.inspector addView:self.view2 label:@"View 2" expanded:YES];
}

@end
