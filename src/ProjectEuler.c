/*
 * Copyright (c) 2014 Christian Hollinger <christian.hollinger@otter-in-a-suit.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "euler.h"

const int PLATFORM = sizeof(long) * 8;
int main(int argc, char *argv[]) {
	long result = 0;
	printf("Welcome to Project Euler Solutions in C. Your platform: %ibit \n",
			PLATFORM);
	printf("Starting problem... \n");

	// Change this
	// TODO: control via command line / stdin
	result = task8();

	if(result)printf("Result is %lu!", result);
	return EXIT_SUCCESS;
}

/**
 * HISTORY
 * No.	| Solution  	| Date
 * 1 	| 233168		| 2014-11-07
 * 2 	| 4613732		| 2014-11-07
 * 3 	| 6857			| 2014-11-14
 * 4 	| 906609		| 2014-11-13
 * 5 	| 232792560		| 2014-11-14
 * 6 	| 25164150		| 2014-11-16
 * 7 	| 104743		| 2014-11-21
 * 8	| 23514624000	| 2014-11-21
 * 9	|				|
 * 10	| 142913828922	| 2014-11-21
 */
