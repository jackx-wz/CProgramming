#include <stdio.h>

int main(void){
    int length, width, height, volume, weight;

    printf("Enter length of box: ");
    scanf("%d", &length);

    printf("Enter width of box: ");
    scanf("%d", &width);

    printf("Enter height of box: ");
    scanf("%d", &height);

    volume = length * width * height;
    weight = (volume + 165) / 166;

    printf("Volume: %d\n", volume);
    printf("Dimension weight (pounds): %d\n", weight);

    return 0;
}

/*
Enter length of box: 12
Enter width of box: 8
Enter height of box: 10
Volume: 960
Dimension weight (pounds): 6
*/