#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter two numbers \n");
    scanf("%d%d",&a,&b);
    printf("before swapping :\n");
    printf("value of a is %d and value  of b is %d\n\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping : \n");
    printf("value of a is %d and value  of b is %d\n",a,b);
    return 0;
}