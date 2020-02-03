#include<stdio.h>
#define MAXLENGTH 10000
#define MINLENGTH 10

int main(int argc, const char* agrv[]){
  int c;
  int i=0;
  char line[MAXLENGTH];
  while ((c=getchar*())!=EOF){
    if(c!='\n'){
      line[i]=c;
      i++
    }
    else{
      printf("%s\n",line);
      i=0;
    }
  }
  return 0;
}
