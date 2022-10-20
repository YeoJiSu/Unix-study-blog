#include "phone.h"
#include <stdio.h>
#include <string.h>
extern int size;


void printArray(void *arr, int size)
{
    int i;
    void *vp;
    vp= arr;
    for(i=0; i<size; i++)
    {
        printf("Addr vp:%p\t", (Contact*)vp+i);
        printf("name:%s\t phone:%s\n", ((Contact*)vp+i)->Name, ((Contact*)vp+i)->PhoneNumber);
    }
    printf("\n");
}

void print() 
{
    printf("Print all contants in the PhoneBook\n");
	printArray(PhoneBook, size);
}


