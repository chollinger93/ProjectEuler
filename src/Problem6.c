/*
 * TASK 6
 * The sum of the squares of the first ten natural numbers is,
 * 1^(2) + 2^(2) + ... + 10^(2) = 385
 * The square of the sum of the first ten natural numbers is,
 * (1 + 2 + ... + 10)^(2) = 552 = 3025
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 *
 * Result: 25164150
 */
#include "euler.h"

int task6() {
	// Not much to do here
	const int limit = 100;
	int i, l1 = 0, l2 = 0;
	for (i = 1; i <= limit; i++) {
		l1 += pow(i,2);
	}
	for (i = 1; i <= limit; i++) {
		l2 += i;
	}
	l2 = pow(l2,2);
	printf("Sum1: %i, Sum2: %i \n", l1, l2);
	return (l2 - l1);
}
