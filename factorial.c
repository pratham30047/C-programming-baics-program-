#include<stdio.h>
void main()
{
    int i=1,n,m=1;
    printf("enter the last number that is to be displayed\n");
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
        m*=i;

    }
     printf("%d\n",m);
}
