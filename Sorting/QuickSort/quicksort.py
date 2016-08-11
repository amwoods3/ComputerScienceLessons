import random
def quick_sort_(ar, left, right):
	if right - left < 1:
		return ar
	elif right - left == 1:
		if ar[right] < ar[left]:
			ar[right], ar[left] = ar[left], ar[right]
	pivot = random.randrange(left, right+1)
	i, j = left, right-1
	ar[right], ar[pivot] = ar[pivot], ar[right]
	pivot = right
	while i <= j:
		if ar[i] <= ar[pivot]:
			i += 1
		else:
			ar[i], ar[j] = ar[j], ar[i]
			j -= 1
	ar[pivot], ar[i] = ar[i], ar[pivot]
	quick_sort_(ar, left, i - 1)
	quick_sort_(ar, i+1, right)
	return ar
	
def quick_sort(ar):
	if isinstance(ar, list):
		return quick_sort_(ar, 0, len(ar)-1)


ar = [random.randrange(429507) for i in range(253506)]
ar2 = list(ar)
ar2.sort()
if (ar == ar2):
	print 'fail'
else:
	print 'pass'
quick_sort(ar)

if (ar2 == ar):
	print 'pass'
else:
	print 'fail'