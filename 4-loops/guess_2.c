//
// Created by Qian on 24-10-18.
//
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    long long max=pow(2,32)-1;
    long long min=0;
    long long guess=0;
    char prompt[2];
    while(1) {
        guess=(max+min)/2;
        printf("%lld\n",guess);
        fflush(stdout);
        scanf("%s",prompt);
        if(prompt[0]=='G') {
            max=guess-1;
        }
        else if(prompt[0]=='L') {
            min=guess+1;
        }
        else if(prompt[0]=='E') {
            break;
        }
        else if(prompt[0]=='0') {
            break;
        }
    }
    return 0;
}
