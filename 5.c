#include<stdio.h>
int main()
{
  int n,sum=0;
  printf("enter three digit number\n");
  scanf("%d",&n);
  sum+=n%10;
  n=n/10;
  sum+=n%10;
  n=n/10;
  sum+=n%10;
  n=n/10;
  printf("sum of digit is %d",sum);
  return 0;

}