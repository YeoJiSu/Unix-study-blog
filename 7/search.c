#include "phone.h"

extern int size;
void searchByName()
{   
  BOOK *list;
  char name[10];
  printf("Enter a name to search: ");
  scanf("%s",name);

  int find=0;
  list = List;
  while (list != NULL){
    if (strcmp(list->Name, name)==0){
      printf("%s\t\t\t%s\n",list->Name,list->PhoneNumber);
      find=1;
      break;
    }
    list=list->link;
  }
  if (find!=1){
  printf("Oops! %s is not in the PhoneBook.\n",name);
  }
}
