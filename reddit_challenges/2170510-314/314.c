/*******************************************************************************
def lcs(S):
    S += S      # Concatenate string to it self to avoid modular arithmetic
    f = [-1] * len(S)     # Failure function
    k = 0       # Least rotation of string found so far
    for j in xrange(1,len(S)):
        sj = S[j]
        i = f[j-k-1]
        while i != -1 and sj != S[k+i+1]:
            if sj < S[k+i+1]:
                k = j-i-1
            i = f[i]
        if sj != S[k+i+1]: # if sj != S[k+i+1], then i == -1
            if sj < S[k]: # k+i+1 = k
                k = j
            f[j-k] = -1
        else:
            f[j-k] = i+1
    return k
*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char const *tmp = argv[1];
  char s[strlen(tmp)];
  int f[(-1) * strlen(s)];
  int i, j, k;
  char sj;

  //Booth's algorithm
  strcpy(s, tmp);
  strcat(s, tmp);
  k = 0;

  for(j=1; j<=strlen(s); j++) {
    sj = s[j];

  }





  printf("%s\n", s);



  return 0;
}
