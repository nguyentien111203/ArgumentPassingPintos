#include <stdio.h>
#include <syscall.h>
#include <stdlib.h>

void
test_echo(int argc, char **argv)
{
  int i;

  for (i = 0; i < argc; i++)
    printf ("%s ", argv[i]);
  printf ("\n");

}
