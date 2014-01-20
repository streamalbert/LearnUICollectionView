//
//  ViewController.h
//  LearnUICollectionView
//
//  Created by X dream on 1/19/14.
//  Copyright (c) 2014 Weichuan Tian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Flickr.h"
#import "FlickrPhoto.h"

@interface ViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property(nonatomic, strong) NSMutableDictionary *searchResults;
@property(nonatomic, strong) NSMutableArray *searches;
@property(nonatomic, strong) Flickr *flickr;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *shareBtn;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UIToolbar *toolBar;

@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;



- (IBAction)shareBtnTapped:(id)sender;

@end
