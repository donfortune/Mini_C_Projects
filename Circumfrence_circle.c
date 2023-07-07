#include <stdio.h>
#include <stdbool.h>

int main(){

   const double PI = 3.14159;
   double radius;
   double circumference;


   printf("Please enter a radius?");
   scanf( "%lf", &radius);
   circumference = 2 * radius * PI;
   printf("The circumfrence of your circle is %.2lf", circumference);



    return 0;
}

