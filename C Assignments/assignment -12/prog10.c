// 10. Write a recursive function to print reverse of a given number
#include <stdio.h>
int reverse_num(int);
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d", &num);
    reverse_num(num);
}
int reverse_num(int n)
{
    if (n > 0)
    {
        printf("%d", n % 10);
        reverse_num(n / 10);
    }
    if (n == 0)
        return 1;
}