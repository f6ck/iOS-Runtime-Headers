/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDZonePCSData : CKDPCSData {
    CKRecordZoneID *_zoneID;
}

@property (nonatomic, retain) CKRecordZoneID *zoneID;

+ (id)dataWithZoneID:(id)arg1 pcsData:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)decryptPCSDataWithManager:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneID:(id)arg1 pcsData:(id)arg2;
- (id)itemID;
- (void)setZoneID:(id)arg1;
- (id)zoneID;

@end