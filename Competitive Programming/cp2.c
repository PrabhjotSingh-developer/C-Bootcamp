#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int nums[5] = {-1,1,0,-3,3},a[5];
    int i = 0,mul=1,count = 0;
    for(i=0;i<5;i++)
    {
      
     if(nums[i]!=0)
         mul = nums[i] * mul;

    }
    for(i=0;i<5;i++)
    {
         if(nums[i]==0)
           count++;  
    }
   
    for(i=0;i<5;i++)
    {
        if(nums[i]==0 && count==1)
           a[i] = mul;
        else
           a[i] = 0;  
        
        if(count == 0)
           a[i] = mul * pow(nums[i],-1);
    }
    for(i =0;i<5;i++)
        printf("%d  ",a[i]);
   
}