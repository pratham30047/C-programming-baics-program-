#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter two numbers\n.");
    scanf("%d%d",&a,&b);

    printf("enter the desired operation\n");
     printf("1.addition\n");
      printf("2.subtraction\n");
       printf("3.multiplication\n");
        printf("4.division\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        d=a+b;
         printf("result=%d",d);

         case 2:
        d=a-b;
         printf("result=%d",d);

         case 3:
        d=a*b;
         printf("result=%d",d);
         break;
         case 4:
             if(b !=0){
        d=a/b;

         printf("result=%d",d);
         }
         else{
            printf("division by zero is not allowed");
         }
         break;
         default:
            printf("invalid choice");

    }










}
