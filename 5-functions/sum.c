//
// Created by Qian on 24-11-3.
//
#include <stdio.h>
#include<math.h>
int part(int t,int i);
int main() {
    int n,t;
    int ans=0;
    scanf("%d%d",&n,&t);
    for(int i=1;i<=n;i++) {
        ans+=part(t,i);
    }
    printf("%d",ans);
    return 0;
}
int part(int t,int i) {
    int part=0;
    for(int j=1;j<=i;j++) {
        part+=t*pow(10,j-1);
    }
    return part;
}