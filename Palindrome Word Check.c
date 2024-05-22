#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[25];
    int i, len;
    int flag = 0;

    printf("Enter a word:\n");
    scanf("%s", str);

    len=strlen(str);

    for(i=0;i < len ;i++)
    {
        if(str[i] != str[len-i-1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("%s is not a palindrome word.\n", str);
    }
    else
    {
        printf("%s is a palindrome word.\n", str);
    }
    return 0;
}

