#include <stdio.h>

int main(void){
    int length, width, height, volume, weight;

    length = 12;
    width = 8;
    height = 10;

    volume = length * width * height;
    weight = (volume + 165) / 166;

    printf("Dimensions: %d x %d x %d\n", length, width, height);
    printf("Volume: %d\n", volume);
    printf("Dimension weight (pounds): %d\n", weight);

    return 0;
}

/**
Dimensions: 12 x 8 x 10
Volume: 960
Dimension weight (pounds): 6
*/