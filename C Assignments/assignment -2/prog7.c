// write a program to find the position of first 1 in LSB 
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,result ;
    a=10;
   int count=0;
   while(a!=0)
   {
      result=a&1;
      count++;
      if(result==1)
      {
        break;
      }   
      a=a>>1;
   }
   printf("The position of first 1 Lsb is %d",count);
}