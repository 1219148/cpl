//
// Created by Qian on 24-10-14.
//
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int numbers[2000]={0};
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j=j+i){
            if(numbers[j]==0){
                numbers[j]=1;
            }
            else{
                numbers[j]=0;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(numbers[i]==1){
            printf("%d ",i);
        }
    }
    return 0;
}