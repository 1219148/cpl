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
        int low=0;
        int high=i-1;
        while(low<=high) {
            int mid=(low+high)/2;
            if(key>=numbers[mid]) {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        for(int j=i;j>low;j--) {
            numbers[j]=numbers[j-1];
        }
        numbers[low]=key;
    }
    for(int i=0;i<size;i++) {
        printf("%d ",numbers[i]);
    }
    return 0;
}





