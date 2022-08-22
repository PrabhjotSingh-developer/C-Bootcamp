// 9. Write a recursive function to print octal of a given decimal number
#include <stdio.h>
int octal_num(int);
int main()
{
    int num;
    printf("Enter the number for conversion of decimal to binary");
    scanf("%d", &num);
    octal_num(num);
}
int octal_num(int n)
{
    if (n > 0)
    {
        octal_num(n / 8);
        printf("%d", n % 8);
    }
    if (n == 0)
        return 1;
}