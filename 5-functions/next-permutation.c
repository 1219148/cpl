//
// Created by Qian on 24-11-3.
//
#include <stdbool.h>
#include <stdio.h>
bool IsMax(int numbers[],int i,int n);
int main(void) {
    int n;
    int m=0;
    scanf("%d", &n);
    int numbers[2000]={0};
    for(int i=0; i<n; i++) {
        scanf("%d", &numbers[i]);
    }
    for(int i=0; i<n; i++) {
        if(IsMax(numbers,i,n)) {
            m=n-i;
            break;
        }
    }
    int number_1=numbers[n-m-1];
    int number_2=2001;
    int index=0;
    for(int i=n-m; i<n; i++) {
        if(numbers[i]>number_1&&numbers[i]<number_2) {
            number_2=numbers[i];
            index=i;
        }
    }
    numbers[index]=number_1;
    numbers[n-m-1]=number_2;
    for(int i=0; i<n-m; i++) {
        printf("%d ", numbers[i]);
    }
    for(int i=n-1; i>=n-m; i--) {
        printf("%d ", numbers[i]);
    }
    return 0;
}
bool IsMax(int numbers[],int i,int n) {
    for(int j=i; j<n-1; j++) {
        if(numbers[j+1]>numbers[j]) {
            return false;
        }
    }
    return true;
}