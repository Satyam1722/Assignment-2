#include<stdio.h>
int main()
{
    int n,d;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("enter a digit\n");
    scanf("%d",&d);
    n*=10;
    printf("the final number is %d",n+d);
    return 0;

}