//
//  NSDateFormatter+NSDateFormatterRelativeAdditions.h
//  RssReader
//
//  Created by Frank Bos on 5/4/13.
//  Copyright (c) 2013 automaticoo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDateFormatter (RelativeAdditions)

- (NSString *)relativeStringFromDate:(NSDate *)date;

@end
