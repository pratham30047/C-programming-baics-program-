#include<stdio.h>
void main()
{
    int num,digit,reverse=0,m;
      printf("enter a number\t");
    scanf("%d",&num);
    m=num;
    while(num>0)
    {

        digit=num%10;
        num=num/10;
        reverse=reverse*10+digit;


    }
printf("%d\n",reverse);
if(m==reverse)
printf("entered number is palindrom");

}
