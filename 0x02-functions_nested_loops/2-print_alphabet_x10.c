#include "main.h"
/**
 * main : Print alphabet 10 times
 *
 * Return : 0 for success
 *
 */
int main (void)
{
  int i, j;
  for (i = 0; i < 9; i++)
    {
      for(j = 'a'; j <= 'z'; j++)
	{
	  _putchar(j);
	}
      _putchar('\n');
    }
  return(0);
}
