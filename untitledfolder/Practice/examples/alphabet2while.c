#include <stdlib.h>
#include <stdio.h>

typedef struct ij_integers
{
  int   i;
  int   j;
  int   m;
  int   n;
}              counters;

int main() 
{
  counters a;
  char  alpha;
  char  **twod;
  
  a.i = 0;
  twod = (char**)malloc(sizeof(char*) * 2); 
    while(a.i < 2)
    {
      twod[a.i] = (char*)malloc(sizeof(char) * 27);
      a.i++;
    }
  
  
  alpha = 'A';         //Try to do it without alpha
  a.i = 0;
  twod[0][0] = 'A';
  twod[1][0] = 'a';
  while (a.i < 2)
  { 
    a.j = 0;
    while (a.j < 25)
    {
      a.j++;
      alpha++;
      twod[a.i][a.j] = alpha;
    }
    twod[a.i][a.j + 1] = '\0';
    a.i++;
    alpha = 'a';
  }
  printf("row 1 %s\nrow 2 %s\n", twod[0], twod[1]);
  return 0;
}