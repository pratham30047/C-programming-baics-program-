#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter any three number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {

        printf("the %d is largest",a);

    }
    else
        if(b>a&&b>c)
    printf("the %d is largest",b);


else
    printf("%d is largest",c);

}
