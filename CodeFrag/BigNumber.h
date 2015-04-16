//
//  BigNumber.h
//  CodeFrag
//
//  Created by JinCui on 4/15/15.
//  Copyright (c) 2015 JinCui. All rights reserved.
//

#ifndef __CodeFrag__BigNumber__
#define __CodeFrag__BigNumber__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MAX_DIGITS 100
typedef struct{
    char digits[MAX_DIGITS];
    
}BigNumber;



BigNumber add(BigNumber n1, BigNumber n2);
BigNumber multiply(BigNumber n1, BigNumber n2);

#endif /* defined(__CodeFrag__BigNumber__) */
