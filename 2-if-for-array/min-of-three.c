//
// Created by Qian on 24-10-8.
//
#include <stdio.h>
int main() {
    int a, b, c,min;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b) {
        if(a<c) {
            min=a;
        }else {
            min=c;
        }
    } else {
        if(b<c) {

            min=b;
        }else {
            min=c;
        }
    }
    printf("min(%d,%d,%d)=%d",a,b,c,min);
    return 0;
}