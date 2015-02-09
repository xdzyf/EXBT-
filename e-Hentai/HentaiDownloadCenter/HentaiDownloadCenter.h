//
//  HentaiDownloadCenter.h
//  e-Hentai
//
//  Created by 啟倫 陳 on 2014/9/11.
//  Copyright (c) 2014年 ChilunChen. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "HentaiDownloadBookOperation.h"

#define HentaiDownloadSuccessNotification @"HentaiDownloadSuccessNotification"
#define HentaiDownloadFailNotification  @"HentaiDownloadFailNotification"

@interface HentaiDownloadCenter : NSObject

+ (void)addBook:(NSDictionary *)bookInfo;
+ (BOOL)isDownloading:(NSDictionary *)bookInfo;

@end
