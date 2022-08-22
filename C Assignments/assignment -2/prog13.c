// write program to take a three digit number from the user and rotate the digits by one position towards the right 
#include<stdio.h>
int main()
{
    int a,rem,cen,last;
    printf("Enter three digit number ");
    scanf("%d",&a);
    rem=a%10;
    cen=a/10;
    cen=cen%10;
    last=a/100;
    a=rem*100+cen*10+last;
   
    printf("the number is a %d",a);
    return 0;
}