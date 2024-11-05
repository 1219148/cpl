//
// Created by Qian on 24-10-9.
//
#include <stdio.h>
int main() {
    int number,a,b,c,d;
    scanf("%d",&number);
    char *ones[20]={"zero", "one", "two", "three", "four", "five", "six", "seven",
        "eight", "nine","ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tens[8]={"twenty", "thirty", "forty", "fifty",
        "sixty", "seventy", "eighty", "ninety"};
    if(number<20) {
        printf("%s",ones[number]);
    }
    else if(number<100&&number>19) {
        b=number/10;
        a=number%10;
        if(a!=0) {
            printf("%s-%s",tens[b-2],ones[a]);
        }
        else {
            printf("%s",tens[b-2]);
        }
    }
    else if(number==100) {
        printf("one hundred");
    }
    else {
        c=number/100;
        b=(number-100*c)/10;
        a=number-100*c-10*b;
        d=number-100*c;
        if(b<2&&d!=0) {
            printf("%s hundred and %s",ones[c],ones[d]);
        }
        else if(d==0) {
            printf("%s hundred",ones[c]);
        }
        else {
            printf("%s hundred and %s-%s",ones[c],tens[b-2],ones[a]);
        }
    }
    return 0;
}