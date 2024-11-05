//
// Created by Qian on 24-10-11.
//
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define LEN 21
bool IsPalindrome(const char string[],int len);
int main() {
    char string[LEN]="";
    printf("Input a string containing at most 20 chars: ");
    scanf("%20s",string);
    int len=strlen(string);
    IsPalindrome(string,len);
    return 0;
}
bool IsPalindrome(const char string[],int len) {
    printf("The length of \"%s\" is %d.\n",string,len);
    for(int i=0,j=len-1;i<j;i++,j--) {
        if(string[i]!=string[j]) {
            return false;
        }
    }
    return true;
}