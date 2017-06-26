//
//  WTGoogleDriveManager.h
//  MTankSoundSamplerSS
//
//  Created by iMac on 3/1/17.
//  Copyright © 2017 Wat Wongtanuwat. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GTMOAuth2ViewControllerTouch.h"
#import "GTLRDrive.h"
#import "WTMacro.h"
#import <Google/SignIn.h>
//#import <GoogleSignIn/GoogleSignIn.h>
//#import "GoogleSignIn/GoogleSignIn.h"
//#import "GoogleSignIn/GoogleSignIn.h"


#define WTGoogleDriveManager_VERSION 0x00010000

@interface WTGoogleDriveManager : NSObject<GIDSignInDelegate>

@property (nonatomic, strong) GTLRDriveService *service;
@property (nonatomic, strong) UITextView *output;

@property (nonatomic, strong) NSString *clientID;
@property (nonatomic, strong) NSString *keychainItemName;

@property (nonatomic, copy) void (^beginSessionCompletion)(BOOL linkSuccess);

//@property (nonatomic, strong) DBRestClient *restClient;
@property (nonatomic, strong) NSMutableDictionary *metadataDictionary;

@property (nonatomic, assign) BOOL recursively;
@property (nonatomic, strong) NSMutableArray *exploreQueue;
@property (nonatomic, strong) NSMutableArray *exploreArrayMetadata;

@property (nonatomic, strong) NSString *downloadFolderPath;
@property (nonatomic, assign) BOOL arrayDownloading;
@property (nonatomic, assign) int downloadArrayIndex;
@property (nonatomic, strong) NSMutableArray *downloadArrayMetadata;
@property (nonatomic, strong) NSMutableArray *downloadSuccessArray;
@property (nonatomic, strong) NSMutableArray *downloadFailArray;
@property (nonatomic, copy) void (^downloadProgressBlock)(BOOL finish, id metadata, float totalBytes);
@property (nonatomic, copy) void (^downloadCompleteBlock)(BOOL success, NSArray *fileSuccess, NSArray *fileFail);

@property (nonatomic, copy) void (^uploadProgressBlock)(NSString *file, float progress, NSError *error);
@property (nonatomic, copy) void (^uploadCompleteBlock)(NSString *file, BOOL success, NSError *error);

+ (instancetype)sharedManager;


//- (void)addRevForFile:(DBMetadata*)metadata;
//- (DBMetadata*)metadataForPath:(NSString*)path;
//- (NSString*)revForFilePath:(NSString*)filePath;
//- (NSString*)hashForFolderPath:(NSString*)folderPath;

//core api
// call this function in appdelegate
- (void)authWithClientID:(NSString*)clientID keychainForName:(NSString*)kKeychainItemName withCompletion:(void (^)(BOOL linkSuccess))completion;

- (void)linkFromViewController:(UIViewController*)vct;
- (void)unlink;
- (BOOL)isLogin;

- (BOOL)handleOpenURL:(NSURL *)url;

- (void)searchFolder:(NSString*)folderName completion:(void (^)(GTLRServiceTicket *ticket,
                                                                GTLRDrive_FileList *files,
                                                                NSError *error))completion;

- (void)moveFolderOutOfTrashed:(GTLRDrive_File *)metadataFile completion:(void (^)(GTLRServiceTicket *ticket,
                                                                                   GTLRDrive_File *file,
                                                                                   NSError *error))completion;
- (void)createFolder:(NSString*)folderName completion:(void (^)(GTLRServiceTicket *ticket,
                                                                GTLRDrive_File *file,
                                                                NSError *error))completion;
- (void)listFileFromFolder:(NSString*)folderIdentifier completion:(void (^)(GTLRServiceTicket *ticket,
                                                                      GTLRDrive_FileList *files,
                                                                      NSError *error))completion;

- (void)downloadFileFromMetadatas:(NSArray *)googleMetadatas toFolderPath:(NSString *)localFolderPath;
- (void)downloadFileFromPath:(GTLRDrive_File*)googleFile toFolderPath:(NSString*)localFolderPath;

- (void)searchFile:(NSString*)fileName completion:(void (^)(GTLRServiceTicket *ticket,
                                                            GTLRDrive_FileList *files,
                                                            NSError *error))completion;

- (void)uploadFileFromPath:(NSString*)fromPath toPath:(NSString*)toPath revision:(NSString*)rev;
- (void)uploadCancel;



//funcion api

- (void)uploadFileFromPath:(NSString*)fromPath;
- (void)uploadFileFromPath:(NSString*)fromPath toPath:(NSString*)toPath;
- (void)uploadNewFileFromPath:(NSString*)fromPath toPath:(NSString*)toPath;
- (void)uploadCancel:(NSString*)path;


- (void)listFileFromRootFolder;
- (void)listFileFromFolderPath:(NSString*)path;
- (void)listFileFromFolderPath:(NSString*)path recursive:(BOOL)recursive;

- (void)loadListFileFromRootFolder;
- (void)loadListFileFromFolderPath:(NSString*)path;
- (void)loadListFileFromFolderPath:(NSString*)path recursive:(BOOL)recursive;


- (void)download;
- (void)downloadFileFromPath:(NSString*)path toPath:(NSString*)localPath;
//- (void)downloadFileFromPath:(NSString*)path toFolderPath:(NSString*)localFolderPath;

- (void)downloadFileFromMetadatas:(NSArray*)metadatas toFolderPath:(NSString*)localFolderPath;
- (void)downloadFileFromPaths:(NSArray*)paths toFolderPath:(NSString*)localFolderPath;

- (void)downloadCancel;

@end
