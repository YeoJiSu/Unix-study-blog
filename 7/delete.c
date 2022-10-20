#include "phone.h"

extern int size;
void deleteByName()
{
  BOOK *list, *prev;
  char name[10];
  printf("Enter a name to delete: ");
  scanf("%s",name);
  
  int find =0;
  list= List;
  prev= NULL;
  while (list != NULL){
    if (strcmp(name,list->Name)==0){
      find=1;
      if(prev==NULL) List= list->link;
      else prev->link = list->link;
      free(list); // 삭제
      printf("%s is deleted...\n",name);
      size-=1;
      break;
    }
    if (find==0){
    printf("Oops! %s is not in the PhoneBook.\n",name);
    break;
  }
  
  }
}

