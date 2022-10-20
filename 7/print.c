#include "phone.h"

extern int size;


void print() 
{
    BOOK* list = List;
  printf("\n");
  while (list !=NULL){
    printf("이름 : %s \t\t\t 전화번호: %s\n", list->Name, list->PhoneNumber);
    list=list->link;
  }
}


