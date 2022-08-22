// Write a Program to print unit digit of a given number
#include<stdio.h>
int main()
{
   
   int a,b;
   printf("Enter the number\n");
   scanf("%d",&a);
   b=a%10;
   printf("\nthe number is %d",a);
   printf("\nthe unit number is %d \n",b);
   return 0;
}