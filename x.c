#include <stdio.h>

int num0, num1, num2;
char operand;


int main(){
    printf("Simple calculator\n\n");
    printf("================================");
    printf("\n\nPlease enter first number :");
    scanf("%d",&num1);
    printf("\n\nPlease state your operand :");
    scanf("%s",&operand);
    printf("\nPlease enter second number: ");
    scanf("%d",&num2);

    switch (operand)
    {
    case '*': /* constant-expression */
        num0 = num1 * num2;/* code */
        break;
    case '/':
        num0 = num1 / num2;
        break;
    case '+':
        num0 = num1 + num2;
        break;
    case '-':
        num0 = num1 - num2;
        break;

    default:
        printf("\nInvalid operand inserted");
        break;
    }
    
    printf("The result of your calculation from %d and %d is %d with using the operand of %c.",num1, num2, num0, operand);
}