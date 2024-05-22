#include <stdio.h>

int prime(int, int);

int main()
{
    int num, ind;
    printf("Enter a number: ");
    scanf("%d", &num);
    ind = prime(num, num/2);
    if (ind==1)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }
    return 0;
}

int prime(int num, int i)
{
    if (i==1)
    {
        return 1;
    }
    else
    {
       if (num%i==0)
       {
         return 0;
       }
       else
       {
         return prime(num, i-1);
       }
    }
}
