// write a program to find the greateast among three given number Print number once if the greatest njumber appears two or three times 
#include<stdio.h>
int main()
{
    int a=10,b=20,c=30;

    if(a>=b && a>=c)
    {
        printf("A is greater\n");
    }
    else if(b>=a && b>=c)
     {
        printf("B is greater\n");
    }
    else{
        printf("C is greater\n");
    }
    return 0;
}
