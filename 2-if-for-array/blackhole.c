//
// Created by Qian on 24-10-9.
//
#include <stdio.h>
int main() {
    int n,max,mid,min,max_num,mid_num,min_num,max_number,min_number;
    int a=0;
    int b=0;
    int c=0;
    int answer=0;
    int result=0;
    scanf("%d", &n);
    while(result!=495) {
        a=n/100;
        b=(n-100*a)/10;
        c=n-100*a-10*b;
        if (a < b) {
            if (a < c) {
                min = a;
                min_num = 1;
            } else {
                min = c;
                min_num = 3;
            }
        } else {
            if (b < c) {
                min = b;
                min_num = 2;
            } else {
                min = c;
                min_num = 3;
            }
        }
        if (a > b) {
            if (a > c) {
                max = a;
                max_num = 1;
            } else {
                max = c;
                max_num = 3;
            }
        } else {
            if (b > c) {
                max = b;
                max_num = 2;
            } else {
                max = c;
                max_num = 3;
            }
        }
        for (int i = 1; i <= 3; i++) {
            if (i!=min_num&&i!=max_num) {
                mid_num = i;
            }
        }
        if(mid_num==1) {
            mid=a;
        }
        else if(mid_num==2) {
            mid=b;
        }
        else if(mid_num==3) {
            mid=c;
        }
        printf("%d %d %d\n",min,max,mid);
        max_number=max*100+mid*10+min;
        min_number=min*100+mid*10+max;
        result=max_number-min_number;
        if(result<n) {
            answer=answer-result+n;
        }
        n=result;
    }
    printf("%d",answer);
    return 0;
}
