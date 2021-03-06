/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier, UIViewController;

@interface PSEditingPane : NSObject {
	PSSpecifier *_specifier;
	id _delegate;
	unsigned _requiresKeyboard : 1;
@private
	UIViewController *_viewController;
}
@property(assign, nonatomic) UIViewController *viewController;
@property(retain) id preferenceValue;
@property(retain) id preferenceSpecifier;
+ (float)preferredHeight;
+ (id)defaultBackgroundColor;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (id)scrollViewToBeInsetted;
- (id)childViewControllerForHostingViewController;
- (void)layoutInsetContent:(CGRect)content;
- (void)insetContent;
- (BOOL)shouldInsetContent;
- (BOOL)changed;
- (BOOL)handlesDoneButton;
- (void)doneEditing;
- (void)editMode;
- (void)addNewValue;
- (void)viewDidBecomeVisible;
- (BOOL)wantsNewButton;
- (id)specifierLabel;
- (BOOL)requiresKeyboard;
- (void)setDelegate:(id)delegate;
- (void)dealloc;
- (CGRect)contentRect;
- (id)initWithFrame:(CGRect)frame;
@end

