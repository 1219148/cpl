//
// Created by Qian on 24-10-8.
//
#include <stdio.h>
int main() {
    int year = 0;
    scanf("%d",&year);
    int leap = 0;
    if (year % 4 != 0) {
        leap = 0;
    }else {
        if (year % 100 != 0) {
            leap = 1;
        }else {
            if (year % 400 != 0) {
                leap = 0;
            } else {
                leap = 1;
            }
        }
    }
    return 0;
}