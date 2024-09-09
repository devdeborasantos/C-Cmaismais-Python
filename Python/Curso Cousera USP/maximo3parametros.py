def maximo(x, y, z):
	if x > y and x > z:
		return x
	elif z > x and z > y:
		return z
	else:
		return y