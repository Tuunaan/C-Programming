#include <stdio.h>
#include <stdlib.h>
int main()
{
int matchsticks = 21, user, computer;
while(matchsticks>=1)
{
printf("\nTotal Matchsticks: %d\n", matchsticks);
printf("If you pick the last Matchstick, you lose.\n");
printf("Pick up the matchsticks between 1 to 4: ");
scanf("%d", &user);
if(user>4)
{
printf("Invalid Entry");
break;
}
computer = 5 - user;
printf("\nTunan picks up the %d matchsticks.\n", computer);
matchsticks = matchsticks-user-computer;
if(matchsticks==1)
{printf("\nTunan Won...!!!\n");
break;}
}
return 0;
}
