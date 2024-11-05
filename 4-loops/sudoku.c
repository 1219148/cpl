//
// Created by Qian on 24-10-19.
//
#include <stdio.h>
#include<string.h>
int main() {
    int test_1=1;
    int test_2=1;
    int test_3=1;
    int result[9]={0};
    int sudoku[9][9]={0};
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            scanf("%d", &sudoku[i][j]);
        }
    }
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            result[sudoku[i][j]-1] ++;
        }
        for(int k = 0; k < 9; k++) {
            if(result[k] ==0) {
                test_1=0;
            }
        }
        memset(result,0,sizeof(result));
    }
    for(int j = 0; j < 9; j++) {
        for(int i = 0; i < 9; i++) {
            result[sudoku[i][j]-1] ++;
        }
        for(int k = 0; k < 9; k++) {
            if(result[k] ==0) {
                test_2=0;
            }
        }
        memset(result,0,sizeof(result));
    }
    for(int k = 0; k < 3; k++) {
        for(int i = 3*k; i < 3+3*k; i++) {
            for(int j = 0; j < 3; j++) {
                result[sudoku[i][j]-1] ++;
            }
        }
        for(int k = 0; k < 9; k++) {
            if(result[k] ==0) {
                test_3=0;
            }
        }
        memset(result,0,sizeof(result));
        for(int i = 3*k; i < 3+3*k; i++) {
            for(int j = 3; j < 6; j++) {
                result[sudoku[i][j]-1] ++;
            }
        }
        for(int k = 0; k < 9; k++) {
            if(result[k] ==0) {
                test_3=0;
            }
        }
        memset(result,0,sizeof(result));
        for(int i = 3*k; i < 3+3*k; i++) {
            for(int j = 6; j < 9; j++) {
                result[sudoku[i][j]-1] ++;
            }
        }
        for(int k = 0; k < 9; k++) {
            if(result[k] ==0) {
                test_3=0;
            }
        }
    }
    if(test_1&&test_2&&test_3) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}