#include "phone.h"

extern int size;
void registerPhoneData()
{   
  if (size>=MAX){
    printf("더이상 추가할 수 없습니다.\n");
  }
  else {
    int time=1;
    char pass[]="qqq";
    char password[11];

    char name_t[10]; 
    char phone_t[13];
    BOOK *list, *prev, *p;
    list =List;
    prev = NULL;
    while( list != NULL ) { 
      prev = list;
      list = list->link;
    }

    while (time <5){

      printf("Password: ");
      scanf("%s", password);

      if (strcmp(pass,password)==0){  
        printf("New User Name:");
        scanf("%s", name_t);
        printf("PhoneNumber:");
        scanf("%s", phone_t);
        
        p = (BOOK *)malloc(sizeof(BOOK)); 
        strcpy(p->Name,name_t);
        strcpy(p->PhoneNumber,phone_t);

        if (prev == NULL) List = p;
        else prev->link = p;
        p->link=NULL;
        prev = p;

        size+=1;
        printf("Registered...\n");
        break;
      }
      else{
        if (time==1) {
          printf("Not Matched !!!\n");
          time+=1;
          }
        else if (time ==2){
          printf("Not matched (twice) !!!\n");
          time+=1;
        }
        else if (time ==3){
          printf("Not matched (3 times)!!!\n");
          time+=1;
        }
        else {
          printf("You are not allowed to access PhoneBook.\n");
          time+=1;
        }
      }
    }
  }
}
