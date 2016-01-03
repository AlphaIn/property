//
//  Person.h
//  when u do not use property in ur projects,
//  u need to declare ur instance methods and
//  vars like this
// 
//  Created by AlphaIn on 16/1/3.
//  
#import <Foundation/Foundation.h>

@interface Person : NSObject
{
    int _age;
    char _gender;
}
- (void)setAge:(int)age;
- (void)setGender:(char)gender;
- (int)getAge;
- (char)getGender;
- (void)show;
@end
