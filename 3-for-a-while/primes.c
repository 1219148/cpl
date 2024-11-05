//
// Created by Qian on 24-10-10.
//
#include <stdbool.h>
#include <stdio.h>
bool isPrime(int i);
int main() {
    int number;
    int count=0;
    scanf("%d",&number);
    bool isprime = isPrime(number);
    for(int i=2;i<=number;i++) {
        if(isPrime(i)) {
            count++;
            printf("%d\n",i);
        }
    }
    printf("%d\n",count);
    return 0;
}
bool isPrime(int i) {
    for (int j = 2; j*j <= i; j++) {
        if (i % j == 0) {
            return false;
        }
    }
    return true;
}