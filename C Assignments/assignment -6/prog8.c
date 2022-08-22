// Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
    int num=7,i;
    printf("enter the nubmer");
    scanf("%d",&num);
  
    for(i=2;i<num;i++)
    {
  
        if(num%i==0)
        {
           break;
        }
       
    }
    if(i==7)
    {
        printf("It is prime number");
    }
    else{
        printf("It is not prime number");

    }
    
    
}
