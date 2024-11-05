//
// Created by Qian on 24-10-10.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10000
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int q=1,p=1;
        char a[SIZE];
        scanf("%s", a);
        for (int j = 0; j <= strlen(a)-1; j++) {
            if(a[j]=='Z') {
                printf("Radix Error\n");
                p=0;
                break;
            }
        }
        if(p==1) {
            int m=atoi(a);
            if(m==0) {printf("0\n"); }
            if(m==1) {printf("1\n"); }
            if(m<0) {
                m = -m;
                q=0;
            }
            if(m>0&&m!=1) {
                int b[SIZE]={0};
                int w = 0;
                char e[SIZE];
                while(m>0) {
                    b[w]= m%3;
                    m=m/3;
                    w++;
                }
                for(int k=0; k<=w-1; k++) {
                    if(b[k]==0) {
                        e[k]='0';
                    }
                    else if(b[k]==1) {
                        e[k]='1';
                    }
                    else if(b[k]==2) {
                        e[k]='Z';
                        b[k+1]+=1;
                    }
                    else if(b[k]==3) {
                        e[k]='0';
                        b[k+1]+=1;
                    }
                }
                if(b[w]==1) {e[w]='1';}
                if(b[w]==0) {e[w]='0';}
                if(q==0) {
                    for(int k=0; k<=w; k++) {
                        if(e[k]=='1') {e[k]='Z';}
                        else if(e[k]=='Z') {e[k]='1';}
                    }
                }
                if(e[w]=='0') {
                    for(int k=w-1; k>=0; k--) {
                        if(k>0) {
                            printf("%c",e[k]);
                        }
                        else {printf("%c\n",e[k]);}
                    }
                }
                else if(e[w]=='1'||e[w]=='Z') {
                    for(int k=w; k>=0; k--) {
                        if(k>0) {
                            printf("%c",e[k]);
                        }
                        else {printf("%c\n",e[k]);}
                    }
                }
            }
        }
    }
    return 0;
}
