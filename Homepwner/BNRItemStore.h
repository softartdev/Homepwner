//
//  BNRItemStore.h
//  Homepwner
//
//  Created by Артур on 21.03.2018.
//  Copyright © 2018 DataKrat. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BNRItem;

@interface BNRItemStore : NSObject

@property (nonatomic, readonly) NSArray *allItems;

+ (instancetype)sharedStore;
- (BNRItem *)createItem;

@end
