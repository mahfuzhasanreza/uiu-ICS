# Summer 2024 (Set 1)

## Answer to the Question 1

![Image](https://github.com/user-attachments/assets/c3926221-ba85-4152-8b76-1963828da7d9)

Click [here](https://github.com/user-attachments/files/18748317/LearnWithMahfuz-ICS-Summer24-answer1.pdf) for download the pdf

## Answer to the Question 2

Yes, there are errors in the code.  

**Errors:**  
**Incorrect `scanf` Usage**  
   - `scanf("%d", x);` should be `scanf("%d", &x);`  
   - `scanf("%d", y);` should be `scanf("%f", &y);`  
   
**Corrected Code:**  
```c
#include <stdio.h>

int main() {
    int x;
    float y;

    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("Enter a float: ");
    scanf("%f", &y);

    printf("x = %d, y = %f", x, y);

    return 0;
}
```
## Answer to the Question 3 

```
Original amount: $195.00
Discount applied: $19.50
Final amount to be paid: $175.50
```

## Answer to the Question 4   

```c
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
```

## Answer to the Question 5    

```c
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
```

<br>

# Summer 2024 (Set 2)  

## Answer to the Question 1

**Pseudocode for Calculating the Square of a Number:**  

```plaintext
START
1. Declare a variable num
2. Declare a variable square
3. Read input and store in num
4. Calculate square: square = num * num
5. Display the square value
END
```

**Flowchart Representation:**



## Answer to the Question 2

<br>

# _Author: [Mahfuz Hasan Reza](https://github.com/mahfuzhasanreza/)_
# _Get Connected with [Learn With Mahfuz](https://www.youtube.com/@learn-with-mahfuz)_
  - _Subscribe to my channel on [YouTube](https://www.youtube.com/@learn-with-mahfuz)_
  - _Follow me on [LinkedIn](https://www.linkedin.com/company/learn-with-mahfuz)_
  - _Follow me on [Facebook](https://www.facebook.com/LearnWithMahfuzLWM)_
  - _Connect with me on [LinkedIn](https://www.linkedin.com/in/mahfuzhasanreza/)_
