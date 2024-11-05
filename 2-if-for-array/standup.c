//
// Created by Qian on 24-10-9.
//
#include <stdio.h>
#define SIZE 100001
int main() {
    int n;
    int num=0;
    int answer=0;
    int numbers[SIZE]={0};
    int answers[SIZE]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&numbers[i]);
    }
    for(int i=0;i<n;i++) {
        num=num+numbers[i];
        answers[i]=i+1-num;
    }
    for(int i=0;i<n;i++) {
        if(answers[i]>answer) {
            answer=answers[i];
        }
    }
    printf("%d",answer);
    return  0;

}