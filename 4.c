#include<stdio.h>
int main(){
    int a,b;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    printf("before swapping :\n");
    printf("value of a is %d and value  of b is %d\n\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping : \n");
    printf("value of a is %d and value  of b is %d\n",a,b);
    return 0;

}