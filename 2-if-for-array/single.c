//
// Created by Qian on 24-10-9.
//
#include <stdio.h>
#define SIZE 100000
int main(){
  int n;
  int check = 0;
  scanf("%d",&n);
  int numbers[SIZE]={0};
  int buckets[SIZE]={0};
  for(int i=0;i<(2*n-1);i++) {
    scanf("%d",&numbers[i]);
    buckets[numbers[i]]++;
  }
  for(int i=0;i<SIZE;i++) {
    if(buckets[i]==1) {
      printf("%d ",i);
    }
  }
  return 0;
}