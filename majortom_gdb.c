//majortom_gdb.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t majortom_len (const char *s)
{
  return strlen (s);
}

int main (int argc, char *argv[])
{
  const char *a = "Ground Control to Major Tom";

  printf ("The number of characters in Major Tom string a = %d\n", majortom_len (a));

  exit (0);
}
