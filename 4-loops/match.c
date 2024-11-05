//
// Created by Qian on 24-10-19.
//
#include <stdio.h>
int main() {
    int n=0;
    int m=0;
    int result_1=1;
    int result_2=1;
    int result_3=1;
    int result_4=1;
    scanf("%d%d",&n,&m);
    int numbers[500][500]={0};
    int index[125000][4]={0};
    int prompt[125000]={0};
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d",&numbers[i][j]);
            if(prompt[numbers[i][j]-1]==0) {
                index[numbers[i][j]-1][0]=i;
                index[numbers[i][j]-1][1]=j;
                prompt[numbers[i][j]-1]=1;
            }
            else{
                index[numbers[i][j]-1][2]=i;
                index[numbers[i][j]-1][3]=j;
            }
        }
    }
    for(int i=1;i<=n*m/2;i++) {
        result_1=1;
        result_2=1;
        result_3=1;
        result_4=1;
        for(int j=index[i-1][0]-1;j>=0;j--) {
            if(numbers[j][index[i-1][1]]!=0) {
                result_1=0;
                break;
            }
        }
        if(result_1==1) {
            for(int j=index[i-1][2]-1;j>=0;j--) {
                if(numbers[j][index[i-1][3]]!=0) {
                    result_1=0;
                    break;
                }
            }
        }
        if(result_1!=1) {
            for(int j=index[i-1][0]+1;j<=n-1;j++) {
                if(numbers[j][index[i-1][1]]!=0) {
                    result_2=0;
                    break;
                }
            }
            if(result_2==1) {
                for(int j=index[i-1][2]+1;j<=n-1;j++) {
                    if(numbers[j][index[i-1][3]]!=0) {
                        result_2=0;
                        break;
                    }
                }
            }
        }
        if(result_1!=1&&result_2!=1) {
            for(int j=index[i-1][1]-1;j>=0;j--) {
                if(numbers[index[i-1][0]][j]!=0) {
                    result_3=0;
                    break;
                }
            }
            if(result_3==1) {
                for(int j=index[i-1][3]-1;j>=0;j--) {
                    if(numbers[index[i-1][2]][j]!=0) {
                        result_3=0;
                        break;
                    }
                }
            }
        }
        if(result_1!=1&&result_2!=1&&result_3!=1) {
            for(int j=index[i-1][1]+1;j<=m-1;j++) {
                if(numbers[index[i-1][0]][j]!=0) {
                    result_4=0;
                    break;
                }
            }
            if(result_4==1) {
                for(int j=index[i-1][3]+1;j<=m-1;j++) {
                    if(numbers[index[i-1][2]][j]!=0) {
                        result_4=0;
                        break;
                    }
                }
            }
        }
        if(result_1||result_2||result_3||result_4) {
            numbers[index[i-1][0]][index[i-1][1]]=0;
            numbers[index[i-1][2]][index[i-1][3]]=0;
            printf("%d ",i);
        }
    }
    return 0;
}