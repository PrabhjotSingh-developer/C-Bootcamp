// Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>
int main()
{
    int num=89,a=0,b=1,c;
    for(int i=0;;i++)
    {
        c=a+b;
        // printf("%d",c);
        if(c==num)
        {
            printf("the number is present in fibannoci series");
            break;
        } 
        a=b;
        b=c;
    }
    // printf("the number is not present in fibonnaci series");
}
