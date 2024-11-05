//
// Created by Qian on 24-11-4.
//
#include <stdio.h>
int main() {
    int n,m,t;
    scanf("%d %d %d",&n,&m,&t);
    int a[1000000]={0};
    int b[1000000]={0};
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++) {
        scanf("%d",&b[i]);
    }
    int ans=-1;
    int num=0;
    int mid=(n-1+0)/2;
    int high=n-1;
    int low=0;
    for(int j=0;j<m;j++) {
        high=n-1;
        low=0;
        while(low<=high) {
            mid=(low+high)/2;
            if(num==0&&a[mid]+b[j]<=t) {
                ans=t-a[mid]-b[j];
                num++;
                low=mid+1;
            }
            if(num==1&&a[mid]+b[j]<=t&&ans>t-a[mid]-b[j]) {
                ans=t-a[mid]-b[j];
                low=mid+1;
            }
            if(num==1&&a[mid]+b[j]<=t&&ans<=t-a[mid]-b[j]) {
                low=mid+1;
            }
            if(a[mid]+b[j]>t){
                high=mid-1;
            }
        }
    }
    printf("%d",ans);
    return 0;
}