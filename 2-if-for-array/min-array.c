//
// Created by Qian on 24-10-9.
//
#include <stdio.h>
int main() {
    int numbers[5]={23,89,77,12,25};
    int min=numbers[0];
    for(int i=1;i<5;i++) {
        if(min>numbers[i]) {
            min=numbers[i];
        }
    }
    printf("min=%d\n",min);

    return 0;
}