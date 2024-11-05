//
// Created by Qian on 24-10-19.
//
#include <stdio.h>
int main() {
    int n=0;
    int num=0;
    scanf("%d",&n);
    char old_board[100][100]={""};
    char new_board[102][102]={""};
    for(int i=0;i<n;i++) {
        scanf("%s",old_board[i]);
    }
    for(int i=0;i<n+2;i++) {
        for(int j=0;j<n+2;j++) {
            if(i==0||j==0||i==n+1||j==n+1) {
                new_board[i][j]='o';
            }
            else {
                new_board[i][j]=old_board[i-1][j-1];
            }
        }
    }
    for(int i=1;i<n+1;i++) {
        for(int j=1;j<n+1;j++) {
            if(old_board[i-1][j-1]=='*') {
                new_board[i][j]='*';
            }
            else {
                for(int l=i-1;l<i+2;l++) {
                    for(int m=j-1;m<j+2;m++) {
                        if(new_board[l][m]=='*') {
                            num++;
                        }
                    }
                }
                new_board[i][j]='0'+num;
            }
            num=0;
        }
    }
    for(int i=1;i<n+1;i++) {
        for(int j=1;j<n+1;j++) {
            printf("%c",new_board[i][j]);
        }
        printf("\n");
    }
    return 0;
}