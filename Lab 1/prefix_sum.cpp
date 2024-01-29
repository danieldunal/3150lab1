#include <iostream>

#include "prefix_sum.h"


int prefix_sum(int ary[], int length){
    int sum = 0;
    for (int i = 0; i < length; i++){
        sum += ary[i]; 
    }
    return sum;
}

bool non_neg_prefix_sum(int ary[], int length){
    int sum = 0;
    bool negative = false;
    for (int i = 0; i < length; i++){
        sum += ary[i];
        if (sum < 0){
            negative = true;
            break;
        } 
    }
    return !negative;
}

bool non_pos_prefix_sum(int ary[], int length){
    int sum = 0;
    bool positive = true;
    for (int i = 0; i < length; i++){
        sum += ary[i];
        if (sum < 0){
            positive = false;
            break;
        } 
    }
    return !positive;
}