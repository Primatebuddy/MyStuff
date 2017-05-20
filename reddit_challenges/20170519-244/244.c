#include <stdio.h>
#include <stdlib.h>

int gcd(int, int);

int main(int argc, char **argv) {

  printf("%d\n", gcd((int)argv[1], (int)argv[2]));

  return 0;
}

int gcd(int a, int b) {
  int i;

  for(i=2; i<a; i++) {
    if(a%i == 0 && b%i == 0)
      return i;
  }
  return 1;  
}
