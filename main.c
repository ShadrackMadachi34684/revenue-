#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float revenue[7];
    float total = 0, avg;
    int i;

    // Input loop
    for (i = 0; i < 7; i++) {
        printf("Enter the revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
    }

    // Total loop (separate, not nested)
    for (i = 0; i < 7; i++) {
        total += revenue[i];
    }

    avg = total / 7;

    printf("The total revenue is: %.2f\n", total);
    printf("The average daily revenue is: %.2f\n", avg);

    return 0;
}
