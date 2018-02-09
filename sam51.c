#include<stdio.h>
void main()
{
    int n1,n2,s=0;
    printf("\nenter any number\n");
    scanf("%d",&num);
    while(n1!=0)
    {
        n2=n1%10;
        s=(s*10)+n2;
        n1/=10;
    }
    n1=s;
    while(n1!=0)
    {
        n2=n1%10;
        printf("%d",n2);
        n1/=10;
    }
 }
