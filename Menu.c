#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        printf("\n");
        printf("Welcome to Simple Calculator\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter two numbers to add: ");
                scanf("%f %f", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case 2:
                printf("Enter two numbers to subtract: ");
                scanf("%f %f", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case 3:
                printf("Enter two numbers to multiply: ");
                scanf("%f %f", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 4:
                printf("Enter two numbers to divide: ");
                scanf("%f %f", &num1, &num2);
                if(num2 == 0) {
                    printf("Error! Division by zero.\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                }
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while(choice != 5);

    return 0;
}
