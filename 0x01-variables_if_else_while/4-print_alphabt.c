#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  char i;

  for (i = 'a'; i <= 'z'; ++i)
    if (i != 'e' && i != 'q')
      putchar(i);
  putchar('\n');
  return (0);
}
