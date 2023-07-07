#include <stdio.h>

int main() {
   const double PI = 3.14159;
   double radius;
   double circumference;
   double area;

   printf("Please enter a radius: ");
   scanf("%lf", &radius);

   circumference = 2 * radius * PI;
   area = PI * (radius * radius);

   printf("The circumference of your circle with radius %.2lf is %.2lf\n", radius, circumference);
   printf("The area of a circle is %lf", area);

   return 0;
}
