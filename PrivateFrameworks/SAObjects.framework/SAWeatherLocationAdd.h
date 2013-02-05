/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, SAWeatherLocation;

@interface SAWeatherLocationAdd : SABaseClientBoundCommand {
}

@property(copy) NSURL * targetAppId;
@property(retain) SAWeatherLocation * weatherLocation;

+ (id)locationAdd;
+ (id)locationAddWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (void)setWeatherLocation:(id)arg1;
- (id)targetAppId;
- (id)weatherLocation;

@end