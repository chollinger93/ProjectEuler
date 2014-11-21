/*
 * TASK 5
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 *
 * Result: 232792560
 */
#include "euler.h"

int task5(){
	/**
	 * Pretty straightforward
	 * Recursion kills C, btw. Literally stack overflow.
	 */
	return divTest(20);
}

int divTest(limit){
	int x = 1, c = 0, i;
	for(i = 1; i <= limit; i++){
		if(x % i != 0) {
			x++;
			i = 1;
			c = 0;
		}else {
			c++;
			if(c==limit) break;
		}
	}
	return x;
}
