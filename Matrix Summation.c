#include <stdio.h>
#include <stdlib.h>

int main(void)
{ int size = 2, i, j;
  int *a, *b, *c;
  a =(int*) malloc(size*size*sizeof(int));
  b =(int*) malloc(size*size*sizeof(int));
  c =(int*) malloc(size*size*sizeof(int));

  printf("Enter Matrix One:\n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {scanf("%d", (a + size * i + j));}
  }
  printf("Enter Matrix Two:\n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {scanf("%d", (b+size*i+j));}
  }
printf("Addition result:\n");

  for(i=0; i<size; i++)
  {
    for (j=0; j<size; j++)
    {*(c+size*i+j)=*(a+size*i+j)+*(b+size*i+j);}
  }

  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {printf("%d ", *(c+size*i+j));}
    printf("\n");
  }

  return 0;
}
