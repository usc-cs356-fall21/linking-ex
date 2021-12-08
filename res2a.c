#include <stdio.h>

void doit(int *sum);

// better: extern int error
int error; 
int val;

int main()
{
  doit(&val);
  printf("%d\n", val);
  return 0;
}
