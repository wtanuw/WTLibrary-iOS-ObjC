///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMCOMMONGroupType;

#pragma mark - API Object

///
/// The `GroupType` union.
///
/// The group type determines how a group is created and managed.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMCOMMONGroupType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMCOMMONGroupTypeTag` enum type represents the possible tag states
/// with which the `DBTEAMCOMMONGroupType` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMCOMMONGroupTypeTag) {
  /// A group to which team members are automatically added. Applicable to
  /// team folders https://www.dropbox.com/help/986 only.
  DBTEAMCOMMONGroupTypeTeam,

  /// A group is created and managed by a user.
  DBTEAMCOMMONGroupTypeUserManaged,

  /// (no description).
  DBTEAMCOMMONGroupTypeOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMCOMMONGroupTypeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "team".
///
/// Description of the "team" tag state: A group to which team members are
/// automatically added. Applicable to team folders
/// https://www.dropbox.com/help/986 only.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTeam;

///
/// Initializes union class with tag state of "user_managed".
///
/// Description of the "user_managed" tag state: A group is created and managed
/// by a user.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUserManaged;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

- (nonnull instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "team".
///
/// @return Whether the union's current tag state has value "team".
///
- (BOOL)isTeam;

///
/// Retrieves whether the union's current tag state has value "user_managed".
///
/// @return Whether the union's current tag state has value "user_managed".
///
- (BOOL)isUserManaged;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMCOMMONGroupType` union.
///
@interface DBTEAMCOMMONGroupTypeSerializer : NSObject

///
/// Serializes `DBTEAMCOMMONGroupType` instances.
///
/// @param instance An instance of the `DBTEAMCOMMONGroupType` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMCOMMONGroupType` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMCOMMONGroupType * _Nonnull)instance;

///
/// Deserializes `DBTEAMCOMMONGroupType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMCOMMONGroupType` API object.
///
/// @return An instantiation of the `DBTEAMCOMMONGroupType` object.
///
+ (DBTEAMCOMMONGroupType * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
