//  Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int sum=0,i,n;
    printf("Enter the number for printing N natural number on the screen\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
      
    }
      printf("The sum of %d natural number is %d\n",n,sum);
    return 0;
}