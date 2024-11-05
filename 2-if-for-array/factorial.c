//
// Created by Qian on 24-10-9.
//
#include <stdio.h>
int main() {
    int n;
    int mid_1=0;
    int mid_2=0;
    int result[26] = {[1]=1};
    scanf("%d",&n);
    for(int i=2;i<=n;i++) {
        result[i] = ((result[i-1]%10007)*i)%10007;
    }
    for(int i=1;i<=n;i++) {
        mid_1 = mid_1+result[i];
    }
    mid_2=mid_1%10007;
    printf("%d ",mid_2);
    return 0;
}