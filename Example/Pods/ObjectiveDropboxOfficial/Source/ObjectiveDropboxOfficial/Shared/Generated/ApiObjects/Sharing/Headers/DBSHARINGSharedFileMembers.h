///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGGroupMembershipInfo;
@class DBSHARINGInviteeMembershipInfo;
@class DBSHARINGSharedFileMembers;
@class DBSHARINGUserMembershipInfo;

#pragma mark - API Object

///
/// The `SharedFileMembers` struct.
///
/// Shared file user, group, and invitee membership. Used for the results of
/// `listFileMembers` and `listFileMembersContinue`, and used as part of the
/// results for `listFileMembersBatch`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGSharedFileMembers : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The list of user members of the shared file.
@property (nonatomic, readonly) NSArray<DBSHARINGUserMembershipInfo *> * _Nonnull users;

/// The list of group members of the shared file.
@property (nonatomic, readonly) NSArray<DBSHARINGGroupMembershipInfo *> * _Nonnull groups;

/// The list of invited members of a file, but have not logged in and claimed
/// this.
@property (nonatomic, readonly) NSArray<DBSHARINGInviteeMembershipInfo *> * _Nonnull invitees;

/// Present if there are additional shared file members that have not been
/// returned yet. Pass the cursor into `listFileMembersContinue` to list
/// additional members.
@property (nonatomic, readonly, copy) NSString * _Nullable cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param users The list of user members of the shared file.
/// @param groups The list of group members of the shared file.
/// @param invitees The list of invited members of a file, but have not logged
/// in and claimed this.
/// @param cursor Present if there are additional shared file members that have
/// not been returned yet. Pass the cursor into `listFileMembersContinue` to
/// list additional members.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUsers:(NSArray<DBSHARINGUserMembershipInfo *> * _Nonnull)users
                               groups:(NSArray<DBSHARINGGroupMembershipInfo *> * _Nonnull)groups
                             invitees:(NSArray<DBSHARINGInviteeMembershipInfo *> * _Nonnull)invitees
                               cursor:(NSString * _Nullable)cursor;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param users The list of user members of the shared file.
/// @param groups The list of group members of the shared file.
/// @param invitees The list of invited members of a file, but have not logged
/// in and claimed this.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUsers:(NSArray<DBSHARINGUserMembershipInfo *> * _Nonnull)users
                               groups:(NSArray<DBSHARINGGroupMembershipInfo *> * _Nonnull)groups
                             invitees:(NSArray<DBSHARINGInviteeMembershipInfo *> * _Nonnull)invitees;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedFileMembers` struct.
///
@interface DBSHARINGSharedFileMembersSerializer : NSObject

///
/// Serializes `DBSHARINGSharedFileMembers` instances.
///
/// @param instance An instance of the `DBSHARINGSharedFileMembers` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGSharedFileMembers` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGSharedFileMembers * _Nonnull)instance;

///
/// Deserializes `DBSHARINGSharedFileMembers` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGSharedFileMembers` API object.
///
/// @return An instantiation of the `DBSHARINGSharedFileMembers` object.
///
+ (DBSHARINGSharedFileMembers * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
