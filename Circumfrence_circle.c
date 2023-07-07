#include <stdio.h>

int main() {
   const double PI = 3.14159;
   double radius;
   double circumference;

   printf("Please enter a radius: ");
   scanf("%lf", &radius);

   circumference = 2 * radius * PI;

   printf("The circumference of your circle with radius %.2lf is %.2lf\n", radius, circumference);

   return 0;
}
