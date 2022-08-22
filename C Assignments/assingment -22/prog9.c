// 9. Write a program to allocate memory dynamically of the size in bytes entered by the
// user. Also handle the case when memory allocation is failed.
#include<stdio.h>
int main()
{
    int *ptr,n;
    printf("Enter the size in bytes");
    scanf("%d",&n);
    ptr = (void*)malloc(n);
}
