#include<stdio.h>
void main()
{
    int i=1,n;
    printf("enter the last number that is to be displayed\n");
    scanf("%d",&n);
    for(i;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }
}
