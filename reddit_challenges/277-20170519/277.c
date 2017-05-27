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
  //check to see which of the params are smaller
  if((b-a) < 0)
    return gcd(b, a);

  //the meat of gcd, modular arithmetic!
  for(int i=a; i>1; i--) {
    if(a%i == 0 && b%i == 0)
      return i;
  }
  return 1;
}
