//
// Created by Qian on 24-10-18.
//
#include<stdio.h>
#include<math.h>
int main() {
    int a_1=0;
    int a_2=0;
    int b_1=0;
    int b_2=0;
    int answer=0;
    int res=0;
    int result[31]={0};
    int aa[31]={0};
    int bb[31]={0};
    scanf("%d %d",&a_1,&b_1);
    a_2=a_1;
    b_2=b_1;
    for(int i=0;i<31;i++) {
        aa[30-i]=a_2%2;
        bb[30-i]=b_2%2;
        a_2=a_2/2;
        b_2=b_2/2;
    }
    for(int i=0;i<31;i++) {
        if(aa[i]==1&&bb[i]==1) {
            answer=answer+pow(2,30-i);
        }
        else {
        }
    }
    printf("%d\n",answer);
    answer=0;
    for(int i=0;i<31;i++) {
        if(aa[i]==1||bb[i]==1) {
            answer=answer+pow(2,30-i);
        }
        else {
        }
    }
    printf("%d\n",answer);
    answer=0;
    for(int i=0;i<31;i++) {
        if(aa[i]!=bb[i]) {
            answer=answer+pow(2,30-i);
        }
        else {
        }
    }
    printf("%d\n",answer);
    answer=0;
    for(int i=0;i<31;i++) {
        if(aa[i]==0) {
            res=res+pow(2,30-i);
        }
        else {
        }
    }
    res--;
    for(int i=0;i<31;i++) {
        result[30-i]=res%2;
        res=res/2;
    }
    for(int i=0;i<31;i++) {
        if(result[i]==0) {
            answer=answer+pow(2,30-i);
        }
        else {
        }
    }
    printf("%d\n",-answer);
    answer=0;
    for(int i=0;i<31;i++) {
        if(aa[30-i]==1) {
            answer=answer+pow(2,i+b_1);
        }
        else {
        }
    }
    printf("%d\n",answer);
    answer=0;
    for(int i=0;i<31;i++) {
        if(aa[30-i]==1&&i>=b_1) {
            answer=answer+pow(2,i-b_1);
        }
        else {
        }
    }
    printf("%d\n",answer);
    answer=0;
    answer=aa[30-b_1];
    printf("%d\n",answer);
    answer=0;
    for(int i=0;i<31;i++) {
        if(aa[30-i]==1) {
            answer++;
        }
        else {
        }
    }
    printf("%d\n",answer);
    return 0;
}