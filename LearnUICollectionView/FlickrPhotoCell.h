//
//  FlickrPhotoCell.h
//  LearnUICollectionView
//
//  Created by X dream on 1/19/14.
//  Copyright (c) 2014 Weichuan Tian. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FlickrPhoto;

@interface FlickrPhotoCell : UICollectionViewCell

@property (nonatomic, strong) FlickrPhoto *photo;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;


@end
