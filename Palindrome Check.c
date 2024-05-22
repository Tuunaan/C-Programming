#include <stdio.h>
#include <stdlib.h>

int rev(int n, int temp)
{
    if (n == 0)
        return temp;
    else
    temp = (temp * 10) + (n % 10);
    rev(n / 10, temp);
}
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    int temp = rev(n, 0);

    if (temp == n)
       printf("The number is a Palindromic Number.\n");
    else
       printf("The number is not a Palindromic number.\n");
    return 0;
}
