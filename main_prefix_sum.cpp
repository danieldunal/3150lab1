#include <iostream>

#include "prefix_sum.h"

int main() {

    int ary[] = {1, -1, 1, -1, 1, -1};

    int sum = prefix_sum(ary, sizeof(ary)/sizeof(ary[0]));
    bool pos = non_neg_prefix_sum(ary, sizeof(ary)/sizeof(ary[0]));
    bool neg = non_pos_prefix_sum(ary, sizeof(ary)/sizeof(ary[0]));
    
    std::cout << sum << std::endl << pos << std::endl << neg << std::endl;

    return 0;
}