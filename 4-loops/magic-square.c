//
// Created by Qian on 24-10-19.
//
#include <stdio.h>
int main() {
    int n=0;
    scanf("%d",&n);
    int arr[999][999]={0};
    int x=0;
    int y=0;
    arr[0][(n-1)/2]=1;
    x=0;
    y=(n-1)/2;
    for(int i=2;i<=n*n;i++) {
        x--;
        y++;
        if(x>=0&&x<=n-1&&y>=0&&y<=n-1) {
            if(arr[x][y]==0) {
                arr[x][y]=i;
            }
            else{
                x=x+2;
                y--;
                arr[x][y]=i;
            }
        }
        else if(x<0&&y>=0&&y<=n-1) {
            x=n-1;
            if(arr[x][y]==0) {
                arr[x][y]=i;
            }
            else{
                x=1;
                y--;
                arr[x][y]=i;
            }
        }
        else if(x>n-1&&y>=0&&y<=n-1) {
            x=0;
            arr[x][y]=i;

        }
        else if(y<0&&x>=0&&x<=n-1) {
            y=n-1;
            if(arr[x][y]==0) {
                arr[x][y]=i;
            }
            else{
                y=0;
                x=x+2;
                arr[x][y]=i;
            }
        }
        else if(y>n-1&&x>=0&&x<=n-1) {
            y=0;
            if(arr[x][y]==0) {
                arr[x][y]=i;
            }
            else{
                x=x-2;
                y=n-1;
                arr[x][y]=i;
            }
        }
        else if(x<0&&y>n-1) {
            x=n-1;
            y=0;
            if(arr[x][y]==0) {
                arr[x][y]=i;
            }
            else{
                x=1;
                y=n-1;
                arr[x][y]=i;
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}