//
//  UIImage_Extras.h
//  FlipBook
//
//  Created by Manton Reece on 5/16/10.
//  Copyright 2010 DigiCel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, FBImageRatioMode) {
    FBImageRatioModeScaleToFill,
    FBImageRatioModeAspectFill,
    FBImageRatioModeAspectFit,
};

@interface UIImage (Extras)

- (UIImage *) roundedWithInset:(float)inInset cornerRadius:(float)inCornerRadius;
- (UIImage *) imageByScalingToSize:(CGSize)inTargetSize;
- (UIImage *) rf_imageByChangingAlpha:(CGFloat)inAlpha;

- (UIImage *)rf_imageByAddingImage:(UIImage*)image atRect:(CGRect)rect;
- (UIImage *)rf_imageByAddingImage:(UIImage*)image atRect:(CGRect)rect angle:(CGFloat)angle;

- (UIImage *)flippedVertically;
- (UIImage *)flippedHorizontally;

+ (UIImage *) rf_imageByResizingImage:(UIImage *)inImage size:(CGSize)size ratioMode:(FBImageRatioMode)ratioMode;
+ (UIImage *) rf_imageByResizingImageAndApplyingPencilEffect:(UIImage *)inImage size:(CGSize)size ratioMode:(FBImageRatioMode)ratioMode threshold:(CGFloat)threshold;

+ (UIImage *) rf_imageByCompositingImages:(NSArray *)inImages backgroundColor:(UIColor *)inColor;

+ (UIImage *) rf_imageWithCGImage:(CGImageRef)inImage allowReturningNil:(BOOL)inReturnNil;
+ (UIImage *) rf_imageWithSize:(CGSize)inSize fillColor:(UIColor *)inColor;

- (void) fb_setAssociatedAlpha:(CGFloat)inAlpha;
- (CGFloat) fb_associatedAlpha;

- (UIImage *)imageByTintColor:(UIColor *)color;

- (instancetype)initFromPixelBytes:(unsigned char *)bytes width:(NSInteger)width height:(NSInteger)height bitDepth:(NSInteger)bitDepth;

@end
