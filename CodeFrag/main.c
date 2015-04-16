//
//  main.c
//  CodeFrag
//
//  Created by JinCui on 4/15/15.
//  Copyright (c) 2015 JinCui. All rights reserved.
//

#include <stdio.h>
#include "BigNumber.h"

int main(int argc, const char * argv[]) {
    BigNumber n1;
    BigNumber n2;
    int i;
    for (i = 0; i < MAX_DIGITS; i++) {
        n1.digits[i] = 9;
        n2.digits[i] = 1;
    }
    
    BigNumber ret = add(n1, n2);
    for (i = MAX_DIGITS-1; i >= 0; i--) {
        if(ret.digits[i] != 0)
            printf("%d", (int)(ret.digits[i]));
    }
    // insert code here...
    
    return 0;
}
