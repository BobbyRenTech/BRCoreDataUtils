#import "NSManagedObject+Entity.h"

@implementation NSManagedObject (Entity)
+(NSManagedObject *)createEntityInContext:(NSManagedObjectContext *)managedObjectContext {
    NSString *name = [[self class] description];
    NSManagedObject *object = [NSEntityDescription insertNewObjectForEntityForName:name inManagedObjectContext:managedObjectContext];

    return object;
}

-(void)updateEntityWithParams:(NSDictionary *)params {
    [self setValuesForKeysWithDictionary:params];
}
@end
