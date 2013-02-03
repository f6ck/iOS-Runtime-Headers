/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImageView, UILabel;

@interface MailToolbarButton : UIButton {
    UIImageView *_iconView;
    BOOL _isMinibar;
    BOOL _isRed;
    UILabel *_titleLabel;
    BOOL _usesAlternateButtonWidth;
}

@property BOOL usesAlternateButtonWidth;

+ (void)_initializeSafeCategory;

- (struct CGPoint { float x1; float x2; })_offsetForMiniBarState:(BOOL)arg1;
- (id)accessibilityLabel;
- (void)dealloc;
- (id)initAsRed:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsesAlternateButtonWidth:(BOOL)arg1;
- (void)sizeToFit;
- (void)updateForMiniBarState:(BOOL)arg1;
- (BOOL)usesAlternateButtonWidth;

@end