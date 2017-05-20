import sys

def gcd(a, b):

    # find out which is larger and set the range top var
	if a-b < 0:
		x = a
	else:
		x = b

    # modular arithmetic again! I have an unreasonable attraction here...
	for i in range(x, 2, -1):
		if a%i == 0 and b%i == 0:
			return i
	return 1

def main():
    a = int(sys.argv[1])    # have to convert to an int, just like C
    b = int(sys.argv[2])
    c = gcd(a,b)            # store results in c
    print("gcd={}  num={}  den={}".format(c, a/c, b/c))

# account for the main() implementation
if __name__ == "__main__":
    main()
