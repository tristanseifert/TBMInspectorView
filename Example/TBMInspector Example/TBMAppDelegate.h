//
//  TBMAppDelegate.h
//  TBMInspector Example
//
//  Created by Thore Bartholomäus on 18/03/14.
//
//

#import <Cocoa/Cocoa.h>

@class TBMInspectorView;
@interface TBMAppDelegate : NSObject <NSApplicationDelegate>

@property (nonatomic) IBOutlet NSView *view1;
@property (nonatomic) IBOutlet NSView *view2;

@property (nonatomic) IBOutlet TBMInspectorView *inspector;

@property (nonatomic) IBOutlet NSWindow *window;

@end
