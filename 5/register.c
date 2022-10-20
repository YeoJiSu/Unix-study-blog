#include "phone.h"
#include <stdio.h>
#include <string.h>
extern int size;
void registerPhoneData()
{   
  if (size>=MAX){
    printf("더 이상 추가할 수 없습니다.\n");
  }
  else {
    int time=1;
    char pass[]="qwerty1234";
    char password[11];
    
    while (time <5){

      printf("Password: ");
      scanf("%s", password);

      if (strcmp(pass,password)==0){
      printf("New User Name:");
      scanf("%s", PhoneBook[size].Name);
      printf("PhoneNumber:");
      scanf("%s", PhoneBook[size].PhoneNumber);
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
