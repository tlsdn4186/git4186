#include <stdio.h>

void printB(int n) {
    if (n > 1) {
        printB(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int number;

    printf("Please enter a number: ");
    scanf_s("%d", &number);

   
    printB(number);
    printf("\n");

    return 0;
}
