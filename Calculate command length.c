//
//  main.c
//  test
//
//  Created by QM36 on 2018/12/23.
//  Copyright © 2018 QM. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int len = 0;
    printf("Enter your commond:\n");
    while (getchar() != '\n' ) {
        len ++;
    }
    printf("Your commond's length is %d\n", len);
    return 0;
}
