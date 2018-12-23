//
//  main.c
//  learn c
//
//  Created by QM36 on 2018/12/21.
//  Copyright © 2018 QM. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float in, sum;
//    char Operator;
    char ifgoon;
    printf("😍😍😍😍猫猫🐱给猪猪🐷写的简易计算器\n计算顺序按照猪猪的输入顺序，以=做结束符\n");
    start: printf("接下来开始输入：\n");
    while (1) {
        sum = 0;
        scanf("%f", &in);
        while(in != 0) {
            sum += in;
            scanf("%f", &in);
//            switch (Operator) {
//                case '+':
//                    sum += in;
//                    break;
//                case '-':
//                    sum -= in;
//                    break;
//                case '*' :
//                    sum *= in;
//                    break;
//                case '/':
//                    sum /= in;
//                default:
//                    break;
//            }
        }
        printf("让猫猫告诉笨猪答案：%.3f\n", sum);
        again: printf("猪猪🐷还要继续计算吗？，输入Y/N\n");
        scanf("%c",&ifgoon);
        if(ifgoon == 'N' || ifgoon == 'n')
            goto end; 
        else if(ifgoon =='Y' || ifgoon == 'y'){
            goto start;
        } else {
            goto again;
        }
    }
    end: printf("猪猪再见👋！\n");
    
    return 0;
}
