#include <stdio.h>
#include <stdlib.h>

int gcd(int, int);

int main(int argc, char **argv) {
  int num = atoi(argv[1]);  //casting doesn't work here, so use atoi
  int den = atoi(argv[2]);
  int res = gcd(num, den);  //store the results

  printf("%d %d\n", num/res, den/res);

  return 0;
}

int gcd(int a, int b) {
  int i;

  //check to see which of the params are smaller, and set i to that
  if((a-b) < 0)
    i=a;
  else
    i=b;

  //the meat of gcd, modular arithmetic!
  for(i=a; i>1; i--) {
    if(a%i == 0 && b%i == 0)
      return i;
  }
  return 1;
}
