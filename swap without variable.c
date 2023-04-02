#include<stdio.h>
int main()
{
  int a=20;
  int b=40;
  printf("Value of a= %d\n",a);
  printf("Value of b= %d\n",b);
  printf("\n");
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After swap value of a: %d\n",a);
  printf("After swap value of b: %d\n",b);
  return 0;
}
