#include<stdio.h>
void main()
{
    float a,b,c,d;
    printf("enter gross salary\n");
    scanf("%f",&a);
    if(a>10000)
    {
        b=0.1*a;
        c=0.03*a;
        d=(a+c)-b;
        printf("net salary=%f",d);

    }
    else
    if(5000<a<10000)
{
        b=0.07*a;
        c=0.02*a;
        d=(a+c)-b;
        printf("net salary=%f",d);


}
else
    printf("enter a valid value");


}
