//
//  main.c
//  SeqList
//
//  Created by QM36 on 2018/12/24.
//  Copyright © 2018 QM. All rights reserved.
//

//数组实现线性表
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 20

typedef struct {
    int data[MAXSIZE];
    int length;
} SeqList;

void ListInit (SeqList *L,int num) { //初始化
    *L.length = 20;
    for (int i = 0 ; i < 20; i ++) {
        *L.data[i] = num;
    }
}
void ListClean (SeqList L) {
    
}
int ListLength (SeqList L) {
    printf("数组长度%d\n", L.length);
    return L.length;
}
int ListGet (SeqList L, int i) {
    if (i < L.length && i > 0) {
        return L.data[i];
    } else {
        printf("访问越界！");
        return 0; //此处要给返回值，否则会出现control may reach end of non-void function报错
    }
}

int main() {
    
    return 0;
}


