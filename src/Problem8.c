/*
 * TASK 8
 * The four adjacent digits in the 1000-digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832.

 73167176531330624919225119674426574742355349194934
 96983520312774506326239578318016984801869478851843
 85861560789112949495459501737958331952853208805511
 12540698747158523863050715693290963295227443043557
 66896648950445244523161731856403098711121722383113
 62229893423380308135336276614282806444486645238749
 30358907296290491560440772390713810515859307960866
 70172427121883998797908792274921901699720888093776
 65727333001053367881220235421809751254540594752243
 52584907711670556013604839586446706324415722155397
 53697817977846174064955149290862569321978468622482
 83972241375657056057490261407972968652414535100474
 82166370484403199890008895243450658541227588666881
 16427171479924442928230863465674813919123162824586
 17866458359124566529476545682848912883142607690042
 24219022671055626321111109370544217506941658960408
 07198403850962455444362981230987879927244284909188
 84580156166097919133875499200524063689912560717606
 05886116467109405077541002256983155200055935729725
 71636269561882670428252483600823257530420752963450

 * Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?
 *
 * Result: 23514624000
 */
#include "euler.h"

long task8() {
	/*
	 * The nasty thing about this problem is apparently the fact that this is a 1,000 digit number
	 * And we're using C.
	 * Since we won't have access to regular old strings, we'll use basic I/O to read the content from a file
	 * Make sure you remove line breaks, otherwise you'll have unusable bytes in your file (in this case, 0xD0A)
	 * In *nix-systems, we could probably also pipe it into this program or use it as an argument, but whatever
	 */

	if (OS == 32) {
		printf(
				"INFO: This is a 32bit OS. Problem 8 can only be calculated under 64bit. =( \n");
		return 0;
	}

	// file-pointer & local storage. apparently, we won't be using any length-checking b/c fuck it
	FILE *fp;
	char* arr = malloc(999 * sizeof(char));
	// Prototype: FILE * fopen (const char *filename, const char *opentype) / r = read-only
	if (WIN)
		fp = fopen("src\\io\\p8input", "r");
	else if (UNIX)
		fp = fopen("./io/p8input", "r");

	else
		return -1;
	if (!fp) {
		perror("Error opening file");
		printf("\n");
		return (-1);
	}
	// Prototype: char * fgets (char *s, int count, FILE *stream)
	// can return a nasty NULL-pointer
	if (fgets(arr, 999, fp)) {
		puts(arr);
		// 55 51 ...
		// --> 7 3
	} else {
		printf("Error in fgets()");
	}
	fclose(fp);

	// Result
	return largestSum(arr);
}
// 364
long largestSum(char* p) {
	const int search = 13;
	int i, iOf = 0, cur = 0, pos = 0;
	long long int product = 1, max = 0;
	do {
		cur = 0;
		for (i = 0; i < search; i++) {
			pos = i + iOf;
			cur = (*(p + pos) - '0');
			if (cur >= 0)
				product *= cur;
		}
		if (product > max)
			max = product;
		product = 1;
		iOf++;
	} while ((pos + 1) <= 999);
	return max;
}
