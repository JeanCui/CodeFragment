//
//  BigNumber.c
//  CodeFrag
//
//  Created by JinCui on 4/15/15.
//  Copyright (c) 2015 JinCui. All rights reserved.
//

#include "BigNumber.h"

BigNumber add(BigNumber n1, BigNumber n2){
    BigNumber ret;
    int i;
    memset((void*)(ret.digits), 0, MAX_DIGITS*sizeof(char));
    char carry = 0;
    for (i = 0; i < MAX_DIGITS-1; i++) {
        char sum = n1.digits[i] + n1.digits[i] + carry;
        if(sum >= 10){
            carry = 1;
            sum = sum - 10;
        }
        
        ret.digits[i] = sum;
    }
    
    char sum = n1.digits[MAX_DIGITS-1] + n2.digits[MAX_DIGITS-1] + carry;
    // if exceed MAX_DIGITS,
    // throw an assertion
    // try to increase the MAX_DIGITS
    if (sum >= 10) {
        assert(0);
    }
    ret.digits[MAX_DIGITS-1] = sum;
    
    return ret;
}

BigNumber multiply(BigNumber n1, BigNumber n2){
    BigNumber ret;
    //later
    return ret;
    
}