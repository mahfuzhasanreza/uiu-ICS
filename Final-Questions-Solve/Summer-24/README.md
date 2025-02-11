## Answer to the Question 1 (a)

![Image](https://github.com/user-attachments/assets/c3926221-ba85-4152-8b76-1963828da7d9)

Click [here](https://github.com/user-attachments/files/18748051/LearnWithMahfuz-ICS-Summer24-1a.pdf) for download the pdf

## Answer to the Question 1 (b)

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


<br>

# _Author: [Mahfuz Hasan Reza](https://github.com/mahfuzhasanreza/)_
# _Get Connected with [Learn With Mahfuz](https://www.youtube.com/@learn-with-mahfuz)_
  - _Subscribe to my channel on [YouTube](https://www.youtube.com/@learn-with-mahfuz)_
  - _Follow me on [LinkedIn](https://www.linkedin.com/company/learn-with-mahfuz)_
  - _Follow me on [Facebook](https://www.facebook.com/LearnWithMahfuzLWM)_
  - _Connect with me on [LinkedIn](https://www.linkedin.com/in/mahfuzhasanreza/)_
