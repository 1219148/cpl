//
// Created by Qian on 24-10-8.
//
#include <stdbool.h>
#include <stdio.h>
bool IsLeapYear(int year);
int main() {
    int year = 0;
    scanf("%d",&year);
    bool leap = IsLeapYear(year);
    if (leap) {
        printf("%d is a leap year\n",year);
    }else {
        printf("%d is a common year\n",year);
    }
    return 0;
}
bool IsLeapYear(int year) {
    bool leap = false;
    if((year%4==0&&year%100!=0)||year%400==0) {
        leap = true;
    }
    return leap;
}