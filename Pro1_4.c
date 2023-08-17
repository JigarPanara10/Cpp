// Write a C program to enter radius of a circle and find its diameter, circumference and area //

#include<stdio.h>
#define PI 3.14
int main() {

   int rad;
   float area, ci;

   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);

   area = PI * rad * rad;
   printf("\nArea of circle : %f ", area);

   ci = 2 * PI * rad;
   printf("\nCircumference : %f ", ci);

   return 0;
}