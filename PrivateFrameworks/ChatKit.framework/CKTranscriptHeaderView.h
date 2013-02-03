/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIPlacardButton;

@interface CKTranscriptHeaderView : UIView {
    UIPlacardButton *_callButton;
    UIPlacardButton *_contactsButton;
    id _delegate;
    BOOL _faceTimeAvailable;
    UIPlacardButton *_faceTimeButton;
    BOOL _hasContact;
    BOOL _isGroupMessage;
    UIPlacardButton *_loadMoreButton;
}

@property <CKTranscriptHeaderDelegate> *delegate;
@property BOOL faceTimeAvailable;
@property BOOL hasContact;
@property(readonly) BOOL isGroupMessage;

+ (float)defaultHeight;

- (void)_buttonClicked:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)faceTimeAvailable;
- (BOOL)hasContact;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 isPhoneTranscript:(BOOL)arg2 displayLoadPrevious:(BOOL)arg3 isGroupMessage:(BOOL)arg4;
- (BOOL)isGroupMessage;
- (void)layoutSubviews;
- (void)setButtonsEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFaceTimeAvailable:(BOOL)arg1;
- (void)setHasContact:(BOOL)arg1;

@end