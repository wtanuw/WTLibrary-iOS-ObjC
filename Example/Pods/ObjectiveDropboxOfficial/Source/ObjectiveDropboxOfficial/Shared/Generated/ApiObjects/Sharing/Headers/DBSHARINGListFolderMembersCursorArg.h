///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGListFolderMembersCursorArg;
@class DBSHARINGMemberAction;

#pragma mark - API Object

///
/// The `ListFolderMembersCursorArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGListFolderMembersCursorArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// This is a list indicating whether each returned member will include a
/// boolean value `allow` in `DBSHARINGMemberPermission` that describes whether
/// the current user can perform the MemberAction on the member.
@property (nonatomic, readonly) NSArray<DBSHARINGMemberAction *> * _Nullable actions;

/// The maximum number of results that include members, groups and invitees to
/// return per request.
@property (nonatomic, readonly) NSNumber * _Nonnull limit;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param actions This is a list indicating whether each returned member will
/// include a boolean value `allow` in `DBSHARINGMemberPermission` that
/// describes whether the current user can perform the MemberAction on the
/// member.
/// @param limit The maximum number of results that include members, groups and
/// invitees to return per request.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithActions:(NSArray<DBSHARINGMemberAction *> * _Nullable)actions
                                  limit:(NSNumber * _Nullable)limit;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (nonnull instancetype)initDefault;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListFolderMembersCursorArg` struct.
///
@interface DBSHARINGListFolderMembersCursorArgSerializer : NSObject

///
/// Serializes `DBSHARINGListFolderMembersCursorArg` instances.
///
/// @param instance An instance of the `DBSHARINGListFolderMembersCursorArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGListFolderMembersCursorArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGListFolderMembersCursorArg * _Nonnull)instance;

///
/// Deserializes `DBSHARINGListFolderMembersCursorArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGListFolderMembersCursorArg` API object.
///
/// @return An instantiation of the `DBSHARINGListFolderMembersCursorArg`
/// object.
///
+ (DBSHARINGListFolderMembersCursorArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
