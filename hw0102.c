#include<stdio.h>
#include<stdint.h>
int main()
{
  int sum=0;
  printf("Please enter a 5-digits integer:");
  scanf("%d",&sum);
  int a=sum/10000;
  int b=(sum-(a*10000))/1000;
  int c=(sum-(a*10000)-(b*1000))/100;
  int d=(sum-(a*10000)-(b*1000)-(c*100))/10;
  int e=(sum-(a*10000)-(b*1000)-(c*100)-(d*10));
  int answer=a*b*c*d*e;
  printf("%d\n",answer);
}
