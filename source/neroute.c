/*  Copyright (c) 2025 valixxx1
 *  This code is licensed under MIT license (see LICENSE for details)
 */

#include "help.h"
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
  opterr = 0;

  char curopt;
  while ((curopt = getopt(argc, argv, "hv")) != -1) {
    switch (curopt) {
      case 'h':
        helpmenu();
        exit(0);
      case 'v':
        puts("Currently in development");
        exit(0);
      case '?':
        puts("Illegal option");
        exit(0);
    }
  }

  puts("TODO");
  return 0;
}
