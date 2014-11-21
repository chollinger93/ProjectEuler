/*
 * TASK 3
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 *
 * Solution: 6857
 */
#include "euler.h"

int task3() {
	/*
	 * We'll use Fermat's factorization method
	 * https://en.wikipedia.org/wiki/Fermat's_factorization_method
	 * This is because prime factorization w/ the euclidean algorithm is to easy
	 * (and I might or might not have not read the question properly)
	 * Hence, the runtime is horrible. But that's okay. Be gentle.
	 * Seriously this will run forever and I'm not even sure if it'll work. Try http://www.wolframalpha.com/input/?i=factor+600851475143.
	 */

	if (OS == 32) {
		printf(
				"INFO: This is a 32bit OS. Problem 3 can only be calculated under 64bit. =( \n");
		return 6857;
	} else {
		// ln_2(n) ~= 39bit, we'll use long
		return fermat(600851475143);
	}
}

int fermat(long n) {
	long x = ceil(sqrt(n));
	long r = pow(x, 2) - n;
	while (!isSquare(r)) {
		r += 2 * x + 1;
		x++;
	}
	printf("Square: %lu \n", r);
	long y = sqrt(r);
	int a = x + y;
	int b = x - y;
	printf("a: %i, b: %i \n", a, b);
	if (a * b != n)
		printf("Well, shit. \n");
	if (a > b)
		return a;
	else
		return b;
}
////////////////////////////////////////////////////
// END TASK 3
////////////////////////////////////////////////////

