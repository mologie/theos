
#import <Foundation/Foundation.h>

@class SBLSApplicationWorkspaceObserver, SBApplicationRestrictionController, NSMutableDictionary, NSOperationQueue, NSMutableSet, BKSApplicationStateMonitor, NSCountedSet, NSLock, NSDictionary, SBApplication;

@interface SBApplicationController : NSObject
@property(readonly, retain) SBApplication *applicationCurrentlyRecordingAudio;
@property(readonly, assign) int locationStatusBarIconType;
@property(readonly, retain) SBApplicationRestrictionController *restrictionController;
+ (SBApplicationController *)sharedInstanceIfExists;
+ (SBApplicationController *)sharedInstance;
- (void)applicationsUninstalled:(id)uninstalled;
- (void)applicationsInstalled:(id)installed;
- (BOOL)updateAppIconVisibilityOverridesShowing:(id *)showing hiding:(id *)hiding;
- (int)appVisibilityOverrideForBundleIdentifier:(id)bundleIdentifier;
- (void)loadApplicationsWithBundle:(id)bundle bundlePath:(id)path isSystemApplication:(BOOL)application defaultTags:(id)tags signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated seatbeltEnvironmentVariables:(id)variables entitlements:(id)entitlements;
- (Class)applicationClassForInfoDictionary:(id)infoDictionary;
- (void)loadWebclipAndIcon:(id)icon;
- (void)loadApplicationsAndIcons:(id)icons reveal:(BOOL)reveal popIn:(BOOL)anIn;
- (void)waitForOperationsToComplete;
- (void)uninstallApplication:(SBApplication *)application;
- (void)removeApplicationsFromModelWithBundleIdentifier:(NSString *)bundleIdentifier;
- (BOOL)loadApplication:(SBApplication *)application;
- (id)loadApplications;
- (NSArray *)newsstandApps;
- (NSArray *)webApplications;
- (SBApplication *)clockApplication;
- (SBApplication *)faceTimeApp;
- (SBApplication *)mobilePhone;
- (SBApplication *)setupApplication;
- (id)dataActivation;
- (SBApplication *)iPod;
- (SBApplication *)applicationWithPid:(NSInteger)pid;
- (SBApplication *)applicationWithDisplayIdentifier:(NSString *)displayIdentifier;
- (NSArray *)applicationsWithPid:(NSInteger)pid;
- (NSArray *)applicationsWithBundleIdentifier:(NSString *)bundleIdentifier;
- (NSArray *)allApplications;
- (NSArray *)allDisplayIdentifiers;
- (void)autoLaunchAppsIfNecessaryAfterBoot;
- (void)buildLocationState;
@end
