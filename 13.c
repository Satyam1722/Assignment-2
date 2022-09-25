#include<stdio.h>
int main()
{
    int n,temp;
    printf("enter a number\n");
    scanf("%d",&n);
    temp=n%10;
    temp*=100;
    n/=10;
    printf("the rotated number is %d",n+temp);
    return 0;


}