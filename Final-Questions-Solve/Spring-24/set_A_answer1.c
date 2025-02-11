#include <stdio.h>
#include <math.h>

int main(){
    float e, m;
    scanf("%f %f", &e, &m);

    float c;
    c=sqrt(e/m);

    printf("%.3f", c);

    return 0;
}