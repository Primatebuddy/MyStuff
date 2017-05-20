#include <stdio.h>
#include <stdlib.h>

int gcd(int, int);

int main(int argc, char **argv) {
  int num = atoi(argv[1]);
  int den = atoi(argv[2]);
  int res = gcd(num, den);

  printf("%d %d\n", num/res, den/res);

  return 0;
}

int gcd(int a, int b) {
  int i;

  if((a-b) < 0)
    i=a;
  else
    i=b;

  for(i=a; i>1; i--) {
    if(a%i == 0 && b%i == 0)
      return i;
  }
  return 1;
}
