#include <stdio.h>

int data[1000];
int vals[10] = {1,2,3,4,5,6,7,8,9,10};

int main()
{
  int i;
  printf("Hello world\n");
  for(i=0; i < 1000; i++) data[i] += vals[i%10];
  printf("%d", data[999]);
  return 0;
}
