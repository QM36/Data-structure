//
//  main.c
//  test
//
//  Created by QM36 on 2018/12/26.
//  Copyright © 2018 QM. All rights reserved.
//

#include <stdio.h>
int count_space (const char *str) {
    int count = 0;
    while (*str != '\0') {
        if(*str == ' ') count++;
        str++;
    }
    return count;
}
int main () {
    const char *str = "How are you?";
    printf("空格个数是%d\n",count_space(str));
    return 0;
}
