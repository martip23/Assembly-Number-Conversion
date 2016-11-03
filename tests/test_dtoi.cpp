#include "catch.hpp"
#include "numbers.h"

char const * testvals[] = {
    "42",
    "42"
};

TEST_CASE( "dtoi test", "dtoi" ){
    for(int i=0;i<2;i++)
        REQUIRE(n_dtoi(testvals[i])  == 42);
}
