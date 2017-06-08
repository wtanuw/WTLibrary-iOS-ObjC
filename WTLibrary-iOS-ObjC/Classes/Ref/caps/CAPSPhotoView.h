//
//  CAPSPhotoView.h
//  MTankSoundSamplerSS
//
//  Created by Wat Wongtanuwat on 1/16/15.
//  Copyright (c) 2015 Wat Wongtanuwat. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CAPSPhotoView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    UIView *dimView;
    
    UIScrollView *imageScrollView;
    UIImageView *imageView;
    
    UIView *photoDetailView;
    UIView *photoDetailGestureView;
    UILabel *titleLabel;
    UILabel *subtitleLabel;
    UILabel *dateTitleLabel;
    UIButton *closeBtn;
    UIView *detailBackground;
    UIView *detailLine;
    
    UIImageView *startImageView;
    UIImage *photo;
    
    CGPoint photoOrigin;
    CGPoint photoViewImageOrigin;
    
    CGSize photoSize;
    CGSize photoViewImageSize;
    
    CGFloat startPhotoRadius;
    CGFloat deviceHeight;
    CGFloat deviceWidth;
    
    float maxScale;
    
    BOOL hidden;
    BOOL originalImageViewHidden;
    BOOL isModal;
}

@property float bounceRange;//
@property float doubleTapZoomScale;
@property float maxZoomScale;
@property float minZoomScale;

- (id)initWithFrame:(CGRect)frame dateTitle:(NSString *)dateTitle title:(NSString *)title subtitle:(NSString *)subtitle;

@end