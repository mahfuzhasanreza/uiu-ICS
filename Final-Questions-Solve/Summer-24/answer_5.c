#include<stdio.h>

int main(){
    int packageType;
    float dataUsage, totalCost;

    printf("Select the data package:\n");
    printf("1. Basic Package\n");
    printf("2. Standard Package\n");
    printf("3. Premium Package\n");
    printf("Enter your choice: ");

    // printf("Select the data package:\n1. Basic Package\n2. Standard Package\n3. Premium Package\nEnter your choice: ");

    scanf("%d", &packageType);

    if(packageType<1 || packageType>3){
        printf("Invalid package type selected.\n");
    } else{
        printf("Enter the number of GBs you want to use: ");
        scanf("%f", &dataUsage);
        
        if(packageType == 1){
            totalCost = 50 * dataUsage;
            printf("You selected the Basic Package.\n");
        } else if(packageType == 2){
            totalCost = 100 * dataUsage;
            printf("You selected the Standard Package.\n");
        } else{
            totalCost = 150 * dataUsage;
            printf("You selected the Premium Package.\n");
        }

        printf("The total charge for your package is: %.2f", totalCost);

    }

    return 0;
}