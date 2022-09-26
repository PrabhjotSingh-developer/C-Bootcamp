#include<stdio.h>
#include<conio.h>
int isPalindrome(int x){
     int og_num = x;
     int rem,flag = 0;
     long rev = 0;
     
     if(x>=0)
     {
        for(int i=0;x>0;i++ )
        {
           rem = x %10;
           rev =(rev *10) + rem;
           x = x/10;
        }
        flag = 1;
     }
     
    
    if(flag == 1 && og_num == rev)
       return 1;
    else
       return 0;

}
int main()
{
     if(isPalindrome(123))
     {
         printf("Palindrome Number\n");
     }
     else
       printf("Not Palindrome\n");
}
