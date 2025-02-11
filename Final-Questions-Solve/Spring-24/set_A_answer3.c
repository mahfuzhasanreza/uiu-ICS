#include<stdio.h>

int main(){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    int max;
    max=num1;

    if(num2>max) max=num2;
    if(num3>max) max=num3;

    if(max%2==0 && max%3==0){
        printf("Purple Number");
    } else if(max%2==0){
        printf("Red Number");
    } else if(max%3==0){
        printf("Blue Number");
    } else{
        printf("White Number");
    }


    return 0;
}