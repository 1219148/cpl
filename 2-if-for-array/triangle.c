//
// Created by Qian on 24-10-9.
//
#include <stdio.h>
#include <math.h>
int main() {
    int min,mid,max,min_num,max_num,mid_num;
    int numbers[3];
    for(int i=0;i<3;i++) {
        scanf("%d",&numbers[i]);
    }
    min = numbers[0];
    max = numbers[0];
    mid = numbers[0];
    min_num=0;
    mid_num=0;
    max_num=0;
    for(int i=1;i<3;i++) {
        if(numbers[i]<min) {
            min = numbers[i];
            min_num = i;
        }
        if(numbers[i]>max) {
            max = numbers[i];
            max_num = i;
        }
    }
    for(int i=0;i<3;i++) {
        if(i!=min_num&&i!=max_num) {
            mid_num = i;
        }
    }
    mid=numbers[mid_num];
    if(max>=mid+min) {
        printf("not triangle");
    }
    else if(max==mid&&mid==min) {
        printf("equilateral triangle");
    }
    else if(pow(max,2)==pow(mid,2)+pow(min,2)) {
        printf("right triangle");
    }
    else {
        if(pow(max,2)>pow(mid,2)+pow(min,2)) {
            printf("obtuse ");
        }
        else {
            printf("acute ");
        }
        if(max==mid||min==mid) {
            printf("isosceles ");
        }
        printf("triangle");
    }
    return 0;
}
