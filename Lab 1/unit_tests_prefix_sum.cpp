#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "prefix_sum.h"

int test_ary_0[] = {};
int test_ary_1[] = {1, 1, 1, -1, -1, -1};
int test_ary_2[] = {2, 5, 7, 10, -25};

TEST_CASE("prefix sum")
{
    CHECK_EQ(prefix_sum(test_ary_0, sizeof(test_ary_0)), 0); //works with len 0
    CHECK_EQ(prefix_sum(test_ary_1, sizeof(test_ary_1)/sizeof(test_ary_1[0])), 0);
    CHECK_EQ(prefix_sum(test_ary_2, sizeof(test_ary_2)/sizeof(test_ary_2[0])), -1);
    
    SUBCASE("non negative"){
        CHECK_FALSE(!non_neg_prefix_sum(test_ary_0, sizeof(test_ary_0)));
        CHECK_FALSE(!non_neg_prefix_sum(test_ary_1, sizeof(test_ary_1)/sizeof(test_ary_1[0])));
        CHECK_FALSE(non_neg_prefix_sum(test_ary_2, sizeof(test_ary_2)/sizeof(test_ary_2[0]))); //should be false
    }
    
    SUBCASE("non positive"){
        CHECK_FALSE(non_pos_prefix_sum(test_ary_0, sizeof(test_ary_0)));
        CHECK_FALSE(non_pos_prefix_sum(test_ary_1, sizeof(test_ary_1)/sizeof(test_ary_1[0])));
        CHECK_FALSE(!non_pos_prefix_sum(test_ary_2, sizeof(test_ary_2)/sizeof(test_ary_2[0]))); //should be true
    }
};