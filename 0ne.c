#include<stdio.h>
#include<conio.h>

void main() {
    char operator;
    double num1,num2,result;

    printf("Enter operator (+,-,*,/) :");	
    scanf("%c",&operator);

    printf("Enter first number :");
    scanf("%lf",&num1);

    printf("Enter second number :");
    scanf("%lf",&num2);

    switch (operator)
    {
    case '+':
    result= num1 + num2;
        break;
    case '-':
    result= num1 - num2;
        break;
    case '*':
    result= num1 * num2;
        break;
    case '/':
    result= num1 / num2;
        break;        
    
    default:
    printf("Error: Invalid operator\n");
        break;
    }

    printf("Result: %lf\n" ,result);
}