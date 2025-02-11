#include <stdio.h> 

int main() { 
    float playgroundLength, playgroundWidth, fenceCostPerMeter = 15.0; 
    float perimeter, totalCost; 

    printf("Enter the length of the playground: "); 
    scanf("%f", &playgroundLength); 
    printf("Enter the width of the playground: "); 
    scanf("%f", &playgroundWidth); 

    perimeter = 2 * (playgroundLength + playgroundWidth);
    totalCost = perimeter * fenceCostPerMeter;

    printf("Perimeter: %.2f meters\n", perimeter);
    printf("Total cost: $%.2f\n", totalCost);

    return 0; 
}