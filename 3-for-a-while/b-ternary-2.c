//
// Created by Qian on 24-10-14.
//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    char number[16];
    char answer[22];
    char answer_[22];
    int start=0;
    int number_;
    int result[21];
    int len;
    int index=0;
    int state=0;
    for(int i=0;i<n;i++){
        index=20;
        start=0;
        state=0;
        scanf("%s",number);
        number_=atoi(number);
        if(number_<0){
            state=1;
            number_=-number_;
        }
        len=strlen(number);
        for(int j=0;j<len;j++){
            if(number[j]=='Z'){
                printf("Radix Error\n");
                state=2;
                break;
            }
        }
        for(int k=0;k<21;k++){
            result[20-k]=number_%3;
            number_=number_/3;
        }
        for(int k=20;k>=0;k--){
            if(result[k]==0||result[k]==1){
            }
            else if(result[k]==2){
                result[k]=-1;
                result[k-1]++;
            }
            else if(result[k]==3){
                result[k]=0;
                result[k-1]++;
            }
        }
        for(int k=0;k<21;k++){
            if(result[k]==0){
                answer[k]='0';
            }
            else if(result[k]==1){
                answer[k]='1';
            }
            else if(result[k]==-1){
                    answer[k]='Z';
            }
        }
        for(int k=0;k<21;k++){
            if(answer[k]!='0'){
                index=k;
                break;
            }
        }
        if(state!=2){
            for(int k=index;k<21;k++){
                answer_[start++]=answer[k];
            }
            for(int k=21-index;k<21;k++){
                answer_[k]=' ';
            }
            if(state==1){
                for(int k=0;k<21;k++){
                    if(answer_[k]=='1'){
                        answer_[k]='Z';
                    }
                    else if(answer_[k]=='Z'){
                        answer_[k]='1';
                    }
                }
            }
            printf("%s\n",answer_);
        }
    }
    return 0;
}