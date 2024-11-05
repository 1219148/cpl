//
// Created by Qian on 24-10-11.
//
#include <stdio.h>
#define LEN 20
void SelectionSort(int arr[],int len);
int GetMin(const int arr[],int begin,int end);
void Print(int arr[],int len);
void Swap(int arr[],int left,int right);

int main() {
    int len=-1;
    int numbers[LEN]={0};
    while(scanf("%d",&numbers[++len])!=EOF);
    Print(numbers,len);
    SelectionSort(numbers,len);
    Print(numbers,len);
    return 0;
}
void SelectionSort(int arr[],int len) {
    for (int i = 0; i < len; i++) {
        int min_index = GetMin(arr,i,len-1);
        Swap(arr,i,min_index);
    }
}
int GetMin(const int arr[],int begin,int end) {
    int min = arr[begin];
    int min_index =begin; ;
    for (int j = begin+1; j <=end; j++) {
        if (min > arr[j]) {
            min = arr[j];
            min_index = j;
        }
    }
    return min_index;
}
void Print(int arr[],int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}
void Swap(int arr[],int left,int right) {
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
}