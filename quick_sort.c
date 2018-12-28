//
//  main.c
//  test
//
//  Created by QM36 on 2018/12/26.
//  Copyright © 2018 QM. All rights reserved.
//

#include <stdio.h>
#define N 10

void quick_sort(int a[], int low, int hight);
int split(int a[], int low, int high);

int main() {
    int a[N], i;
    printf("Enter %d unmbers to be sorted:\n" ,N);
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    quick_sort(a, 0, N - 1);
    printf("In sorted order：\n");
    for(int i = 0; i < N; i++) {
        printf("%d\n",a[i]);
    }
    return 0;
}
void quick_sort(int a[], int low, int hight) {
    int middle;
    if(low >= hight) return;
    middle = split(a, low, hight);
    quick_sort(a, low, middle - 1);
    quick_sort(a, middle + 1, hight);
}
int split (int a[], int low , int high) {
    int temp = a[low];
    while (1) {
        while (low < high && a[high] >= temp) {
            high--;
        }
        if(low >= high) break;
        a[low++] = a[high];
        while (low < high && a[low] <= temp) {
            low++;
        }
        if(low >= high) break;
        a[high--] = a[low];
    }
    a[high] = temp;
    return high;
}
