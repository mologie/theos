/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UITableView.H>
#import "PSEditingPane.h"

@class PSTextEditingCell, UITextField, UITableView;

@interface PSTextEditingPane : PSEditingPane <UITableViewDelegate, UITableViewDataSource> {
	UITableView *_table;
	PSTextEditingCell *_cell;
	UITextField *_textField;
}
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
@end
