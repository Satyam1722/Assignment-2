#include<stdio.h>
int main()
{
    int n,temp;
    printf("enter a number\n");
    scanf("%d",&n);
    temp=n%10;
    n-=temp;
    printf("final number is %d",n);
    return 0;

}