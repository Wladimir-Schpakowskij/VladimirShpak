//   sups.h
#pragma once
#define CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"

double a(int i);
double task1for(int n);
double task2for(double eps);
void task3for(int n, int k);
int task4for(double epsil);
int task5for(double epsil);


//Задание №1

#include "sups.h"


double task1for(int n)
{
 long double sum = 0;
 int i;
 for (i = 0; i < n; i++) 
 {
  sum += a(i);
 }
 return sum;
}


//Задание №2


#include "sups.h"

double task2for(double eps){
   double sum=0;
  int i;
 for (i = 0;; i++) {
  sum += a(i);
  if (fabs(a(i)) <= eps)
  {
   return sum;
 }
}
}


//Задание №3


#include "sups.h"

void task3for(int n, int k){
  int i;
 for (i = 0; i < n; i++) {
  if ((i+1) % k ==0) 
  {
   continue;
  }
 printf("a[%d] = %.50f\n\n", i, a(i));

 }
}


//Задание №4


#include "sups.h"


int task4for(double eps){
  int i=0;
 for (;; i++) 
 {
  if (fabs(a(i)) <= eps)
  {
   break;
 }
 }
  return i;
 
}


//Задание №5


#include "sups.h"


int task5for(double eps){
 int i;
 for (i = 0; ; i++) {
  if (fabs(a(i)) <= eps && a(i)<0)
  {
   return i;
 }
}
}


//Задание №6


#include "sups.h"
int main() {
 int n,k;
 double eps;
 for (;;) {
system("cls");
 printf("\"For\" Press some key:\n");
 printf("1 - Task 1\n");
 printf("2 - Task 2\n");
 printf("3 - Task 3\n");
 printf("4 - Task 4\n");
 printf("5 - Task 5\n");
 printf("6 - Run away\n\n");
  switch (_getch()) {
   case '1':
   system("cls");
   printf("Task 1:\n");
   printf("n = "); scanf("%i", &n);
   printf("Sum = %.50f\n\n", task1for(n));
   getch();
   break;
  case '2':
   system("cls");
   printf("Task 2:\n");
   printf("eps = "); scanf("%lf", &eps);
   printf("Sum = %.50f\n\n", task2for(eps));
   getch();
   break;
  case '3':
system("cls");
   printf("Task 3:\n");
   printf("n = "); scanf("%i", &n);
   printf("k = "); scanf("%i", &k);
   task3for(n, k);
   getch();
   break;
  case '4':
   system("cls"); 
   printf("Task 4:\n");
   printf("eps = "); scanf("%lf", &eps);
   printf("i = %d\n\n", task4for(eps));
   getch();
   break;
  case '5':
   system("cls");
   printf("Task 5:\n");
   printf("eps = "); scanf("%lf", &eps);
   printf("i = %d\n\n", task5for(eps));
   getch();
   break;
  case '6':
   system("cls");
   printf("Bye!\n");
   system("pause");
   return 0;
   break;
  default:
   system("cls");
   printf("Nope. Try again\n\n");
   getch();
   break;
  }
 }
}
double a(int i) 
{
 return ((pow((-1),i))* (1-(((pow(i,2))+1)/((pow(i,2))+3))));
}


//--------------------------------------------------------
// Результаты для While

// sups.h


#pragma once
#define CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"

double a(int i);
double task1for(int n);
double task2for(double eps);
void task3for(int n, int k);
int task4for(double epsil);
int task5for(double epsil);


//Задание №1

#include "supsa.h"


double task1for(int n)
{
 long double sum = 0;
 int i=0;
 while(i < n)
 {
  sum += a(i);
  i++;
 }
 return sum;
}


//Задание №2


#include "supsa.h"

double task2for(double eps){
   double sum=0;
  int i=0;
 
  while(1)
 {
  sum += a(i);
  if (fabs(a(i)) <= eps)
  {
   return sum;
 }
  i++;
  }
}


//Задание №3


#include "supsa.h"

void task3for(int n, int k){
  int i=0;
  while( i < n)
 {
  if ((i+1) % k ==0) 
  { 
   i++;
   continue;
  }
 printf("a[%d] = %.50f\n\n", i, a(i));
 i++;
 }
  
}


//Задание №4


#include "supsa.h"


int task4for(double eps){
  int i=0;
 //for (;; i++) 
  while(1)
 {
  if (fabs(a(i)) <= eps)
  {
   break;
 }
  i++;
  }
  return i;
  
}


//Задание №5


#include "supsa.h"


int task5for(double eps){
 int i=0;
 //for (i = 0; ; i++) 
 while(1)
 {
  if (fabs(a(i)) <= eps && a(i)<0)
  {
   return i;
 }
  i++;
}
}


//Задание №6


#include "supsa.h"
int main() {
 int n,k;
 double eps;
 while(1) 
 {
system("cls");
printf(" \"While\" Press some key:\n");
 printf("1 - Task 1\n");
 printf("2 - Task 2\n");
 printf("3 - Task 3\n");
 printf("4 - Task 4\n");
 printf("5 - Task 5\n");
 printf("6 - Run away\n\n");
  switch (_getch()) {
   case '1':
   system("cls");
   printf("Task 1:\n");
   printf("n = "); scanf("%i", &n);
   printf("Sum = %.50f\n\n", task1for(n));
   getch();
   break;
  case '2':
   system("cls");
   printf("Task 2:\n");
   printf("eps = "); scanf("%lf", &eps);
   printf("Sum = %.50f\n\n", task2for(eps));
   getch();
   break;
  case '3':
   system("cls");
   printf("Task 3:\n");
   printf("n = "); scanf("%i", &n);
   printf("k = "); scanf("%i", &k);
   task3for(n, k);
   getch();
   break;
  case '4': 
   system("cls");
   printf("Task 4:\n");
   printf("eps = "); scanf("%lf", &eps);
   printf("i = %d\n\n", task4for(eps));
   getch();
   break;
  case '5':
   system("cls");
   printf("Task 5:\n");
   printf("eps = "); scanf("%lf", &eps);
   printf("i = %d\n\n", task5for(eps));
   getch();
   break;
  case '6':
   system("cls");
   return 0;
   break;
  default:
   system("cls");
   printf("Nope. Try again\n\n");
   getch();
   break;
  }
 }
}
double a(int i) 
{
 return ((pow((-1),i)) (1-(((pow(i,2))+1)/((pow(i,2))+3))));
}


//------------------------------------------------------
// Результаты для do...while
// sup.h


#pragma once
#define CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"

double a(int i);
double task1for(int n);
double task2for(double eps);
void task3for(int n, int k);
int task4for(double epsil);
int task5for(double epsil);


//Задание №1


#include "sup.h"

double task1for(int n)
{
 long double sum = 0;
 int i=0;
 if (n>0) {do
 {
  sum += a(i);
  i++;
 } while(i < n);
 }
 return sum;
}


//Задание №2


 #include "sup.h"

double task2for(double eps){
   double sum=0;
  int i=0;
 
  do
 {
  sum += a(i);
  if (fabs(a(i)) <= eps)
  {
   return sum;
 }
  i++;
  } while(1);
}


//Задание №3


#include "sup.h"

void task3for(int n, int k){
  int i=0;
  if (n > 0) {
  do
 {
  if ((i+1) % k ==0) 
  { 
   i++;
   continue;
  }
 printf("a[%d] = %.50f\n\n", i, a(i));
 i++;
 } while( i < n);
  }
  
}


//Задание №4


#include "sup.h"

int task4for(double eps){
  int i=0;
  
  do
 {
  if (fabs(a(i)) <= eps)
  {
   break;
 }
  i++;
  } while(1);
  return i;
  
}


//Задание №5


#include "sup.h"

int task5for(double eps){
 int i=0; 
 do
 {
  if (fabs(a(i)) <= eps && a(i)<0)
  {
   return i;
 }
  i++;
 } while(1);
}


//Задание №6


#include "sup.h"
int main() {
 int n,k;
 double eps;
 do 
 { 
system("cls");
printf(" \"DoWhile\" Press some key:\n");
 printf("1 - Task 1\n");
 printf("2 - Task 2\n");
 printf("3 - Task 3\n");
 printf("4 - Task 4\n");
 printf("5 - Task 5\n");
 printf("6 - Run away\n\n");
  switch (_getch()) {
   case '1':
   system("cls");
   printf("Task 1:\n");
   printf("n = "); scanf("%i", &n);
   printf("Sum = %.50f\n\n", task1for(n));
   getch();
   break;
  case '2':
   system("cls");
   printf("Task 2:\n");
   printf("eps = "); scanf("%lf", &eps);
   printf("Sum = %.50f\n\n", task2for(eps));
   getch();
   break;
  case '3':
   system("cls");
   printf("Task 3:\n");
   printf("n = "); scanf("%i", &n);
   printf("k = "); scanf("%i", &k);
   task3for(n, k);
   getch();
   break;
  case '4':
   system("cls"); 
   printf("Task 4:\n");
   printf("eps = "); scanf("%lf", &eps);
   printf("i = %d\n\n", task4for(eps));
   getch();
   break;
  case '5':
   system("cls");
   printf("Task 5:\n");
   printf("eps = "); scanf("%lf", &eps);
   printf("i = %d\n\n", task5for(eps));
   getch();
   break;
  case '6':
   system("cls");
   printf("Bye!\n");
   system("pause");
   return 0;
   break;
  default:
   system("cls");
   printf("Nope. Try again\n\n");
   _getch();
   break;
  }
 } while(1);
}
double a(int i) 
{
 return ((pow((-1),i)) (1-(((pow(i,2))+1)/((pow(i,2))+3)))); }