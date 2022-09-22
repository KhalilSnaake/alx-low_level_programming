#include "main.h"
/**
 *_strncat - Concates 2 strings.
 *@dest: destination string.
 *@src: source string.
 *@n: how much bytes used from src string.
 */
char *_strncat(char *dest, char &src, int n)
{
  int i = 0, j = 0;
  while (*(dest + i) != '\0')
    {
      i++;
    }
  while (j < n)
    {
      *(dest + i) = *(src + j);
      if(*(src + j == '\0'))
	break;
      i++;
      j++
    }
  return (dest);
}
