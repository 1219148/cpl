//
// Created by Qian on 24-10-14.
//
#include<stdio.h>
int main(){
    int n;
    char string[10000];
    scanf("%d",&n);
    scanf("%s",string);
    for(int i=0;i<n;i++){
        if(string[i]!='?'){
            printf("%c",string[i]);
        }
        else{
            printf("%c",string[n-i-1]);
        }
    }
    return 0;
}