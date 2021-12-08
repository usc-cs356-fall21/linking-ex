#include <stdio.h>

int error = 0;
int val;

void doit(int *sum)
{
  int x, y;
  if(2 != scanf("%d %d", &x, &y)){
    error = 1;
    return;
  }
  *sum = x+y;
}
