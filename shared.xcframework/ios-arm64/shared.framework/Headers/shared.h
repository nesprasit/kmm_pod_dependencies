#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedKotlinArray<T>, SharedSocketClient, SharedSocketEvent;

@protocol SharedPlatform, SharedSocketPlatform, SharedSocketListener, SharedSocketChatListener, SharedKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface SharedGreeting : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol SharedPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface SharedIOSPlatform : SharedBase <SharedPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("SocketPlatform")))
@protocol SharedSocketPlatform
@required
- (void)connect __attribute__((swift_name("connect()")));
- (void)disconnect __attribute__((swift_name("disconnect()")));
- (void)emitEvent:(NSString *)event objects:(id)objects __attribute__((swift_name("emit(event:objects:)")));
- (void)emitEvent:(NSString *)event objects_:(SharedKotlinArray<id> *)objects __attribute__((swift_name("emit(event:objects_:)")));
- (void)doInitBaseURL:(NSString *)baseURL nameSpace:(NSString *)nameSpace __attribute__((swift_name("doInit(baseURL:nameSpace:)")));
- (BOOL)isConnected __attribute__((swift_name("isConnected()")));
- (void)offEvent:(NSString *)event __attribute__((swift_name("off(event:)")));
- (void)offConnectErrorEvent __attribute__((swift_name("offConnectErrorEvent()")));
- (void)offConnectEvent __attribute__((swift_name("offConnectEvent()")));
- (void)offDisconnectEvent __attribute__((swift_name("offDisconnectEvent()")));
- (void)onEvent:(NSString *)event callback:(void (^)(id))callback __attribute__((swift_name("on(event:callback:)")));
- (void)onConnectErrorEventCallback:(void (^)(void))callback __attribute__((swift_name("onConnectErrorEvent(callback:)")));
- (void)onConnectEventCallback:(void (^)(void))callback __attribute__((swift_name("onConnectEvent(callback:)")));
- (void)onDisconnectEventCallback:(void (^)(void))callback __attribute__((swift_name("onDisconnectEvent(callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSocketPlatform")))
@interface SharedIOSSocketPlatform : SharedBase <SharedSocketPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)connect __attribute__((swift_name("connect()")));
- (void)disconnect __attribute__((swift_name("disconnect()")));
- (void)emitEvent:(NSString *)event objects:(id)objects __attribute__((swift_name("emit(event:objects:)")));
- (void)emitEvent:(NSString *)event objects_:(SharedKotlinArray<id> *)objects __attribute__((swift_name("emit(event:objects_:)")));
- (void)doInitBaseURL:(NSString *)baseURL nameSpace:(NSString *)nameSpace __attribute__((swift_name("doInit(baseURL:nameSpace:)")));
- (BOOL)isConnected __attribute__((swift_name("isConnected()")));
- (void)offEvent:(NSString *)event __attribute__((swift_name("off(event:)")));
- (void)offConnectErrorEvent __attribute__((swift_name("offConnectErrorEvent()")));
- (void)offConnectEvent __attribute__((swift_name("offConnectEvent()")));
- (void)offDisconnectEvent __attribute__((swift_name("offDisconnectEvent()")));
- (void)onEvent:(NSString *)event callback:(void (^)(id))callback __attribute__((swift_name("on(event:callback:)")));
- (void)onConnectErrorEventCallback:(void (^)(void))callback __attribute__((swift_name("onConnectErrorEvent(callback:)")));
- (void)onConnectEventCallback:(void (^)(void))callback __attribute__((swift_name("onConnectEvent(callback:)")));
- (void)onDisconnectEventCallback:(void (^)(void))callback __attribute__((swift_name("onDisconnectEvent(callback:)")));
@end

__attribute__((swift_name("SocketChatListener")))
@protocol SharedSocketChatListener
@required
- (void)addAgent __attribute__((swift_name("addAgent()")));
- (void)addChat __attribute__((swift_name("addChat()")));
- (void)joinChannelsChannelIds:(NSMutableArray<NSString *> *)channelIds __attribute__((swift_name("joinChannels(channelIds:)")));
- (void)joinChatFollowerId:(NSString *)followerId __attribute__((swift_name("joinChat(followerId:)")));
- (void)joinOACompanyId:(NSString *)companyId __attribute__((swift_name("joinOA(companyId:)")));
- (void)leaveChannelsChannelIds:(NSMutableArray<NSString *> *)channelIds __attribute__((swift_name("leaveChannels(channelIds:)")));
- (void)leaveChat __attribute__((swift_name("leaveChat()")));
- (void)leaveRoom __attribute__((swift_name("leaveRoom()")));
- (void)onFetchChats __attribute__((swift_name("onFetchChats()")));
- (void)onFetchFollowersCallback:(void (^)(void))callback __attribute__((swift_name("onFetchFollowers(callback:)")));
- (void)onFetchFollowersCloseChat __attribute__((swift_name("onFetchFollowersCloseChat()")));
- (void)onFetchLogout __attribute__((swift_name("onFetchLogout()")));
- (void)onFetchStartChat __attribute__((swift_name("onFetchStartChat()")));
- (void)onTriggerExtendChatTime __attribute__((swift_name("onTriggerExtendChatTime()")));
- (void)setAgent __attribute__((swift_name("setAgent()")));
@end

__attribute__((swift_name("SocketListener")))
@protocol SharedSocketListener
@required
- (void)connect __attribute__((swift_name("connect()")));
- (void)disconnect __attribute__((swift_name("disconnect()")));
- (id<SharedSocketListener>)doInit __attribute__((swift_name("doInit()")));
- (BOOL)isConnected __attribute__((swift_name("isConnected()")));
- (void)offConnectErrorEvent __attribute__((swift_name("offConnectErrorEvent()")));
- (void)offConnectEvent __attribute__((swift_name("offConnectEvent()")));
- (void)offDisconnectEvent __attribute__((swift_name("offDisconnectEvent()")));
- (void)onConnectErrorEvent __attribute__((swift_name("onConnectErrorEvent()")));
- (void)onConnectEventCallback:(void (^)(void))callback __attribute__((swift_name("onConnectEvent(callback:)")));
- (void)onDisconnectEvent __attribute__((swift_name("onDisconnectEvent()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketClient")))
@interface SharedSocketClient : SharedBase <SharedSocketListener, SharedSocketChatListener>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addAgent __attribute__((swift_name("addAgent()")));
- (void)addChat __attribute__((swift_name("addChat()")));
- (void)connect __attribute__((swift_name("connect()")));
- (void)disconnect __attribute__((swift_name("disconnect()")));
- (SharedSocketClient *)doInit __attribute__((swift_name("doInit()")));
- (BOOL)isConnected __attribute__((swift_name("isConnected()")));
- (void)joinChannelsChannelIds:(NSMutableArray<NSString *> *)channelIds __attribute__((swift_name("joinChannels(channelIds:)")));
- (void)joinChatFollowerId:(NSString *)followerId __attribute__((swift_name("joinChat(followerId:)")));
- (void)joinOACompanyId:(NSString *)companyId __attribute__((swift_name("joinOA(companyId:)")));
- (void)leaveChannelsChannelIds:(NSMutableArray<NSString *> *)channelIds __attribute__((swift_name("leaveChannels(channelIds:)")));
- (void)leaveChat __attribute__((swift_name("leaveChat()")));
- (void)leaveRoom __attribute__((swift_name("leaveRoom()")));
- (void)offConnectErrorEvent __attribute__((swift_name("offConnectErrorEvent()")));
- (void)offConnectEvent __attribute__((swift_name("offConnectEvent()")));
- (void)offDisconnectEvent __attribute__((swift_name("offDisconnectEvent()")));
- (void)onConnectErrorEvent __attribute__((swift_name("onConnectErrorEvent()")));
- (void)onConnectEventCallback:(void (^)(void))callback __attribute__((swift_name("onConnectEvent(callback:)")));
- (void)onDisconnectEvent __attribute__((swift_name("onDisconnectEvent()")));
- (void)onFetchChats __attribute__((swift_name("onFetchChats()")));
- (void)onFetchFollowersCallback:(void (^)(void))callback __attribute__((swift_name("onFetchFollowers(callback:)")));
- (void)onFetchFollowersCloseChat __attribute__((swift_name("onFetchFollowersCloseChat()")));
- (void)onFetchLogout __attribute__((swift_name("onFetchLogout()")));
- (void)onFetchStartChat __attribute__((swift_name("onFetchStartChat()")));
- (void)onTriggerExtendChatTime __attribute__((swift_name("onTriggerExtendChatTime()")));
- (void)setAgent __attribute__((swift_name("setAgent()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent")))
@interface SharedSocketEvent : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)socketEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSocketEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ADD_AGENT __attribute__((swift_name("ADD_AGENT")));
@property (readonly) NSString *ADD_CHAT __attribute__((swift_name("ADD_CHAT")));
@property (readonly) NSString *FETCH_CHATS __attribute__((swift_name("FETCH_CHATS")));
@property (readonly) NSString *FETCH_FOLLOWERS __attribute__((swift_name("FETCH_FOLLOWERS")));
@property (readonly) NSString *FETCH_FOLLOWER_CLOSE_CHAT __attribute__((swift_name("FETCH_FOLLOWER_CLOSE_CHAT")));
@property (readonly) NSString *FETCH_LOGOUT __attribute__((swift_name("FETCH_LOGOUT")));
@property (readonly) NSString *FETCH_START_CHAT __attribute__((swift_name("FETCH_START_CHAT")));
@property (readonly) NSString *JOIN_CHANNEL __attribute__((swift_name("JOIN_CHANNEL")));
@property (readonly) NSString *JOIN_CHAT __attribute__((swift_name("JOIN_CHAT")));
@property (readonly) NSString *JOIN_OA __attribute__((swift_name("JOIN_OA")));
@property (readonly) NSString *LEAVE_CHANNEL __attribute__((swift_name("LEAVE_CHANNEL")));
@property (readonly) NSString *LEAVE_CHAT __attribute__((swift_name("LEAVE_CHAT")));
@property (readonly) NSString *LEAVE_ROOM __attribute__((swift_name("LEAVE_ROOM")));
@property (readonly) NSString *SET_AGENT __attribute__((swift_name("SET_AGENT")));
@property (readonly) NSString *TRIGGER_EXTEND_CHAT_TIME __attribute__((swift_name("TRIGGER_EXTEND_CHAT_TIME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface SharedPlatformKt : SharedBase
+ (id<SharedPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketPlatformKt")))
@interface SharedSocketPlatformKt : SharedBase
+ (id<SharedSocketPlatform>)getSocketPlatform __attribute__((swift_name("getSocketPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
