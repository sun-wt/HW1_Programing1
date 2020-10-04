#include<stdio.h>
float main()
{
  float g=0;
  float t=0;
  printf("Please enter the acceleration due to gravity:");
  scanf("%f",&g);
  printf("Please enter the time(s):");
  scanf("%f",&t);

  float V=g*t;
  float h=g*t*t/2;
  printf("Final velocity: %f m/s\n",V);
  printf("The altitude: %f m\n",h);
}

  
