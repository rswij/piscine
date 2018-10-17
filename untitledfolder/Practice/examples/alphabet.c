
#include <stdlib.h>
#include <stdio.h>

int main() 
{
  int   i;
  int   j;
  char  alpha;
  char  **twod;
  
  i = 0;
  twod = (char**)malloc(sizeof(char*) * 2); 
    while(i < 2)
    {
      twod[i] = (char*)malloc(sizeof(char) * 27);
      i++;
    }
  
  
  alpha = 'A';         //Try to do it without alpha
  i = 0;
  j = 0;
  twod[0][0] = 'A';
  twod[1][0] = 'a';
  while (twod[i][j] != 'z')
  { 
    if (twod[i][j] == 'Z')
    {
        j++;
        twod[i][j] = '\0';
      i++;
      j = 0;
      alpha = 'a';
    }
    j++;
    alpha++;
    twod[i][j] = alpha;
  }
  j++;
  twod[i][j] = '\0';
  printf("row 1 %s\nrow 2 %s\n", twod[0], twod[1]);
  return 0;
}