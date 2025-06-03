#include <stdio.h>
#include "calculator.h"

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\nBalaji's Calculator:\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) break;

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (choice) {
            case 1: result = add(num1, num2); break;
            case 2: result = subtract(num1, num2); break;
            case 3: result = multiply(num1, num2); break;
            case 4:
                if (num2 != 0) result = divide(num1, num2);
                else {
                    printf("Error: Division by zero!\n");
                    continue;
                }
                break;
            default:
                printf("Invalid choice.\n");
                continue;
        }

        printf("Result: %.2lf\n", result);
    }

    return 0;
}
