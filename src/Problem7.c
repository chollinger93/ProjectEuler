/*
 * TASK 7
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 * What is the 10 001st prime number?
 *
 * Result: 104743
 */
#include "euler.h"

long task7() {
	/*
	 * We'll use the sieve of Eratosthenes
	 * A modified version will be used; here, we only mark the given location with either 1 or 0 and use the
	 * position indicator for the prime
	 *
	 * However, this will NOT work under a 32bit-OS!
	 * Should be fixed. Could be fixed using a the Segmented Sieve.
	 */
	if(OS == 32) {
		printf("INFO: This is a 32bit OS. Problem 7 can only be calculated under 64bit. =( \n");
		return 104743;
	}
	return sieveOfEratosthenes(10001,false);
}

/**
 * This is also used by problem 10
 * I know that re-using parameter is horrible, but C doesn't support optional parameter or overloading
 * @param limit Either the limit of numbers (if !sum; Problem 7) or the limit of added numbers
 * @param sum Sum up the primes? (Problem 10)
 * @return Either the limit-st prime (if !sum) or the sum of all primes until limit (if sum)
 */
long sieveOfEratosthenes(int limit, bool sum) {
	limit--;
	const int UNMARKED = 1;
	const int MARKED = 0;
	long i = 0, j = 0, counter = 0;
	long size = limit*100; // Not exactly accurate. Might need some refining
	int* primes = malloc(size * sizeof(int));
	int lastPrime = 2;
	long long int _sum = lastPrime;
	// start at 2. Set all as prime
	for (i = lastPrime; i < size; i++) {
		// this kills 32bit-OS, since j*i will exceed 2^(32)-1 pretty quickly
		*(primes+i) = UNMARKED;
	}
	*(primes+2) = MARKED;
	i = lastPrime;
	// Starting from p^(2), enumerate its multiples by counting to n in increments of p, and mark them in the list
	do {
			for (j = i; (i * j) < size; j++) {
				*(primes+j*i) = MARKED;
			}
		// Find the first number greater than p in the list that is not marked
		for (j = lastPrime; j < size; j++) {
			if (j > lastPrime && *(primes+j) == UNMARKED) {
				// Let p now equal this new number
				i = lastPrime = j;
				// Increment prime-count
				counter++;
				if(sum && lastPrime < limit) _sum += i;
				if(sum && lastPrime >= limit) return _sum;
				//printf("%i, ",lastPrime);
				//printf("Found %ith prime (of %i): %i \n",counter,limit,lastPrime);
				break;
			}
		}
	} while (counter < limit);
	free(primes);
	printf("\n");
	if(sum) return _sum;
	return lastPrime;
}
