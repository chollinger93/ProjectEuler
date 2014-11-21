/*
 * TASK 10
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * Find the sum of all the primes below two million.
 *
 * Result: 142913828922
 */
#include "euler.h"

long task10(){
	/**
	 * Remember problem 7?
	 * We'll use the same algorithm
	 */

	if(OS == 32) {
			printf("INFO: This is a 32bit OS. Problem 10 can only be calculated under 64bit. =( \n");
			return -1;
		}
	return sieveOfEratosthenes(2000000,true);
}
