#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int result1, result2, result3;
    result1 = a+b*c;
    result2 = b+a*c;
    result3 = c+a*b;

    int max;
    max=result1;
    if(result2>max){
        max=result2;
    }
    if(result3>max){
        max=result3;
    }
    
    printf("Maximux value: %d", max);

    return 0;
}