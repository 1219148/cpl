//
// Created by Qian on 24-10-14.
//
#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    int n;
    int numbers[50000]={0};
    for(int i=0;i<T;i++){
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            scanf("%d",&numbers[j]);
        }
        for(int k=0;k<n;k++){
            if(numbers[k]>numbers[n-1]){
                printf("No\n");
                break;
            }
            if(k==n-2){
                printf("Yes\n");
            }
        }
    }
    return 0;
}