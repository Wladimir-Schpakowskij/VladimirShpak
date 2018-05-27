//Задание 1


#define CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"

void main()
{
 double x = 2, y = 6, f = ((sin(x)+cos(2*y-x))/(cos(x)-sin(2*y-x)));
 printf("task1\n");
 printf("x = %f\n", x);
 printf("y = %f\nf = %f\n\n", y, f);
 printf("next\n\n");
 printf("x = "); scanf("%lf", &x);
 printf("y = "); scanf("%lf", &y);
 f = ((sin(x)+cos(2*y-x))/(cos(x)-sin(2*y-x)));
 printf("f = %f", f);
 getch();
} 


//Задание 2

#define CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"

 double function (double x, double y)
 
 {
 return ((sin(x)+cos(2*y-x))/(cos(x)-sin(2*y-x)));
 }
 
 void main()
 {
	double x=2, y=6;
	printf("task2\n");
	printf("x = %f\ny = %f\nf = %f\n\n", x, y, function(x,y));
  printf("next\n\n");
  printf("x = "); scanf("%lf", &x);
  printf("y = "); scanf("%lf", &y);
  printf("f = %f", function(x,y));
  getch();
}


//Задание 3

#define CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"

double func(double x, double y);

 void main()
 {
  double x=2, y=6;
  printf("task3\n");
   printf("x = %f\ny = %f\nf = %f\n\n", x, y, func(x,y));
   printf("x = "); scanf("%lf", &x);
   printf("y = "); scanf("%lf", &y);
   printf("f = %f", func(x,y));
 getch();
}

 double func(double x, double y)
 {
 return ((sin(x)+cos(2*y-x))/(cos(x)-sin(2*y-x)));
 }
 
 
//Задание 4

#define CRT_SECURE_NO_WARNINGS
 #include "stdio.h"
#include "math.h"

void func_func();
 double x,y,fun;

void main(){
x=2;y=6;func_func();
 printf("task4\n");
  printf("x = %f\ny = %f\nf = %f\n\n", x, y, fun);
  printf("x = "); scanf("%lf", &x);
  printf("y = "); scanf("%lf", &y);

 func_func(); printf("f = %f", fun);
getch();

}

 void func_func()
 {
  fun=((sin(x)+cos(2*y-x))/(cos(x)-sin(2*y-x)));
 }
 
 
//Задание 5

1.1.1 task5_main.c
#define CRT_SECURE_NO_WARNINGS
#include "stdio.h"


double func(double x, double y);
void main()
 {
  double x=2, y=6;
  printf("Task5\n");
   printf("x = %f\ny = %f\nf = %f\n\n", x, y, func(x,y));
   printf("x = "); scanf("%lf", &x);
   printf("y = "); scanf("%lf", &y);
  printf("f = %f", func(x,y));
 getch();
}
1.1.2 task5_func.c

 #include "math.h"

double func(double x, double y)
 {
 return ((sin(x)+cos(2*y-x))/(cos(x)-sin(2*y-x)));
 }
 
 
//Задание 6

1.1.3 task6_main.c
#define CRT_SECURE_NO_WARNINGS
 #include "stdio.h"

void func_func();
  double x,y,fun;

void main(){
x=2;y=6;func_func();
 printf("task6\n");
  printf("x = %f\ny = %f\nf = %f\n\n", x, y, fun);
  printf("x = "); scanf("%lf", &x);
  printf("y = "); scanf("%lf", &y);
 func_func(); printf("f = %f", fun);
getch();

}
1.1.4 task6_func.c
#include "math.h"


double x,y,fun;

 void func_func()
 {
  fun=((sin(x)+cos(2*y-x))/(cos(x)-sin(2*y-x)));
 }
 
 
//Задание 7

1.1.5 func.h
#pragma once
#define CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"
extern double x, y, fun;
void func_func();
1.1.6 task7_main.c

#include "func.h"

void main(){
x=2;y=6;func_func();
 printf("task7\n");
  printf("x = %f\ny = %f\nf = %f\n\n", x, y, fun);
  printf("x = "); scanf("%lf", &x);
  printf("y = "); scanf("%lf", &y);
 func_func(); printf("f = %f", fun);
getch();

}
 

1.1.7 task7_func.c

#include "func.h"

double x,y,fun;

 void func_func()
 {
  fun=((sin(x)+cos(2*y-x))/(cos(x)-sin(2*y-x)));
 }
 