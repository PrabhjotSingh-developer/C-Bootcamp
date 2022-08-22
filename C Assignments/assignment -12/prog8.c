//8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
int binary(int);
int main()
{
  binary(9);
}
int binary(int n)
{
    if(n>0)
    {
        binary(n/2); 
        printf("%d",n%2);
    }
    if(n==0)
      return 1;
}
