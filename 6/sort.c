#include "phone.h"
#include <stdio.h>
#include <string.h>
extern int size;


int contactCmpr(const void*, int, int);
int contactSwap(void*, int, int);
void printArray(void *arr, int size);
typedef int (*cmp)(const void*, int, int);
typedef int (*swap)(void*, int, int);



void sortPhoneBook(void *A, int size, cmp cfn, swap sfn)
{
    int i, j;
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-i-1; j++)
        {
            if(cfn(A, j,j+1)>0)
                sfn(A,j,j+1);
        }
    }
}


int contactCmpr(const void* arr, int i, int j)
{
    
    if (strcmp(((Contact*)arr+i)->Name , ((Contact*)arr+j)->Name)>0) return 1;
    else return 0;
}



int contactSwap(void* arr, int i, int j)
{
	void *vp;
  	vp= arr;
  	Contact tmp;
	tmp=*((Contact*)vp+i);
  	*((Contact*)vp+i)=*((Contact*)vp+j);
  	*((Contact*)vp+j)= tmp;
    return 1;
}
void sort()
{
	printf("Sort fuction is called\n");
	printf("Before sorting\n");
	printArray(PhoneBook,size);
	sortPhoneBook(PhoneBook,size,contactCmpr, contactSwap);
	printf("After sorting\n");
	printArray(PhoneBook,size);
}
