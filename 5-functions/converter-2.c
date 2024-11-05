//
// Created by Qian on 24-11-3.
//
#include <stdio.h>
void convert(int number);
char ones[20][10]={"zero", "one", "two", "three", "four", "five", "six", "seven",
        "eight", "nine","ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
char tens[8][10]={"twenty", "thirty", "forty", "fifty",
        "sixty", "seventy", "eighty", "ninety"};
int main() {
    long long int n;
    scanf("%lld", &n);
    if(n==0){
        printf("zero");
    }
    if (n < 0) {
        printf("minus ");
        n=-n;
    }
    int a=n/1000000000;
    if(a!=0) {
        convert(a);
        printf("billion ");
    }
    n=n-a*1000000000;
    int b=n/1000000;
    if(b!=0) {
        convert(b);
        printf("million ");
    }
    n=n-b*1000000;
    int c=n/1000;
    if(c!=0) {
        convert(c);
        printf("thousand ");
    }
    n=n-c*1000;
    if(n!=0){
        convert(n);
    }
    return 0;
}
void convert(int number) {
    int a,b,c,d;
    if(number<20) {
        printf("%s ",ones[number]);
    }
    else if(number<100&&number>19) {
        b=number/10;
        a=number%10;
        if(a!=0) {
            printf("%s-%s ",tens[b-2],ones[a]);
        }
        else {
            printf("%s ",tens[b-2]);
        }
    }
    else if(number==100) {
        printf("one hundred ");
    }
    else {
        c=number/100;
        b=(number-100*c)/10;
        a=number-100*c-10*b;
        d=number-100*c;
        if(b<2&&d!=0) {
            printf("%s hundred and %s ",ones[c],ones[d]);
        }
        else if(d==0) {
            printf("%s hundred ",ones[c]);
        }
        else if(a==0) {
            printf("%s hundred and %s ",ones[c],tens[b-2]);
        }
        else {
            printf("%s hundred and %s-%s ",ones[c],tens[b-2],ones[a]);
        }
    }
}