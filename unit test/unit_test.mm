
#import "header.h"
#import <XCTest/XCTest.h>

@interface popop : XCTestCase

@end

@implementation popop

- (void)testExample {
    
    int resultFunc = r(1 + (1*1) - 2*1 ) + 2*r(1+r(1*1) - 2 * pow(r(1), 2));
    
    XCTAssertEqual(resultFunc, -2147483646);
}


@end
