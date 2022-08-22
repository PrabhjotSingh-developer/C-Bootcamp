// 2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
int natural_num(int);
int main()
{
   int num;
    printf("Enter the Number for printing n natural number");
    scanf("%d",&num);

     natural_num(num);
}
int natural_num(int n)
{
     if(n>0)
     {
        printf(" %d ",n);
        natural_num(n-1);
     }
    if(n==0)
      return 1;
     
}