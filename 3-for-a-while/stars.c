//
// Created by Qian on 24-10-10.
//
#include <stdio.h>
void PrintChar(char ch,int number);
void NewLine(void);
int main(){
  int lines;
  scanf("%d",&lines);
  for(int i=0;i<lines;i++) {
    PrintChar(' ',lines-1-i);
    PrintChar('*',2*i+1);
    if(i<=lines-1){
      NewLine();
    }
  }
  return 0;
}
void PrintChar(char ch,int number) {
  for(int i=0;i<number;++i) {
    printf("%c",ch);
  }
}
void NewLine(void) {
  printf("\n");
}