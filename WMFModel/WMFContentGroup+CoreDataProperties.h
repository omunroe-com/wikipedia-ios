#import "WMFContentGroup+CoreDataClass.h"
@import CoreLocation;

NS_ASSUME_NONNULL_BEGIN

@interface WMFContentGroup (CoreDataProperties)

+ (NSFetchRequest<WMFContentGroup *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *key;
@property (nullable, nonatomic, copy) NSDate *date;
@property (nullable, nonatomic, copy) NSDate *midnightUTCDate;
@property (nullable, nonatomic, copy) NSDate *contentMidnightUTCDate;
@property (nullable, nonatomic, copy) NSString *siteURLString;

@property (nonatomic) int32_t contentGroupKindInteger;
@property (nonatomic) int16_t contentTypeInteger;

@property (nullable, nonatomic, copy) NSArray<id<NSCoding>> *content;

@property (nonatomic) int32_t dailySortPriority;

@property (nullable, nonatomic, copy) NSString *articleURLString;
@property (nullable, nonatomic, retain) CLLocation *location;
@property (nullable, nonatomic, retain) CLPlacemark *placemark;

@end

NS_ASSUME_NONNULL_END
