//
// Created by Qian on 24-10-18.
//
#include<stdio.h>
#include<math.h>
int main() {
    int n=0;
    int numbers[18]={0,0,3,0,0,0,0,0,0,0,0,0,0,14,15,16,0,18};
    int a_1=0;
    int a_2=0;
    int a_3=0;
    int b_1=0;
    int b_2=0;
    int b_3=0;
    int aa_1[5]={0};
    int bb_1[5]={0};
    int aa_2[5]={0};
    int bb_2[5]={0};
    int aa_3[5]={0};
    int bb_3[5]={0};
    scanf("%d",&n);
    int input[18]={0};
    int result_1=0;
    int result_2=0;
    int result_3=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&input[i]);
        input[i]=numbers[input[i]-1];
    }
    a_1=input[0];
    a_2=input[0];
    a_3=input[0];
    if(n==1) {
        result_1=input[0];
        result_2=input[0];
        result_3=input[0];
    }
    else{
        for(int i=1;i<n;i++) {
            result_1=0;
            result_2=0;
            result_3=0;
            b_1=input[i];
            b_2=input[i];
            b_3=input[i];
            for(int i=0;i<5;i++) {
                aa_1[4-i]=a_1%2;
                aa_2[4-i]=a_2%2;
                aa_3[4-i]=a_3%2;
                bb_1[4-i]=b_1%2;
                bb_2[4-i]=b_2%2;
                bb_3[4-i]=b_3%2;
                a_1=a_1/2;
                a_2=a_2/2;
                a_3=a_3/2;
                b_1=b_1/2;
                b_2=b_2/2;
                b_3=b_3/2;
            }
            for(int i=0;i<5;i++) {
                if(aa_1[i]==1&&bb_1[i]==1) {
                    result_1=result_1+pow(2,4-i);
                }
                else {
                }
            }
            a_1=result_1;
            for(int i=0;i<5;i++) {
                if(aa_2[i]==1||bb_2[i]==1) {
                    result_2=result_2+pow(2,4-i);
                }
                else {
                }
            }
            a_2=result_2;
            for(int i=0;i<5;i++) {
                if(aa_3[i]!=bb_3[i]) {
                    result_3=result_3+pow(2,4-i);
                }
                else {
                }
            }
            a_3=result_3;
        }
    }
    printf("%d %d %d",result_1,result_2,result_3);
    return 0;
}