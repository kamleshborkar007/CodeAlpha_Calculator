#include <stdio.h>
int main() {
    char operation;
    double num1, num2, result;
    
    printf("Enter an operation (+, -, *, /): ");   
	scanf(" %c", &operation);
	
	printf("Enter 1st numbers: ");   
	scanf("%lf", &num1);
	
	printf("Enter 2nd number: ");
	scanf("%lf", &num2);

switch (operation) {
    case '+':
        result = num1 + num2;
        printf("%0.2lf + %.02lf = %0.2lf\n", num1, num2, result);
        break;
        
    case '-':
        result = num1 - num2;
        printf("%0.2lf - %0.2lf = %0.2lf\n", num1, num2, result);
        break;
        
    case '*':
        result = num1 * num2;
        printf("%0.2lf * %0.2lf = %0.2lf\n", num1, num2, result);
        break;
        
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            printf("%0.2lf / %0.2lf = %0.2lf\n", num1, num2, result);
        } else {
            printf("Error! Division by zero.\n");
        }
        break;
        
    default:
        printf("Error! Invalid operation\n");
}

return 0;
}
