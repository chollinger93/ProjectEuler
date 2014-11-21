/*
 * A selection of general calculations
 */

#include "euler.h"

bool isSquare(long x) {
	//printf("Square test for %i \n",x);
	long xs = x;
	int digit = 0;
	// only if the last digits are element of {0, 1, 4, 5, 6, 9}, the number can be a square
	// this can be proven by using the binomial formulas
	while (floor(log10(xs))) {
		digit = x % 10;
		xs /= 10;
	}

	if (digit == 0 || digit == 1 || digit == 4 || digit == 5 || digit == 6
			|| digit == 9) {
		double y = sqrt(x);
		// If there are no decimal places and y * y equals x, we found a square!
		if (y == floor(y)) {
			if (y * y == x)
				return true;
		}
	}
	return false;
}
