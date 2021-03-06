/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, NSArray, NSMutableDictionary, NSDictionary;

@interface PSSpecifier : NSObject {
	id target;
	SEL getter;
	SEL setter;
	SEL action;
	SEL cancel;
	Class detailControllerClass;
	int cellType;
	Class editPaneClass;
	int keyboardType;
	int autoCapsType;
	int autoCorrectionType;
	unsigned textFieldType;
	NSString *_name;
	NSArray *_values;
	NSDictionary *_titleDict;
	NSDictionary *_shortTitleDict;
	id _userInfo;
	NSMutableDictionary *_properties;
@private
	SEL _confirmationAction;
	SEL _confirmationCancelAction;
	SEL _buttonAction;
	SEL _controllerLoadAction;
	BOOL _showContentString;
}
@property(assign, nonatomic) BOOL showContentString;
@property(assign, nonatomic) SEL controllerLoadAction;
@property(assign, nonatomic) SEL buttonAction;
@property(assign, nonatomic) SEL confirmationCancelAction;
@property(assign, nonatomic) SEL confirmationAction;
@property(assign, nonatomic) Class editPaneClass;
@property(assign, nonatomic) int cellType;
@property(assign, nonatomic) Class detailControllerClass;
@property(assign, nonatomic) id target;
@property(retain, nonatomic) NSString *identifier;
@property(retain, nonatomic) NSDictionary *shortTitleDictionary;
@property(retain, nonatomic) NSDictionary *titleDictionary;
@property(retain, nonatomic) id userInfo;
@property(retain, nonatomic) NSString *name;
@property(retain, nonatomic) NSArray *values;
@property(retain) NSMutableDictionary *properties;
+ (int)keyboardTypeForString:(id)string;
+ (int)autoCapsTypeForString:(id)string;
+ (int)autoCorrectionTypeForNumber:(id)number;
+ (id)emptyGroupSpecifier;
+ (id)groupSpecifierWithName:(id)name;
+ (id)preferenceSpecifierNamed:(id)named target:(id)target set:(SEL)set get:(SEL)get detail:(Class)detail cell:(int)cell edit:(Class)edit;
+ (id)deleteButtonSpecifierWithName:(id)name target:(id)target action:(SEL)action;
- (int)titleCompare:(id)compare;
- (void)setKeyboardType:(int)type autoCaps:(int)caps autoCorrection:(int)correction;
- (id)description;
- (void)dealloc;
- (void)setupIconImageWithPath:(id)path;
- (void)setupIconImageWithBundle:(id)bundle;
- (void)setValues:(id)values titles:(id)titles shortTitles:(id)titles3 usingLocalizedTitleSorting:(BOOL)sorting;
- (void)setValues:(id)values titles:(id)titles shortTitles:(id)titles3;
- (void)setValues:(id)values titles:(id)titles;
- (void)loadValuesAndTitlesFromDataSource;
- (void)removePropertyForKey:(id)key;
- (void)setProperty:(id)property forKey:(id)key;
- (id)propertyForKey:(id)key;
- (id)init;
@end

