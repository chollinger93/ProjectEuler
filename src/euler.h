#ifndef EULER_H_
#define EULER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Check windows
#if _WIN32 || _WIN64
#if _WIN64
#define OS 64
#else
#define OS 32
#endif
#define WIN 1
#define UNIX 0
#endif

// Check GCC
#if __GNUC__
#if __x86_64__ || __ppc64__
#define OS 64
#else
#define OS 32
#endif
#define WIN 0
#define UNIX 1
#endif

typedef int bool;
#define true 1
#define false 0

/**
 * PROBLEMS
 */
int task1();

int task2();
long fib_s(long n);

int task3(); // 64bit  // TODO
int fermat(long n);

int task4();
bool palim(int r);

int task5();
int divTest(int x);

int task6();

long task7(); // 64bit
long sieveOfEratosthenes(int limit, bool sum);

long task8(); // 64bit
long largestSum(char arr[]);

long task10(); // 64bit

/*
 * GENERAL FUNCTIONS
 */
bool isSquare(long r);

#endif /* EULER_H_ */
