#include <stdio.h>

int x=1, z=0;
static int y=5;

static int foo(int bar)
{
  x += bar;
  y--; z++;
  return x;
}

 int main(int argc, char** argv)
 {
   printf("%d\n", foo(3));
   return 0;
 }

