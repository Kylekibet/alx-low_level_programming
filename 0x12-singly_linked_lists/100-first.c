#include <stdio.h>

/**
  * premain - print before main
  */


void __attribute__((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\
			\nI bore my house upon my back!\n");
}