#include<stdio.h>
void main()
{
    int i=1,n,m=0;
    printf("enter the last number that is to be displayed\n");
    scanf("%d",&n);
    for(i;i<=n;i=i+2)
    {
        m+=i;

    }
     printf("%d\n",m);
}
