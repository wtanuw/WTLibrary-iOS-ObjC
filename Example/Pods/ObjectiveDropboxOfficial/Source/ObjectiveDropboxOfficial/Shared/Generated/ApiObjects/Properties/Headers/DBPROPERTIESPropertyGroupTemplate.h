///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPROPERTIESPropertyFieldTemplate;
@class DBPROPERTIESPropertyGroupTemplate;

#pragma mark - API Object

///
/// The `PropertyGroupTemplate` struct.
///
/// Describes property templates that can be filled and associated with a file.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPROPERTIESPropertyGroupTemplate : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// A display name for the property template. Property template names can be up
/// to 256 bytes.
@property (nonatomic, readonly, copy) NSString * _Nonnull name;

/// Description for new property template. Property template descriptions can be
/// up to 1024 bytes.
@property (nonatomic, readonly, copy) NSString * _Nonnull description_;

/// This is a list of custom properties associated with a property template.
/// There can be up to 64 properties in a single property template.
@property (nonatomic, readonly) NSArray<DBPROPERTIESPropertyFieldTemplate *> * _Nonnull fields;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param name A display name for the property template. Property template
/// names can be up to 256 bytes.
/// @param description_ Description for new property template. Property template
/// descriptions can be up to 1024 bytes.
/// @param fields This is a list of custom properties associated with a property
/// template. There can be up to 64 properties in a single property template.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name
                        description_:(NSString * _Nonnull)description_
                              fields:(NSArray<DBPROPERTIESPropertyFieldTemplate *> * _Nonnull)fields;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PropertyGroupTemplate` struct.
///
@interface DBPROPERTIESPropertyGroupTemplateSerializer : NSObject

///
/// Serializes `DBPROPERTIESPropertyGroupTemplate` instances.
///
/// @param instance An instance of the `DBPROPERTIESPropertyGroupTemplate` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPROPERTIESPropertyGroupTemplate` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBPROPERTIESPropertyGroupTemplate * _Nonnull)instance;

///
/// Deserializes `DBPROPERTIESPropertyGroupTemplate` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPROPERTIESPropertyGroupTemplate` API object.
///
/// @return An instantiation of the `DBPROPERTIESPropertyGroupTemplate` object.
///
+ (DBPROPERTIESPropertyGroupTemplate * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
