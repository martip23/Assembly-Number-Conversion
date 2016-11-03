#include "catch.hpp"
#include "numbers.h"


TEST_CASE( "len test", "dtoi" ){
    char const * testvals[] = {
        "4",
        "42",
        "123",
        "1234"
    };
    int testres[] = { 1,2,3,4 };

    for(int i=0;i<4;i++)
        REQUIRE(n_len(testvals[i])  == testres[i]);
}
