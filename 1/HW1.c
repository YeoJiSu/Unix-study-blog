#include "header.h"

typedef struct
{
 char name[100000]; 
 int korean, math, english, computer;
 int total;
}STUDENT;

void printStuArray(STUDENT array[], int num);
void sortStuArray(STUDENT array[], int num);

void main()
{
 STUDENT people[10]; 
 int num_students;
 while (1){
   printf("Enter how many students> ");
    scanf("%d", &num_students);
    if (num_students<=10 ) break;
 }
 int i;
 for(i=0; i<num_students; i++)
 {
  printf("    Student %d's name> ", i+1); scanf("%s", people[i].name); 
  printf("\tKorean> "); scanf("%d", &people[i].korean); 
  printf("\tMath> "); scanf("%d", &people[i].math);
  printf("\tEnglish> "); scanf("%d", &people[i].english);
  printf("\tComputer> "); scanf("%d", &people[i].computer); 
 }
 sortStuArray(people, num_students);
 printStuArray(people, num_students);
 
}

void sortStuArray(STUDENT array[], int num){
  STUDENT temp;
  int i,j; 
  for(i=0; i<num; i++) 
 {
  array[i].total = array[i].korean + array[i].math + array[i].english + array[i].computer; 
 }
 for (i=0; i<num; i++)
 {
  for(j=0; j<num-1; j++)
  {
   if(array[j].total<array[j+1].total) 
   {
    temp = array[j];
    array[j]= array[j+1];
    array[j+1]= temp;
   }
  }
 }
};

void printStuArray(STUDENT array[], int num){
  int i;
  printf("\n==================================\nRank  Kor  Math  Eng  Com  Total  Name\n");
 for (i=0; i<num; i++)
 {
  printf("%d%7d%6d%5d%5d%6d    %s\n",i+1,array[i].korean,array[i].math,array[i].english,array[i].computer,array[i].total,array[i].name); 
 }
};
