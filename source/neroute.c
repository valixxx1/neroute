/*  Copyright (c) 2025 valixxx1
 *  This code is licensed under MIT license (see LICENSE for details)
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
  opterr = 0;

  char curopt;
  while ((curopt = getopt(argc, argv, "hv")) != -1) {
    switch (curopt) {
      case 'h':
        puts("neroute - utility for displaying possible routes and transit delays of IP packets\n\
Options:\n\
  -h\n\
    Print this help menu\n\
  -v\n\
    Print version of neroute");
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
