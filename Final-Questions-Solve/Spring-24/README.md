# Spring 2024 (Set 1)

## Answer to the Question 1
```c
#include <stdio.h>
#include <math.h>

int main() {
    float energy, mass, speed_of_light;
    scanf("%f %f", &energy, &mass);
    
    speed_of_light = sqrt(energy / mass);
    printf("%.3f\n", speed_of_light);

    return 0;
}
```


## Answer to the Question 2

```c
#include <stdio.h>

int main() {
    char choice;
    float length, width;

    scanf("%c %f %f", &choice, &length, &width);

    if (choice == 'A') {
        float area = length * width;
        printf("The area of the rectangle is: %f\n", area);
    } else if (choice == 'P') {
        float perimeter = 2 * (length + width);
        printf("The perimeter of the rectangle is: %f\n", perimeter);
    }

    return 0;
}
```

## Answer to the Question 3  

```c
#include <stdio.h>

int main() {
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    if (max % 2 == 0 && max % 3 == 0) {
        printf("Purple Number\n");
    } else if (max % 2 == 0) {
        printf("Red Number\n");
    } else if (max % 3 == 0) {
        printf("Blue Number\n");
    } else {
        printf("White Number\n");
    }

    return 0;
}
```

## Answer to the Question 4  

```c
#include <stdio.h>

int main() {
    int a, b, c;
    int result1, result2, result3, max;

    scanf("%d %d %d", &a, &b, &c);

    result1 = a + b * c;
    result2 = b + a * c;
    result3 = c + a * b;

    max = result1;
    if (result2 > max) {
        max = result2;
    }
    if (result3 > max) {
        max = result3;
    }
    printf("Maximum value: %d\n", max);

    return 0;
}
```

## Answer to the Question 5  

```c
#include <stdio.h>

int main() {
    int number, lastDigit;

    scanf("%d", &number);
    lastDigit = number % 10;

    switch (lastDigit) {
        case 0:
            printf("0123456789");
            break;
        case 1:
            printf("123456789");
            break;
        case 2:
            printf("23456789");
            break;
        case 3:
            printf("3456789");
            break;
        case 4:
            printf("456789");
            break;
        case 5:
            printf("56789");
            break;
        case 6:
            printf("6789");
            break;
        case 7:
            printf("789");
            break;
        case 8:
            printf("89");
            break;
        case 9:
            printf("9");
            break;
    }

    return 0;
}
```

<br>

# _Author: [Mahfuz Hasan Reza](https://github.com/mahfuzhasanreza/)_
# _Get Connected with [Learn With Mahfuz](https://www.youtube.com/@learn-with-mahfuz)_
  - _Subscribe to my channel on [YouTube](https://www.youtube.com/@learn-with-mahfuz)_
  - _Follow me on [LinkedIn](https://www.linkedin.com/company/learn-with-mahfuz)_
  - _Follow me on [Facebook](https://www.facebook.com/LearnWithMahfuzLWM)_
  - _Connect with me on [LinkedIn](https://www.linkedin.com/in/mahfuzhasanreza/)_
