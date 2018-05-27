//Задание №1


#include "math.h"

bool graph(double x, double y)
{
 if ((x*x+y*y <=1) && (x>=0&&y<=0) ||(x<=0 && y>=0))
 {
  return 1;
 }
 else
 {
  return 0;
 }
 }

 
//Задание №2


#include "math.h"

double funfun(double x)
{
 return (x >= 1.1) ? 9-x : (sin(3*x)) / (pow(x, 4) + 1);
}


//Задание №3

#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

double graph(double x, double y);
double funfun(double x);

int main()
{
 double x, y;
 printf("Press some key  :\n");
 printf("1 - Task 1\n");
 printf("2 - Task 2\n");
 printf("3 - Run away\n\n");
 while (1)
 {
  switch (_getch())
  {
  case '1':
   printf("Task 1:\n");
   printf("x = "); scanf("%lf", &x);
   printf("y = "); scanf("%lf", &y);
   if (graph(x, y)) 
   {
    printf("Yeess! You win..in this time \n\n");
   }
   else
   {
    printf("Nope, try again, you criminal scum\n\n");
   }
   break;
  case '2':
   printf("Task 2:\n");
   printf("x = "); scanf("%lf", &x);
   printf("f = %f\n\n", funfun(x));
   break;
  case '3':
   return 0;
   break;
  default:
   printf("What? I dont know this key\n");
   break;
  }
 }
}