char done;
int sum(int *a, int n)
{
  int i, s = 0;
  for(i=0; i < n; i++){
    s += a[i];
  }
  done = 1;
  return s;
}
