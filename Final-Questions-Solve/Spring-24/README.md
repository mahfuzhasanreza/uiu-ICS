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

<br>

# _Author: [Mahfuz Hasan Reza](https://github.com/mahfuzhasanreza/)_
# _Get Connected with [Learn With Mahfuz](https://www.youtube.com/@learn-with-mahfuz)_
  - _Subscribe to my channel on [YouTube](https://www.youtube.com/@learn-with-mahfuz)_
  - _Follow me on [LinkedIn](https://www.linkedin.com/company/learn-with-mahfuz)_
  - _Follow me on [Facebook](https://www.facebook.com/LearnWithMahfuzLWM)_
  - _Connect with me on [LinkedIn](https://www.linkedin.com/in/mahfuzhasanreza/)_
