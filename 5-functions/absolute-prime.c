//
// Created by Qian on 24-11-3.
//
#include <math.h>
#include <stdbool.h>
#include<stdio.h>
bool isAbsolutePrime(int i);
bool isPrime(int i);
int main() {
    int n;
    scanf("%d",&n);
    int num=0;
    for(int i=2;i<=n;i++) {
        if(isAbsolutePrime(i)) {
            num++;
        }
    }
    printf("%d",num);
    return 0;
}
bool isAbsolutePrime(int i) {
    int a,b,c,d;
    a=i/1000;
    b=(i-(a*1000))/100;
    c=(i%100)/10;
    d=i%10;
    int num=0;
    int i_;
    if(a!=0){
        num=4;
        i_=1000*d+100*c+10*b+a;
    }
    else if(b!=0){
        num=3;
        i_=100*d+10*c+b;
    }
    else if(c!=0){
        num=2;
        i_=10*d+c;
    }
    else {
        num=1;
        i_=d;
    }
    if(isPrime(i_)&&isPrime(i)) {
        return true;
    } else {
        return false;
    }
}
bool isPrime(int i) {
    for(int j=2;j<=sqrt(i);j++) {
        if(i%j==0) {
            return false;
        }
    }
    return true;
}