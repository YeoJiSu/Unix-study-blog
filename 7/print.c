#include "phone.h"

extern int size;


void print() 
{
    BOOK* list = List;
  printf("\n");
  while (list !=NULL){
    printf("�̸� : %s \t\t\t ��ȭ��ȣ: %s\n", list->Name, list->PhoneNumber);
    list=list->link;
  }
}


