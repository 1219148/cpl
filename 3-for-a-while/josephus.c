//
// Created by Qian on 24-10-14.
//
#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int numbers[500]={0};
    int index=0;
    int result=0;
    for(int i=1;i<n;i++){
        result=0;
        while(1){
            if(index==n){
                index=0;
            }
            if(numbers[index]==0){
                result++;
            }
            if(result==k){
                break;
            }
            index++;
        }
        numbers[index]=1;
    }
    for(int i=0;i<n;i++){
        if(numbers[i]!=1){
            printf("%d",i+1);
        }
    }
    return 0;
}