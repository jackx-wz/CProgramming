#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void){
    float celsius, fahrenheit;

    printf("Enter Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equiv: %.1f\n", celsius);

    return 0;
}

/*
Enter Fahrenheit: 100
Celsius equiv: 37.8
*/