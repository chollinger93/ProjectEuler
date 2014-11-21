/*
 * TASK 4
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 *
 * Solution: 906609
 */
#include "euler.h"

bool swTX = false;
int task4() {
	/**
	 * This one is a clever one. We're looking for a palindrome - so we'll have to check every combination for three-digits numbers
	 */
	int x = 999, y = 999;
	int r = 0; // max 998,001
	int max = 0;
	for (x = 999; x > 100; x--) {
		for (y = x; y > 100; y--) {
			//printf("x %i / y %i \n\n", x, y);
			r = x * y;
			if (palim(r)) {
				if (max < r) {
					max = r;
					printf("Palindrome found: %i ! \n", max);
				}
			}
		}
	}
	return max;
}

bool palim(int r) {
	int size = floor(log10(r)) + 1;
	int hS = size / 2;
	int c1 = hS - 1, c2 = 0, digit = 0, cS = size;
	int one[hS];
	int two[hS];
	memset(one, 0, hS * sizeof(int));
	memset(two, 0, hS * sizeof(int));
	//printf("Start %i \n", r);
	//printf("Size: %i, Array: %i \n", size, sizeof(one) / sizeof(int));
	while (cS >= 0) {
		digit = r % 10;
		r /= 10;
		if (c1 >= 0) {
			one[c1] = digit;
			c1--;
		} else {
			two[c2] = digit;
			c2++;
		}
		cS = (floor(log10(r)) == 0) ? floor(log10(r)) : floor(log10(r)) + 1;
	}

	if (memcmp(one, two, sizeof(one)) == 0)
		return true;
	else
		return false;
}
