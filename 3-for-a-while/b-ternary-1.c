//
// Created by Qian on 24-10-14.
//
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int n;
    char number[16];
    int len;
    int answer;
    int state;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        len=0;
        state=1;
        answer=0;
        scanf("%s",number);
        len=strlen(number);
        for(int k=0;k<len;k++){
            if(number[k]=='1'){
                answer+=pow(3,len-k-1);
            }
            else if(number[k]=='Z'){
                answer-=pow(3,len-k-1);
            }
            else if(number[k]=='0'){
            }
            else{
                printf("Radix Error\n");
                state=0;
                break;
            }
        }
        if(state==1){
            printf("%d\n",answer);
        }
    }
    return 0;
}