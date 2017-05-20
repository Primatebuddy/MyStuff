def gcd(a, b):

	if a-b < 0:
		x = a
	else:
		x = b

	for i in range(x, 2, -1):
		if a%i == 0 and b%i == 0:
			return i

	return 1

a = 1536
b = 78360
c = gcd(a,b)

print("gcd=", c, "num=", a/c, "den=", b/c)
