
#include<stdio.h>
#include<conio.h>
void main()
{
    char *p,any[50];//Taking an array of 50 charecters
    int i;
    p=&any;//store the address of any
    printf("Enter a string:");//Take input from user
    gets(any);//store in any
    for(i=0; *(p+i)!=NULL;i++)//The string will start at 0 and end at NULL. And check the lowercases to convert to uppercase.
    {
        if(*(p+i)>=97 && *(p+i)<=122)
          {
           *(p+i)=*(p+i)-32; //The ASCII value will be increased by 32, which will convert into uppercase.
        }

}
printf("%s",any);
 getch ();
 }
