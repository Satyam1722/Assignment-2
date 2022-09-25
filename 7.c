#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0;
    printf("enter a number \n");
    scanf("%d",&a);
    b=(a&~(a-1));
    do {
            c++;
            b/=2;
    }while(b);
    printf(" %d \n",c);

   
    return 0;

}