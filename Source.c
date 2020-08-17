// ------------------------------------ -
// Bello Abarchi
// date of 03/31/2017
//recursion
//-------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define PAUSE system("pause")
#define CLS system("cls")
#define FLUSH myFlush()
void recurse(int count, int i);
void recurse(int count, int i)
{
	if (count >= 1) { printf(" %i. x equals %i\n", i, count); }
	else if (count < 1) { return 0; }
	recurse(count - 1, i + 1);
	PAUSE;
}

main() {
	int count = 20;
	int i = 1;
	recurse(count, i);
	return 0;
	PAUSE;
}
