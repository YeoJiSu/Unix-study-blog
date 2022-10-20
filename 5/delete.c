#include "phone.h"
#include <stdio.h>
#include <string.h>
extern int size;
void deleteByName()
{
    int i,j;
    int find=0;
    char name[10];
    printf("Enter a name to delete: ");
    scanf("%s",name);
    for (i=0; i<size; i++){
      if(strcmp(name,PhoneBook[i].Name)==0){
        find=1;
        for (j=i;j<size-1;j++){
          PhoneBook[j]=PhoneBook[j+1];
        }
        strcpy(PhoneBook[size-1].Name,"");
        strcpy(PhoneBook[size-1].PhoneNumber,"");
        printf("%s",name);
        printf(" is deleted...\n");
        size-=1;
      }
    }
    if (find==0){
      printf("Oops! ");
      printf("%s",name);
      printf(" is not in the PhoneBook.\n");
    }
}
