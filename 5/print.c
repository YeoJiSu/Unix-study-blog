#include "phone.h"
#include <stdio.h>
#include <string.h>
extern int size;
void printAll()
{	
	int i;
    printf("<< Display all contacts in the PhoneBook >>\n");
    for(i=0; i<size; i++){
      printf("%s\t\t",PhoneBook[i].Name);
      printf("%s\n",PhoneBook[i].PhoneNumber);
    }
}
