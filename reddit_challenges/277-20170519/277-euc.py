import sys

# recursive version
def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a%b)

def main():
    a = int(sys.argv[1])    # have to convert to an int, just like C
    b = int(sys.argv[2])
    c = gcd(a,b)            # store results in c
    print("gcd={}  num={}  den={}".format(c, a/c, b/c))

# account for the main() implementation
if __name__ == "__main__":
    main()
