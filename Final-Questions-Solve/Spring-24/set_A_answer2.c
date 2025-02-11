#include <stdio.h>

int main(){
    char choice;
    float l, w;

    scanf("%c %f %f", &choice, &l, &w);

    float area, perimeter;
    if(choice=='A'){
        area = l * w;
        printf("The area of a rectangle is: %f", area);
    } else if(choice=='P'){
        perimeter = 2 * (l+w);
        printf("The perimeter of the rectangle is: %f", perimeter);
    }

    return 0;
}