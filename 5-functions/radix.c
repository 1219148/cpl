//
// Created by Qian on 24-11-4.
//
#include <stdbool.h>
#include <stdio.h>
bool isOk(int p,int q,int r,int i);
int main() {
    int p,q,r;
    scanf("%d %d %d",&p,&q,&r);
    int state=1;
    for(int i=2;i<=40;i++) {
        if(isOk(p,q,r,i)) {
            printf("%d\n",i);
            state=0;
            break;
        }
    }
    if(state==1) {
        printf("0\n");
    }
    return 0;
}
bool isOk(int p,int q,int r,int i) {
    int a_1,b_1,a_2,b_2,a_3,b_3;
    a_1=p/10;
    b_1=p%10;
    a_2=q/10;
    b_2=q%10;
    a_3=r/10;
    b_3=r%10;
    int p_,q_,r_;
    p_=a_1*i+b_1;
    q_=a_2*i+b_2;
    r_=a_3*i+b_3;
    if(a_1>=i||a_2>=i||a_3>=i||b_1>=i||b_2>=i||b_3>=i) {
        return false;
    }
    if(p_*q_==r_) {
        return true;
    } else {
        return false;
    }
}
