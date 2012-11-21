/*this is my first program */

#import <Foundation/Foundation.h>
@interface Car:NSObject
{
 int year;
 NSString *make;
 NSString *model;
 
}
-  (void) setMake : (NSString *) aMake andModel : (NSString*) aModel
andYear : (int)  ayear;
- (void) printCarInfo;
- (int) year;


@end

hfuf
