#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size=0;
    char i;
    char *ptr;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    ptr = (char*) malloc(size*sizeof(char));

    if(ptr == NULL)
    {
        printf("memory cannot be allocated");
        exit(0);
    }
    else
    {
    printf("Enter the string: ");
    scanf("%s", ptr);
    for(i=0; ptr[i]!='\0'; i++)
    {
        if(ptr[i]=='a' || ptr[i]=='e' || ptr[i]=='i' || ptr[i]=='o'
           || ptr[i]=='u' || ptr[i]=='A' || ptr[i]=='E' || ptr[i]=='I'
           || ptr[i]=='O' || ptr[i]=='U')
        {
            ptr[i] = ' ';
        }
    }
    }
    printf("\nNew String= %s\n", ptr);
    return 0;
}
