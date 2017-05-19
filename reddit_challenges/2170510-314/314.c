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
  int f[strlen(s)];
  int i, j, k, t;
  char sj;

  //Booth's algorithm
  strcpy(s, tmp);
  strcat(s, tmp);
  for(t=0; t<strlen(s); t++)
    f[t] = -1;
  k = 0;

  for(j=1; j <= strlen(s); j++) {
    sj = s[j];
    i = f[j-k-1];
    while(!(i == -1) && !(sj == s[k+i+1])) {
      if(sj < s[k+i+1]) {
        k = j-i-1;
      }
      i = f[i];
    }
    if(sj != s[k+i+1]) {
      if(sj < s[k]) {
        k = j;
      }
      f[j-k] = -1;
    }
    else {
      f[j-k] = i+1;
    }
  }

  //return k;





  printf("%d %s\n", k, s);



  return 0;
}
