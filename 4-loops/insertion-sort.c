//
// Created by Qian on 24-10-17.
//
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_LEN 10000
#define RANGE 100
int main() {
    int numbers[MAX_LEN]={0};
    int size=0;
    scanf("%d",&size);
    srand(time(NULL));
    for(int i=0;i<size;i++) {
        numbers[i]=rand()%RANGE;
        printf("%d ",numbers[i]);
    }
    printf("\n");
    for(int i=1;i<size;i++) {
        int key=numbers[i];
        int j=i-1;
        while(numbers[j]>key&&j>=0) {
            numbers[j+1]=numbers[j];
            j--;
        }
        numbers[j+1]=key;
    }
    for(int i=0;i<size;i++) {
        printf("%d ",numbers[i]);
    }
    return 0;
}






