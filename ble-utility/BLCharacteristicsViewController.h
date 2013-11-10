//
//  BLCharacteristicsViewController.h
//  ble-utility
//
//  Created by Joost Fu on 11/10/13.
//  Copyright (c) 2013 joost. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RKPeripheral.h"
#import "BLTableViewController.h"
@interface BLCharacteristicsViewController : BLTableViewController
@property (nonatomic,strong) RKPeripheral * peripheral;
@property (nonatomic,strong) CBService * service;
@end