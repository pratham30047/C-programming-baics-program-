#include<stdio.h>
void main()
{
    float a,b,c,d;
    printf("enter gross sale\n");
    scanf("%f",&a);
    if(a>20000)
    {
        b=0.15*a;

        d=a-b;
        printf("net sale=%f",d);

    }
    else
    if(10000<a<20000)
{
        b=0.1*a;

        d=a-b;
        printf("net sale=%f",d);


}
else{
        b=0.05*a;
        d=a-b;
    printf("net sale=%f",d);


}
}
