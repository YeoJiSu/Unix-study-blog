#include "phone.h"

extern int size;
void print();

void bubblesort(BOOK * list){
	int i, j;
	BOOK * temp1;
	BOOK * temp2;
	char name[10];
	char phone[13];
	
	
    for(i=0; i<size-1; i++)
    {
    	temp1=list;
		temp2=list->link;
        for(j=0; j<size-i-1; j++)
        {
            if(strcmp(temp1->Name, temp2->Name)>0){
            	strcpy(name,temp1->Name);
            	strcpy(temp1->Name,temp2->Name);
            	strcpy(temp2->Name, name);
            	strcpy(phone,temp1->PhoneNumber);
            	strcpy(temp1->PhoneNumber,temp2->PhoneNumber);
            	strcpy(temp2->PhoneNumber, phone);
            	
			}
			temp1=temp2;
			temp2=temp2->link;
        }
        
    }
}

void sort(){
	
  printf("Sort fuction is called\n");
  printf("\nBefore sorting\n");
  print();

  bubblesort(List);
  printf("\nAfter sorting\n");
  print();
  
}
