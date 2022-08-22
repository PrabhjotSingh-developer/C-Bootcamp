// 1. Write a recursive function to print first N natural numbers
#include<stdio.h>
int natural_num(int);
int main()
{
   int num;
    printf("Enter the Number for printing n natural nmber");
    scanf("%d",&num);

     natural_num(num);
}
int natural_num(int n)
{
     if(n>0)
     {
        natural_num(n-1);
        printf(" %d ",n);
     }
    if(n==0)
      return 1;
     
}
