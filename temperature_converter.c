#include <stdio.h>
#include <ctype.h>     /*function helps with working with characters*/

int main (){
    char unit;
    float temp;

    printf("what is the unit of your temperature:");
    scanf("%c", &unit);
   

    unit = toupper(unit);

    if (unit == 'C'){
       printf("The temp is currently in Celcius");
    }
    else if (unit == 'C'){
        printf("The temp is currently in faren");
    }
    else{
        printf("Invalid option");
    }
    return 0;
}