//
// Created by Qian on 24-10-10.
//
#include <stdbool.h>
#include <stdio.h>
#define LEN 10
int binarySearch(int key,const int dictionary[],int len);
int main(){
    const int dictionary[LEN]={1,1,2,3,5,8,13,21,34,55};
    int key=0;
    scanf("%d",&key);
    if(binarySearch(key,dictionary,LEN)==-1) {
        printf("Not Found\n");
    }else {
        printf("The index of %d is %d.\n",key,binarySearch(key,dictionary,LEN));
    }
    return 0;
}
int binarySearch(int key,const int dictionary[],int len) {
    int index=-1;
    int low=0;
    int high=len-1;
    while(low<=high) {
        int mid=(low+high)/2;
        if(key==dictionary[mid]) {
            index=mid;
            high=mid-1;
        }else if(key<dictionary[mid]) {
            high=mid-1;
        }else if(key>dictionary[mid]) {
            low=mid+1;
        }
    }
    return index;
}