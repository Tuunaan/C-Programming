#include <stdio.h>
#include <stdlib.h>

int digsum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum; // Return the sum instead of printing it
}

int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    printf("Sum of digits: %d\n", digsum(a)); // Print the sum here
    return 0;
}
