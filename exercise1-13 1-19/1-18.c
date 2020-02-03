#include<stdio.h>
#define MAXLINE 10000

int main(int argc, const char* argv[]){
  int leng;
  char line[MAXLINE]

}

int getline(char s[], int lim)
{
  int c, i;
  for(i=0; i< lim-1 && (c=getchar())!=EOF && c!='\n';i++)
  s[i] = c;
  if (c=='\n'){
    s[i]=c;
    i++;
  }
  s[i] = '\0';
  return i;
}

int removetrail(char s[])
{
  for(int i=0; s[i]!='\n'; i++){
  --i;}
  for(i>0;((s[i]==' ') || (s[i]=='\t'));i--.)
  ;
  if(i>=0){
    i++;
    s[i]='\n'
  }
  return i;
}
