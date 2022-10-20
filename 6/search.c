#include "phone.h"
#include <stdio.h>
#include <string.h>
extern int size;
void searchByName()
{   
    
    int i,find=0;
    char name[10];
    char phone[14];
    printf("Enter a name to search: ");
    scanf("%s",name);
    for (i=0; i<size; i++){
      if(strcmp(name,PhoneBook[i].Name)==0){
        find=1;
        strcpy(phone,PhoneBook[i].PhoneNumber);
      }
    }
    if (find==1){
      printf("%s\t\t\t",name);
      printf("%s\n",phone);
    }
    else{
      printf("Oops! ");
      printf("%s",name);
      printf(" is not in the PhoneBook.\n");
    } 
}
