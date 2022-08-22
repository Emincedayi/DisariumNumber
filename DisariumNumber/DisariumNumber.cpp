#include <math.h>
#include <stdio.h>
int main()
{

    int number;
    printf("Please enter a number\n");
    scanf_s("%d", &number);
    int num = number, copy = number, reversed = 0;
    int digit = 100;
    int step = 0;
    int total = 0;
    while (copy != 0) {
        copy /= 10;
        step++;
    }
    if (number == -1)
    {
        printf("Program finished thanks");
    }
    else if (number > 99 && number < 1000)
    {
        while (num != 0)
        {
            digit = num % 10;
            total += pow(digit, step);
            num /= 10;
            step--;
        }
      
        if (total == number)
        {
            printf("This is DISARIUM NUMBER");
        }
        else
        {
            printf("This is NOT DISARIUM NUMBER");
        }
    }
    else {
        printf("Try again");
    }

    return 0;
}
