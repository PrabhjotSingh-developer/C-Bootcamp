// Write a recursive function to print squares of first N natural numbers
#include <stdio.h>
int odd_num(int);
int main()
{
    int num;
    printf("Enter the number for printing Squares of N numbers");;
    scanf("%d", &num);
    odd_num(num);
}
int odd_num(int n)
{
    if (n >= 1)
    {
        odd_num(n - 1);
        printf("Square of %d = %d \n",n,n*n);
    }
    if (n == 0)
        return 1;
}
