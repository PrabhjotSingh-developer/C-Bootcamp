// 6. Write a recursive function to print first N even natural numbers in reverse order

#include <stdio.h>
int odd_num(int);
int main()
{
    int num;
    printf("Enter the number for printing n even natural numbers in reverse order");
    scanf("%d", &num);
    odd_num(num);
}
int odd_num(int n)
{
    if (n >= 1)
    {
        printf("%d ", n*2);
        odd_num(n - 1);
    }
    if (n == 0)
        return 1;
}