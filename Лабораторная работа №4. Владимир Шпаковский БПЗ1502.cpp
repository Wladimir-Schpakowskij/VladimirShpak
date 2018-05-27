//zaga.h


#pragma once
#define CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include <stdlib.h>


void maybe(int num);
void InAnother();
void lifewewill();
void findtheonly(int elem, int lenght);
void thing(int elem, int lenght);
void worth(int elem, int lenght);
void fighting();
void fOr();


//Задание №1

#include "zaga.h"

void maybe(int num)
{

 if(num != 0) 
 { 
	printf("Vse Ok");
	printf("\n Task 1:\n Pointer address: %p\n Pointer value: %p\n The value of the variable by the pointer: %d\n", &num, num, num);
	++*num;
	printf("\n Pointer address: %p\n Pointer value:: %p\n The value of the variable by the pointer: %d\n\n", &num, num, num);
 }
}


//Задание №2


#include "zaga.h"

void InAnother() 
{
 int value;
 printf("value = "); scanf("%d", &value);
 printf("Variable address: %p\n Value of a variable: %d\n", &value, value);
 maybe(&value);
 printf("Variable address: %p\nValue of a variable: %d\n", &value, value);
}


//Задание №3


#include "zaga.h"

void lifewewill()
{
int chislo = (int )malloc(sizeof(int));

 printf("chislo = "); scanf("%d", chislo);
 printf("Variable address: %p\nValue of a variable: %d\n", chislo, chislo);
 maybe(chislo);
 printf("Variable address: %p\nValue of a variable: %d\n", chislo, chislo);
 free(chislo);

}


//Задание №4


#include "zaga.h"

void findtheonly(int elem, int lenght) 
{

 printf("\nTask 4:\n");
 for(int i = elem; (i-elem) < lenght; i++)
 {
 printf("elem[%d] = %d\n", i-elem, i);
 }

}


//Задание №5


#include "zaga.h"

void thing(int elem, int lenght)
{

  printf("\nTask 5:\n");

  for(int i = elem; (i-elem) < lenght; i++)
  {
   printf("x[%d] = ", i - elem);
   scanf("%d", i);
  }

}


//Задание №6


#include "zaga.h"

void worth(int elem, int lenght)
{
  bool endSort = 1;
  int swap;
  printf("\nTask 6:\n");
while (endSort)
 {
  endSort = 0;

  for(int i = elem; (i-elem) < lenght-1; i++){
 
    if(*(i)>*(i+1)) { //если требуемый порядок не соблюдается,то поменять их местами
     swap=*(i);
     (i)=*(i+1);
     (i+1)=swap;
     endSort = 1;
    }
  }
  
}
}


//Задание №7


#include "zaga.h"

void fighting() 
{
int lenght = 10;
int xs[10];
thing(xs,lenght);
findtheonly(xs,lenght);
worth(xs,lenght);
findtheonly(xs,lenght);

}


//Задание №8


#include "zaga.h"

void fOr() {
 int lenght = 20;
 printf("lenght = "); scanf("%d", &lenght);
 int elem = (int )malloc(lenght*sizeof(int));
 thing(elem,lenght);
 findtheonly(elem,lenght);
 worth(elem,lenght);
 findtheonly(elem,lenght);
 free(elem);
}


//Задание №9


#include "zaga.h"
#include <conio.h>

int main() {

 while (1)
 {
  system("cls");
  printf("Choose Task:\n2 - Task 2\n3 - Task 3\n7 - Task 7\n8 - Task 8\n0 - Run away\n\n");
  switch (_getch())
  {
  case '2':
   system("cls");
   printf("Task 2:\n");
   InAnother();
   getch();
   break;
  case '3':
   system("cls");
   printf("Task 3:\n");
   lifewewill();
   getch();
   break;
  case '7':
   system("cls");
   printf("Task 7:\n");
   fighting();
   getch();
   break;
  case '8':
   system("cls");
   printf("Task 8:\n");
   fOr();
   getch();
   break;
  case '0':
   return 0;
   break;
  default:
   system("cls");
   printf("Nope. I don't know this key. Try another.\n");
   getch();
   break;
  }
 }
}
