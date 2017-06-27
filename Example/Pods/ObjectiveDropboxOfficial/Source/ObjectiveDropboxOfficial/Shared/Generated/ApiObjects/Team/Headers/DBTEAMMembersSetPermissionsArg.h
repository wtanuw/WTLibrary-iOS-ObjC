///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMAdminTier;
@class DBTEAMMembersSetPermissionsArg;
@class DBTEAMUserSelectorArg;

#pragma mark - API Object

///
/// The `MembersSetPermissionsArg` struct.
///
/// Exactly one of team_member_id, email, or external_id must be provided to
/// identify the user account.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMMembersSetPermissionsArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Identity of user whose role will be set.
@property (nonatomic, readonly) DBTEAMUserSelectorArg * _Nonnull user;

/// The new role of the member.
@property (nonatomic, readonly) DBTEAMAdminTier * _Nonnull dNewRole;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param user Identity of user whose role will be set.
/// @param dNewRole The new role of the member.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUser:(DBTEAMUserSelectorArg * _Nonnull)user dNewRole:(DBTEAMAdminTier * _Nonnull)dNewRole;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MembersSetPermissionsArg` struct.
///
@interface DBTEAMMembersSetPermissionsArgSerializer : NSObject

///
/// Serializes `DBTEAMMembersSetPermissionsArg` instances.
///
/// @param instance An instance of the `DBTEAMMembersSetPermissionsArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMMembersSetPermissionsArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMMembersSetPermissionsArg * _Nonnull)instance;

///
/// Deserializes `DBTEAMMembersSetPermissionsArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMMembersSetPermissionsArg` API object.
///
/// @return An instantiation of the `DBTEAMMembersSetPermissionsArg` object.
///
+ (DBTEAMMembersSetPermissionsArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
