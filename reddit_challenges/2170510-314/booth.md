## BREAKDOWN OF WIKIPEDIA'S BOOTH ALGORITHM

[Here](https://en.wikipedia.org/wiki/Lexicographically_minimal_string_rotation#Booth.27s_Algorithm) is a link to the Wikipedia page.

Here is the pseudocode:
```
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
```

## PARTS OF THE PSEUDOCODE

First we define the function to find LCS, and we call it "lcs".

`def lcs(S):`

Concatenate the string with itself to avoid modular arithmetic. As an exercise, create a version that uses modular arithmetic as well.

`S += S`

So this is sort of problematic for me. I assume this means it is setting the variable *f* to an array of length *len(s)* where each item in the array has value -1, but that is weird syntax.

`f = [-1] * len(S)`

Nothing special, set *k* = 0

`k = 0`

Ok so, similar to a C for block, e.g. for(j=1; j<len(S); j++){}

`for j in xrange(1,len(S)):`
