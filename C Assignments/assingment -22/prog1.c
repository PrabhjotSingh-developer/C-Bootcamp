// 1. Define a function to input variable length string and store it in an array without memory wastage.
#include<stdio.h>
#include<stdlib.h>
char* func()
{
    char *ptr; 
    int len;
     printf("Enter the length of string\n");
     scanf("%d",&len);
     fflush(stdin);
     ptr = (char*)calloc(len,sizeof(char));
     printf("Enter the string\n");
     fgets(ptr,len,stdin);
     return ptr;

}
int main()
{
   char *x;
   int i;
   x = func();
   printf("\n-------Printing the string ------\n");
   printf("%s",x);
}