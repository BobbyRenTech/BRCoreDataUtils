#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface Query : NSObject
{
    NSArray *predicates;
    NSArray *sortDescriptors;
}

-(id)initWithPredicates:(NSArray *)otherPredicates;

@property (nonatomic, strong) NSString *entityDescription;

-(Query *)where:(NSDictionary *)attributes;
-(Query *)lte:(NSDictionary *)attributes;
-(Query *)gte:(NSDictionary *)attributes;
-(Query *)not:(NSDictionary *)attributes;
-(NSArray *)allObjectsInMOC:(NSManagedObjectContext *)moc;
-(Query *)ascending:(id)attribute;
-(Query *)descending:(id)attribute;
@end
