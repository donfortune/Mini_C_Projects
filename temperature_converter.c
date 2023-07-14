#include <stdio.h>
#include <ctype.h>     /*function helps with working with characters*/

int main (){
    char unit;
    float temp;
    float temperature;

    printf("what is the unit of your temperature:");
    scanf("%c", &unit);
   

    unit = toupper(unit);

    if (unit == 'C'){
       printf("Enter your temperature:");
       scanf("%f", &temp);

       temperature = (temp * 9/5) + 32;
       printf("your temperature in farenheit is: %.1f",temperature);
    }
    else if (unit == 'F'){
       printf("Enter your temperature:");
       scanf("%f", &temp);

       temperature = (temp - 32) * 9/5;
       printf("your temperature in celcius is: %.1f",temperature);
    }
    else{
        printf("Invalid option");
    }
    return 0;
}