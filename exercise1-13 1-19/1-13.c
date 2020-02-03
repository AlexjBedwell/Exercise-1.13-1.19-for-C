#include<stdio.h>

int main(int agrc,, const char* argv[]){
  int c;
  while ((c=getchar())!=EOF){
    if(c==' ' || c =='\n' || c=='\t' ||c=='.'||c==',')
      putchar('\n');
    else
      putchar('*');
  }
  return 0;
}
