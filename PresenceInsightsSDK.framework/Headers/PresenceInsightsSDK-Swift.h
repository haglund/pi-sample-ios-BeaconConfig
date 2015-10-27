// Generated by Apple Swift version 2.1 (swiftlang-700.1.101.6 clang-700.1.76)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import Foundation;
@import CoreLocation;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

SWIFT_CLASS("_TtC19PresenceInsightsSDK9PIAdapter")
@interface PIAdapter : NSObject

/// Default object initializer.
///
/// \param tenant PI Tenant Code
///
/// \param org PI Org Code
///
/// \param baseURL The base URL of your PI service.
///
/// \param username PI Username
///
/// \param password PI Password
///
/// \returns  An initialized PIAdapter.
- (nonnull instancetype)initWithTenant:(NSString * __nonnull)tenant org:(NSString * __nonnull)org baseURL:(NSString * __nonnull)baseURL username:(NSString * __nonnull)username password:(NSString * __nonnull)password OBJC_DESIGNATED_INITIALIZER;

/// Convenience initializer which sets a default baseURL.
///
/// \param tenant PI Tenant Code
///
/// \param org PI Org Code
///
/// \param username PI Username
///
/// \param password PI Password
///
/// \returns  An initialized PIAdapter.
- (nonnull instancetype)initWithTenant:(NSString * __nonnull)tenant org:(NSString * __nonnull)org username:(NSString * __nonnull)username password:(NSString * __nonnull)password;

/// Public function to enable logging for debug purposes.
- (void)enableLogging;
@end

@class UIImage;
@class NSError;

@interface PIAdapter (SWIFT_EXTENSION(PresenceInsightsSDK))

/// Public function to retrieve a floor's map image.
///
/// \param site PI Site code
///
/// \param floor PI Floor code
///
/// \param callback Returns a UIImage of the map upon task completion.
- (void)getMap:(NSString * __nonnull)site floor:(NSString * __nonnull)floor callback:(void (^ __nonnull)(UIImage * __nonnull, NSError * __null_unspecified))callback;
@end

@class PIZone;

@interface PIAdapter (SWIFT_EXTENSION(PresenceInsightsSDK))

/// Public function to retrieve all zones in a floor.
///
/// \param site PI Site code
///
/// \param floor PI Floor code
///
/// \param callback Returns an array of PIZones upon task completion.
- (void)getAllZones:(NSString * __nonnull)site floor:(NSString * __nonnull)floor callback:(void (^ __nonnull)(NSArray<PIZone *> * __nonnull, NSError * __null_unspecified))callback;
@end


@interface PIAdapter (SWIFT_EXTENSION(PresenceInsightsSDK))

/// Public function to get all sites within the org.
///
/// \param callback Returns a dictionary with site code as the keys and site name as the values.
- (void)getAllSites:(void (^ __nonnull)(NSDictionary<NSString *, NSString *> * __nonnull, NSError * __null_unspecified))callback;
@end

@class NSData;

@interface PIAdapter (SWIFT_EXTENSION(PresenceInsightsSDK))

/// Public function to perform a custom API request not covered elsewhere.
///
/// \param endpoint The URL substring that comes after the base URL. (/pi-config/v1/...)
///
/// \param method The HTTP Method to use. (GET, POST, PUT, etc.)
///
/// \param body Optional value if the method is a PUT or POST and needs to send data.
///
/// \param callback Returns an Dictionary of the response upon completion.
- (void)piRequest:(NSString * __nonnull)endpoint method:(NSString * __nonnull)method body:(NSData * __nullable)body callback:(void (^ __nonnull)(NSDictionary<NSString *, id> * __nonnull, NSError * __null_unspecified))callback;
@end


@interface PIAdapter (SWIFT_EXTENSION(PresenceInsightsSDK))

/// Public function to get all floors in a site.
///
/// \param site PI Site code
///
/// \param callback Returns a dictionary with floor code as the keys and floor name as the values.
- (void)getAllFloors:(NSString * __nonnull)site callback:(void (^ __nonnull)(NSDictionary<NSString *, NSString *> * __nonnull, NSError * __null_unspecified))callback;
@end

@class PIOrg;

@interface PIAdapter (SWIFT_EXTENSION(PresenceInsightsSDK))

/// Public function to retrive the org from PI.
///
/// \param callback Returns the raw dictionary from the Rest API upon task completion.
- (void)getOrg:(void (^ __nonnull)(PIOrg * __nonnull, NSError * __null_unspecified))callback;
@end

@class PIBeacon;

@interface PIAdapter (SWIFT_EXTENSION(PresenceInsightsSDK))

/// Public function to get all beacon proximity UUIDs.
///
/// \param callback Returns a String array of all beacon proximity UUIDs upon task completion.
- (void)getAllBeaconRegions:(void (^ __nonnull)(NSArray<NSString *> * __nonnull, NSError * __null_unspecified))callback;

/// Public function to get all beacons on a specific floor.
///
/// \param site PI Site code
///
/// \param floor PI Floor code
///
/// \param callback Returns an array of PIBeacons upon task completion.
- (void)getAllBeacons:(NSString * __nonnull)site floor:(NSString * __nonnull)floor callback:(void (^ __nonnull)(NSArray<PIBeacon *> * __nonnull, NSError * __null_unspecified))callback;

/// Public function to send a payload of all beacons ranged by the device back to PI.
///
/// \param beaconData Array containing all ranged beacons and the time they were detected.
- (void)sendBeaconPayload:(NSArray<NSDictionary<NSString *, id> *> * __nonnull)beaconData;
@end


@interface PIAdapter (SWIFT_EXTENSION(PresenceInsightsSDK))

/// Public function to print statements in the console when debug is enabled. Also appends the TAG to the message.
///
/// \param message The message to print in the console.
- (void)printDebug:(NSString * __nonnull)message;
@end

@class PIDevice;

@interface PIAdapter (SWIFT_EXTENSION(PresenceInsightsSDK))

/// Public function to register a device in PI. If the device already exists it will be updated.
///
/// \param device PIDevice to be registered.
///
/// \param callback Returns a copy of the registered PIDevice upon task completion.
- (void)registerDevice:(PIDevice * __nonnull)device callback:(void (^ __nonnull)(PIDevice * __nonnull, NSError * __null_unspecified))callback;

/// Public function to unregister a device in PI. Sets device registered property to false and updates the device.
///
/// \param device PIDevice to unregister.
///
/// \param callback Returns a copy of the unregistered PIDevice upon task completion.
- (void)unregisterDevice:(PIDevice * __nonnull)device callback:(void (^ __nonnull)(PIDevice * __nonnull, NSError * __null_unspecified))callback;

/// Public function to update a device in PI. It pulls down the remote version of the device then modifies it for re-upload.
///
/// \param device PIDevice to be updated.
///
/// \param callback Returns a copy of the updated PIDevice upon task completion.
- (void)updateDevice:(PIDevice * __nonnull)device callback:(void (^ __nonnull)(PIDevice * __nonnull, NSError * __null_unspecified))callback;

/// Public function to retrieve a device from PI using the device's code.
///
/// \param code The device's code.
///
/// \param callback Returns the PIDevice upon task completion.
- (void)getDeviceByCode:(NSString * __nonnull)code callback:(void (^ __nonnull)(PIDevice * __nonnull, NSError * __null_unspecified))callback;

/// Public function to retrice a device from PI using the device's descriptor.
///
/// \param descriptor The unhashed device descriptor. (Usually the UUID)
///
/// \param callback Returns the PIDevice upon task completion.
- (void)getDeviceByDescriptor:(NSString * __nonnull)descriptor callback:(void (^ __nonnull)(PIDevice * __nonnull, NSError * __null_unspecified))callback;

/// Public function to retrieve all registered and unregistered devices from PI.
///
/// NOTE: Getting devices currently returns the first 100 devices.
/// A future implementation should probably account for page size and number.
///
/// \param callback Returns an array of PIDevices upon task completion.
- (void)getAllDevices:(void (^ __nonnull)(NSArray<PIDevice *> * __nonnull, NSError * __null_unspecified))callback;

/// Public function to retrieve only registered devices from PI.
///
/// NOTE: Getting devices currently returns the first 100 devices.
/// A future implementation should probably account for page size and number.
///
/// \param callback Returns an array of PIDevices upon task completion.
- (void)getRegisteredDevices:(void (^ __nonnull)(NSArray<PIDevice *> * __nonnull, NSError * __null_unspecified))callback;
@end

@class NSUUID;
@class CLBeacon;

SWIFT_CLASS("_TtC19PresenceInsightsSDK8PIBeacon")
@interface PIBeacon : NSObject
@property (nonatomic, copy) NSString * __null_unspecified name;
@property (nonatomic, copy) NSString * __null_unspecified beaconDescription;
@property (nonatomic, strong) NSUUID * __null_unspecified proximityUUID;
@property (nonatomic, copy) NSString * __null_unspecified major;
@property (nonatomic, copy) NSString * __null_unspecified minor;
@property (nonatomic, copy) NSString * __null_unspecified site;
@property (nonatomic, copy) NSString * __null_unspecified floor;

/// Default object initializer.
///
/// \param name Beacon name
///
/// \param description Beacon description
///
/// \param proximityUUID Universally unique identifier for the beacon
///
/// \param major Unique identifier within the proximity UUID space
///
/// \param minor Unique identifier within the major space
- (nonnull instancetype)initWithName:(NSString * __nonnull)name description:(NSString * __nonnull)description proximityUUID:(NSUUID * __nonnull)proximityUUID major:(NSString * __nonnull)major minor:(NSString * __nonnull)minor OBJC_DESIGNATED_INITIALIZER;

/// Convenience initializer to init an empty Object.
///
/// \returns  An initialized PIBeacon.
- (nonnull instancetype)init;

/// Convenience initializer which sets the beacons name, description, and uses a CLBeacon object to populate the proximityUUID, major, and minor properties.
///
/// \param name Beacon name
///
/// \param description Beacon description
///
/// \param beacon CLBeacon object
///
/// \returns  An initialized PIBeacon.
- (nonnull instancetype)initWithName:(NSString * __nonnull)name description:(NSString * __nonnull)description beacon:(CLBeacon * __nonnull)beacon;

/// Convenience initializer that uses a dictionary to populate the objects properties.
///
/// \param dictionary PIBeacon represented as a dictionary
///
/// \returns  An initialized PIBeacon.
- (nonnull instancetype)initWithDictionary:(NSDictionary<NSString *, id> * __nonnull)dictionary;

/// Helper function that provides the PIBeacon object as a dictionary
///
/// \returns  a dictionary representation of PIBeacon
- (NSDictionary<NSString *, id> * __nonnull)toDictionary;
@end

@class CLBeaconRegion;

SWIFT_CLASS("_TtC19PresenceInsightsSDK14PIBeaconSensor")
@interface PIBeaconSensor : NSObject
- (nonnull instancetype)initWithAdapter:(PIAdapter * __nonnull)adapter OBJC_DESIGNATED_INITIALIZER;

/// Public function to start sensing and ranging beacons.
///
/// \param callback Returns result of starting the sensor as a boolean.
- (void)start:(void (^ __nonnull)(NSError * __null_unspecified))callback;

/// Convenience function to start sensing and ranging beacons.
///
/// \param callback Returns result of starting the sensor as a boolean.
- (void)start;

/// Public function to stop beacon sensing and ranging.
- (void)stop;

/// Public function to start sensing and ranging beacons in a specific region.
///
/// \param region The region to look for.
- (void)startForRegion:(CLBeaconRegion * __nonnull)region;

/// Public function to set the frequency to report to PI.
///
/// \param interval The time interval between sending a beacon payload to PI. (milliseconds)
- (void)setReportInterval:(NSTimeInterval)interval;
@end

@class CLLocationManager;
@class CLRegion;

@interface PIBeaconSensor (SWIFT_EXTENSION(PresenceInsightsSDK)) <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * __nonnull)manager didEnterRegion:(CLRegion * __nonnull)region;
- (void)locationManager:(CLLocationManager * __nonnull)manager didExitRegion:(CLRegion * __nonnull)region;
- (void)locationManager:(CLLocationManager * __nonnull)manager didRangeBeacons:(NSArray<CLBeacon *> * __nonnull)beacons inRegion:(CLBeaconRegion * __nonnull)region;
- (void)locationManager:(CLLocationManager * __nonnull)manager didStartMonitoringForRegion:(CLRegion * __nonnull)region;
- (void)locationManager:(CLLocationManager * __nonnull)manager monitoringDidFailForRegion:(CLRegion * __nullable)region withError:(NSError * __nonnull)error;
- (void)locationManager:(CLLocationManager * __nonnull)manager rangingBeaconsDidFailForRegion:(CLBeaconRegion * __nonnull)region withError:(NSError * __nonnull)error;
- (void)locationManager:(CLLocationManager * __nonnull)manager didFailWithError:(NSError * __nonnull)error;
@end


SWIFT_CLASS("_TtC19PresenceInsightsSDK8PIDevice")
@interface PIDevice : NSObject
@property (nonatomic, copy) NSString * __null_unspecified descriptor;
@property (nonatomic) BOOL registered;
@property (nonatomic, copy) NSString * __nullable code;
@property (nonatomic, copy) NSString * __nullable name;
@property (nonatomic, copy) NSString * __nullable type;
@property (nonatomic, copy) NSDictionary<NSString *, id> * __nullable data;
@property (nonatomic, copy) NSDictionary<NSString *, id> * __nullable unencryptedData;

/// Default object initializer.
///
/// \param name Device name
///
/// \param type Device registration type
///
/// \param data Data about device (encrypted)
///
/// \param unencryptedData Data about device (unencrytped)
///
/// \param registered Device registered with PI
- (nonnull instancetype)initWithName:(NSString * __nullable)name type:(NSString * __nullable)type data:(NSDictionary<NSString *, NSString *> * __nullable)data unencryptedData:(NSDictionary<NSString *, NSString *> * __nullable)unencryptedData registered:(BOOL)registered blacklist:(BOOL)blacklist OBJC_DESIGNATED_INITIALIZER;

/// Convenience initializer to init an empty Object.
///
/// \returns  An initialized PIDevice.
- (nonnull instancetype)init;

/// Convenience initializer which sets the device name, and sets defaults for the remaining properties.
///
/// \param name Device name
///
/// \returns  An initialized PIDevice.
- (nonnull instancetype)initWithName:(NSString * __nonnull)name;

/// Convenience initializer that uses a dictionary to populate the objects properties.
///
/// \param dictionary PIDevice represented as a dictionary
///
/// \returns  An initialized PIDevice.
- (nonnull instancetype)initWithDictionary:(NSDictionary<NSString *, id> * __nonnull)dictionary;

/// Adds key/value pair to the data dictionary.
///
/// \param object Object to be stored
///
/// \param key Key to use to store object
- (void)addToDataObject:(id __nonnull)object key:(NSString * __nonnull)key;

/// Adds key/value pair to the unencryptedData dictionary.
///
/// \param object Object to be stored
///
/// \param key Key to use to store object
- (void)addToUnencryptedDataObject:(id __nonnull)object key:(NSString * __nonnull)key;

/// Helper function that provides the PIDevice object as a dictionary
///
/// \returns  dictionary representation of PIDevice
- (NSDictionary<NSString *, id> * __nonnull)toDictionary;
@end


SWIFT_CLASS("_TtC19PresenceInsightsSDK5PIOrg")
@interface PIOrg : NSObject
@property (nonatomic, copy) NSString * __null_unspecified name;
@property (nonatomic, copy) NSString * __null_unspecified piDescription;
@property (nonatomic, copy) NSArray<NSString *> * __null_unspecified registrationTypes;
@property (nonatomic, copy) NSString * __null_unspecified publicKey;

/// Default object initializer.
///
/// \param name Org name
///
/// \param description Org description
///
/// \param registrationTypes List of the organizations registration types
///
/// \param publicKey public key used by the organization
- (nonnull instancetype)initWithName:(NSString * __nonnull)name description:(NSString * __nonnull)description registrationTypes:(NSArray<NSString *> * __nonnull)registrationTypes publicKey:(NSString * __nonnull)publicKey OBJC_DESIGNATED_INITIALIZER;

/// Convenience initializer to init an empty Object.
///
/// \returns  An initialized PIOrg.
- (nonnull instancetype)init;

/// Convenience initializer that uses a dictionary to populate the objects properties.
///
/// \param dictionary PIOrg represented as a dictionary
///
/// \returns  An initialized PIOrg.
- (nonnull instancetype)initWithDictionary:(NSDictionary<NSString *, id> * __nonnull)dictionary;

/// Helper function that provides the PIOrg object as a dictionary
///
/// \returns  a dictionary representation of PIOrg
- (NSDictionary<NSString *, id> * __nonnull)toDictionary;
@end


SWIFT_CLASS("_TtC19PresenceInsightsSDK6PIZone")
@interface PIZone : NSObject
@property (nonatomic, copy) NSString * __null_unspecified name;
@property (nonatomic, copy) NSArray<NSString *> * __null_unspecified tags;

/// Default object initializer.
///
/// \param name Zone name
///
/// \param x x coordinate of zone
///
/// \param y y coordinate of zone
///
/// \param width width of the zone
///
/// \param height height of the zone
///
/// \param tags useful identifying keywords for the zone
- (nonnull instancetype)initWithName:(NSString * __nonnull)name x:(CGFloat)x y:(CGFloat)y width:(CGFloat)width height:(CGFloat)height tags:(NSArray<NSString *> * __nonnull)tags OBJC_DESIGNATED_INITIALIZER;

/// Convenience initializer to init an empty Object.
///
/// \returns  An initialized PIOrg.
- (nonnull instancetype)init;

/// Convenience initializer which sets the zone name, and sets defaults for the remaining properties.
///
/// \param name Zone name
///
/// \returns  An initialized PIZone.
- (nonnull instancetype)initWithName:(NSString * __nonnull)name;

/// Convenience initializer that uses a dictionary to populate the objects properties.
///
/// \param dictionary PIZone represented as a dictionary
///
/// \returns  An initialized PIZone.
- (nonnull instancetype)initWithDictionary:(NSDictionary<NSString *, id> * __nonnull)dictionary;

/// Helper function that provides the PIZone object as a dictionary
///
/// \returns  dictionary representation of PIZone
- (NSDictionary<NSString *, id> * __nonnull)toDictionary;
@end

#pragma clang diagnostic pop
