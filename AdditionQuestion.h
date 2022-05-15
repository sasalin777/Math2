//
//  AdditionQuestion.h
//  Maths
//
//  Created by Li Tzu Lin on 2022-05-11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdditionQuestion : NSObject
@property(nonatomic,readwrite) NSString *question;
@property(nonatomic,readwrite) NSInteger answer;
@property(nonatomic,readwrite) NSDate *startTime;
@property(nonatomic,readwrite) NSDate *endTime;

@end

NS_ASSUME_NONNULL_END
