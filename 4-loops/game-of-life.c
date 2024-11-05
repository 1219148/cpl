//
// Created by Qian on 24-10-17.
//
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#define SIZE 6

int board[SIZE][SIZE]={
    {0},
    {0,1,1,0,0,0},
    {0,1,1,0,0,0},
    {0,0,0,1,1,0},
    {0,0,0,1,1,0},
    {0}
};

int main() {
    int count= 0 ;
    int old_board[SIZE + 2][SIZE + 2] = { 0 };
    for(int i=1;i<=SIZE;i++) {
        for(int j=1;j<=SIZE;j++) {
            old_board[i][j]= board[i-1][j-1];
        }
    }
    int new_board[SIZE + 2][SIZE + 2] = { 0 };
    for (int i = 0; i < 10; i++) {
        for(int i=1;i<=SIZE;i++) {
            for(int j=1;j<=SIZE;j++) {
                int num_of_live_neighbors =
                    old_board[i-1][j-1]
                    +old_board[i-1][j]
                    +old_board[i-1][j+1]
                    +old_board[i][j-1]
                    +old_board[i][j+1]
                    +old_board[i+1][j-1]
                    +old_board[i+1][j]
                    +old_board[i+1][j+1];
                if(old_board[i][j]==1) {
                    new_board[i][j] = num_of_live_neighbors==2||num_of_live_neighbors==3;
                }
                else {
                    new_board[i][j] = num_of_live_neighbors==3;
                }
            }
        }
        for(int i=1;i<=SIZE;i++) {
            for(int j=1;j<=SIZE;j++) {
                printf("%c ", new_board[i][j]?'*':' ');
            }
            printf("\n");
        }
        Sleep(1000);
        system("cls");
        for(int i=1;i<=SIZE;i++) {
            for(int j=1;j<=SIZE;j++) {
                old_board[i][j] = new_board[i][j];
            }
        }
    }
    return 0;
}

