#include <stdio.h>

void doit();

int val;
int val2;

int main()
{
  val = 1;
  doit();
  val++;
  printf("val=%d\n", val);
  return 0;
}
