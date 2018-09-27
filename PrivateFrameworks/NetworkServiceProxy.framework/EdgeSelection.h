/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface EdgeSelection : NSObject <NSSecureCoding> {
    double  _alpha;
    NSMutableDictionary * _edgeAttributesDict;
    NSNumber * _interfaceType;
    NSData * _networkSignature;
    long long  _trialCount;
    long long  _windowSize;
}

@property (nonatomic) double alpha;
@property (nonatomic, retain) NSMutableDictionary *edgeAttributesDict;
@property (nonatomic, retain) NSNumber *interfaceType;
@property (nonatomic, retain) NSData *networkSignature;
@property (nonatomic) long long trialCount;
@property (nonatomic) long long windowSize;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_stochasticRewardFromRTT:(double)arg1;
- (double)alpha;
- (id)description;
- (id)edgeAttributesDict;
- (void)encodeWithCoder:(id)arg1;
- (void)getAttributesForEdge:(id)arg1 reply:(id /* block */)arg2;
- (void)getMinimumLatencyEdge:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNetworkSignature:(id)arg1 interfaceType:(id)arg2 modelParams:(id)arg3;
- (id)interfaceType;
- (id)networkSignature;
- (void)setAlpha:(double)arg1;
- (void)setEdgeAttributesDict:(id)arg1;
- (void)setInterfaceType:(id)arg1;
- (void)setNetworkSignature:(id)arg1;
- (void)setTrialCount:(long long)arg1;
- (void)setWindowSize:(long long)arg1;
- (void)trainEdgeSelectionModel:(id)arg1 reply:(id /* block */)arg2;
- (long long)trialCount;
- (long long)windowSize;

@end