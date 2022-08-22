// 7. Write a program to calculate the difference between two time periods.
#include<stdio.h>
struct time
{
    int hh,mm,sec;
};
int main()
{
  struct time t1,t2,t3;
  printf("Enter the time Period first\n");
   scanf("%d%d%d",&t1.hh,&t1.mm,&t1.sec);
    printf("Enter the time Period Second\n");
   scanf("%d%d%d",&t2.hh,&t2.mm,&t2.sec);
   int f1,f2,f3;
   f1 = (t1.hh*60)+t1.mm+(t1.sec/60);
   f2 = (t2.hh*60)+t2.mm+(t2.sec/60);
   f3=f2-f1;
    printf("%d ",f3);
   if(f3<0)
      f3*-1;
   printf("Time period is \n");
   t3.hh = f3/60;
   t3.mm=f3 % 60;
   printf("%d : %d\n",t3.hh,t3.mm);
}