//
//  MyImageKit.h
//  OilPaintHD
//
//  Created by forrest on 10-11-15.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface MyImageKit : NSObject {

}

+ (UIImage *)scaleAndRotateImage:(UIImage *)image;

+ (void)saveImage:(UIImage*)image:(NSString*)imageName ;
+ (void)removeImage:(NSString*)fileName ;
+ (UIImage*)loadImage:(NSString*)imageName;

@end
