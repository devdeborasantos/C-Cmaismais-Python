def éPrimo(k):
	if k <= 1:
		return False
	d = 2
	while d * d <= k:
		if k % d == 0:
			return False
		d = d + 1
	return True

def maior_primo(n):
	primo = None
	k = n
	while k >= 2:
		if éPrimo(k):
			primo = k
			break;
		k = k - 1
	return primo




