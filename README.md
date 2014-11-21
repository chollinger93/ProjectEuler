Project Euler - Problems & Solutions in C
===

This is my private [Project Euler](http://projecteuler.net/), repository. They sort of ask you not to publish solutions, but if anyone can learn anything from OpenSource & public knowledge (including myself), hell, why not?

## ProjectEuler ##
A collection of mathematical problems meant to be solved via programming. Nerdy stuff par excellence. 

## About this ##
I'm just gonna upload all of my soltions here. Doing so, I'll improve my horribly poor knowledge of C, learn fancy algorithms & strategies and stuff. Dis cool.

That being said, these are **not** sample solutions by any means. Some of these solutions may be inefficent or just poorly solved. Feel free to contribute to solved problems!

## Math vs. Programming ##
All solutions are meant to be solved using the possibilities of mathematical & simple technical approches (arrays, memcmp, the works) only. 
A good example for my understanding of this bold statement is **Task 4: Largest palindrome**. Instead of using some String-splitting-magic, I went for a loop using modulo-operations. Instead of sizeof(), I went for log_10(x)+1... you get the drill. 

## Language ##
This is written in C. Okay? I really suck at C, tho. But then again, I own a book about C. Considering that I, however, also own a book about financial mathematics (mint-condition, only put on display in one of my bookshelves)... yeah. This.

## Starting point ##
Start in ´./src/ProjectEuler.c´ & change the task accordingly. Every problem has its own source-file (´ProblemN.c´), usually with explanations & comments at the beginning of the ´taskN()´ function.

## Run ##
I've tested this under 32bit Windows and 64bit Linux. Some problems aren't solvable w/ 32bit. I'll tell you.
´gcc ProjectEuler.c -o euler -lm´
´./euler´

## License ##
MIT