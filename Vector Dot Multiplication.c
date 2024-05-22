#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b,c,d, e, f, ans;
printf("Enter Vector One:\n");
scanf("%d%d%d", &a, &b, &c);
printf("Enter Vector Two:\n");
scanf("%d%d%d", &d, &e, &f);
ans=((a*d)+(b*e)+(c*f));
printf("The dot multiplication of these vectors: %d", &ans);

}
