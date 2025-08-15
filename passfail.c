#include<stdio.h>
void main()
{
    float a,b,c,d,total,avg;
    printf("enter marks\n");
    scanf("%f%f%f",&a,&b,&c);
    total=a+b+c;
    avg=total/3;
    if(a>35&&b>35&&c>35){
    if(avg>=70)
    {
        printf("distinction");
    }
    else
    if(avg>=60)
{

        printf("first");


}
else
    if(avg>=50)
{

        printf("second");
}
else
    if(avg>=35)
{

        printf("third class");
}
else
    printf("fail");


}
else
    printf("fail");


}
