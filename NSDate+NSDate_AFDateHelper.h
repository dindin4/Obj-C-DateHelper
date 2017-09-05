//
//  NSDate+NSDate_AFDateHelper.h
//  AFDateHelper
//
//  Created by Dinesh Vijaykumar on 04/09/2017.
//  Copyright © 2017 Dinesh Vijaykumar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DateFormat.h"

typedef NS_ENUM(NSInteger, TimeZone) {
    kTimeZoneLocal = 0,
    kTimeZoneUTC
};

@interface NSDate (NSDate_AFDateHelper)

@property (nonatomic) TimeZone timezone;

- (instancetype) initFromString: (NSString *) string withFormat: (DateFormat *) format;

- (BOOL)isEqualToDateIgnoringTime:(NSDate *) date;
- (BOOL) isToday;
- (BOOL) isTomorrow;
- (BOOL) isYesterday;
- (BOOL) isSameWeekAsDate: (NSDate *) date;
- (BOOL) isThisWeek;
- (BOOL) isNextWeek;
- (BOOL) isLastWeek;
- (BOOL) isSameYearAsDate :(NSDate *) date;
- (BOOL) isThisYear;
- (BOOL) isNextYear;
- (BOOL) isLastYear;
- (BOOL) isEarlierThanDate: (NSDate *) date;
- (BOOL) isLaterThanDate: (NSDate *) date;
- (BOOL) isInFuture;
- (BOOL) isInPast;

- (NSDate *) dateByAddingDays : (int) days;
- (NSDate *) dateBySubtractingDays: (int) days;
- (NSDate *) dateByAddingHours: (int) hours;
- (NSDate *) dateBySubtractingHours: (int) hours;
- (NSDate *) dateByAddingMinutes: (int) minutes;
- (NSDate *) dateBySubtractingMinutes: (int) minutes;
- (NSDate *) dateByAddingSeconds: (int) seconds;
- (NSDate *) dateBySubtractingSeconds: (int) seconds;

- (NSDate *) dateAtStartOfDay;
- (NSDate *) dateAtEndOfDay;
- (NSDate *) dateAtStartOfWeek;
- (NSDate *) dateAtEndOfWeek;
- (NSDate*) dateAtStartOfMonth;
- (NSDate *) dateAtEndOfMonth;
- (NSDate *) setTimeOfDateWithHour: (int) hour andMinute: (int) minute andSecond: (int) second;
+ (NSDate *) tomorrow;
+ (NSDate *) yesterday;

- (int) secondsAfterDate: (NSDate*) date;
- (int) secondsBeforeDate: (NSDate*) date;
- (int) minutesAfterDate: (NSDate*) date;
- (int) minutesBeforeDate: (NSDate *) date;
- (int) hoursAfterDate : (NSDate *) date;
- (int) hoursBeforeDate : (NSDate *) date;
- (int) daysAfterDate:(NSDate *) date;
- (int) daysBeforeDate: (NSDate *) date;

- (int) nearestHour;
- (int) year;
- (int) month;
- (int) week;
- (int) day;
- (int) hour;
- (int) minute;
- (int) seconds;
- (int) weekday;
- (int) nthWeekday;
- (int) monthDays;
- (int) firstDayOfWeek;
- (int) lastDayOfWeek;

- (BOOL) isWeekday;
- (BOOL) isWeekend;

- (NSString *) toString;
- (NSString *) toStringWithFormat:(DateFormat *)format;
- (NSString *) toStringWithDateStyle: (NSDateFormatterStyle) dateStyle andTimeStyle: (NSDateFormatterStyle) timeStyle andRelativeTime: (BOOL) doesRelativeDateFormatting;
- (NSString *) relativeTimeToString;
- (NSString *) weekdayToString;
- (NSString *) shortWeekdayToString;
- (NSString *) veryShortWeekdayToString;
- (NSString *) monthToString;
- (NSString *) shortMonthToString;
- (NSString *) veryShortMonthToString;

@end
