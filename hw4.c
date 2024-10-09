#include <stdio.h>

int main()
{
    int num, i;


    printf("Please enter a number : ");
    scanf_s("%d", &num);


    for (i = 2; i < num; i++) {
        if (num % i == 0)
            break;
    }


    if (i == num)
        printf("it is prime number");
    else
        printf("it is not prime number.");


    return 0;
}