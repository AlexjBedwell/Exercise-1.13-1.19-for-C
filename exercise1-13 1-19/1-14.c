#include<stdio.h>
#define Si 50
int main(int argc, const char* argv[]){
  int c;

  int hist[Si];
  for(int i = 0;i<Si; i++){
    hist[i]=0;
  }

  while ((c=getchar())!=EOF){
    ++hist[c];
  }
  for(int j=0;j<Si;j++){
    putchar(j);
    for(int h=0; h<hist[i];h++){
      putchar('*')
    }
  }
  return 0;
}
