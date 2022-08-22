// 5. Write a recursive function to print first N even natural numbers
#include <stdio.h>
int odd_num(int);
int main()
{
    int num;
    printf("Enter the number for printing n even natural numbers");
    scanf("%d", &num);
    odd_num(num);
}
int odd_num(int n)
{
    if (n >= 1)
    {
        odd_num(n - 1);
        printf("%d ", n*2);
    }
    if (n == 0)
        return 1;
}