/* File name: main.c */
#include <stdio.h>
#include <stdlib.h>
#include "sum.h"
#include "multi.h"
#include "div.h"

int main (int argc, char *argv[]){
	int c;
	
	printf("Shared Library Test------------\n");
	c = sum(1, 2);
	printf("The sum of 1 and 2 is %d\n", c);
	c = mult(2,3);
	c = divide(1,2);	
	return 1;
}
