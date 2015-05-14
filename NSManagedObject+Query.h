#import <CoreData/CoreData.h>
#import "Query.h"

@interface NSManagedObject (Query)
+(Query *)where:(NSDictionary *)conditions;
+(Query *)queryFor:(NSDictionary *)attributes;

@end
