//
// Created by Qian on 24-10-9.
//
#include <stdio.h>
#define SIZE 10000
int main() {
    int size=0;
    scanf("%d",&size);
    int numbers[SIZE]={0};
    for(int i=0;i<size;i++) {
        scanf("%d",&numbers[i]);
    }
    int min=numbers[0];
    for(int i=1;i<size;i++) {
        if(min>numbers[i]) {
            min=numbers[i];
        }
    }
    printf("min=%d\n",min);

    return 0;
}