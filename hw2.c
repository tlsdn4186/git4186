#include <stdio.h>


int main() {

    float k;
    float m = 1.609;

    printf("Please enter kilometers: ");
    scanf_s("%f", &k);


    float m2 = k / m;

    // 결과 출력
    printf("%.1f km is equal to  %.1f miles.\n", k, m2);

    return 0;
}
