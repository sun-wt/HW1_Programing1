#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char buffer[33];
char * inttohex(int a)
{
  sprintf(buffer,"%x",a);
  return (buffer);
}
int main()
{
  int number;
  char *str;
  printf("Please enter an integer:");
  scanf("%d",&number);
  printf("%d:",number);
  str=inttohex (number);
  int b=strlen(str);
  for(int i=0;i<8-b;i++){
    printf("0");
  }
  printf("%s\n",str);
  return 0;
}
