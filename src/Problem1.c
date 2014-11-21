/**
 * TASK 1
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 * Result: 233168
 */
#include "euler.h"

int task1() {
	/*
	 * Not much to add here.
	 */
	int s = 0;
	int x = 0;
	for (x = 1; x < 1000; x++) {
		if (x % 3 == 0 || x % 5 == 0) {
			s += x;
		}
	}
	return s;
}
