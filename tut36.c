#include <stdio.h>
int main(){
    char str[100];
    gets(str);
    char ptr[]="january";
    char ptz[]="february";
    if( strcmp){

        printf("tr");

    }
    else{
        printf("jk");
    }
}
// #include <stdio.h>
// int main()
// {
//     char operator;
//     float num1, num2, result;
//     printf("enter the expression ");

//     scanf("%f %f ", &num1, &num2);
//     scanf("%c", &operator);
//     switch (operator)
//     {
//     case '+':
//         result = num1 + num2;
//         printf("%f", result);
//         break;
//     case '-':
//         result = num1 - num2;
//         printf("%f", result);
//         break;

//         case '*':
//         result=num1*num2;
//         printf("%f",result);
//         break;

//     default:
//         printf("error");
//         break;
//     }
// }
// #include <stdio.h>

// int main() {
//     char operator;
//     double num1, num2, result;

//     // Get user input
//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &operator);

//     printf("Enter two numbers: ");
//     scanf("%lf %lf", &num1, &num2);

//     // Perform the calculation based on the operator
//     switch (operator) {
//         case '+':
//             result = num1 + num2;
//             break;
//         case '-':
//             result = num1 - num2;
//             break;
//         case '*':
//             result = num1 * num2;
//             break;
//         case '/':
//             if (num2 != 0) {
//                 result = num1 / num2;
//             } else {
//                 printf("Error: Cannot divide by zero!\n");
//                 return 1; // Exit the program with an error code
//             }
//             break;
//         default:
//             printf("Error: Invalid operator!\n");
//             return 1; // Exit the program with an error code
//     }

//     // Display the result
//     printf("Result: %.2lf\n", result);

//     return 0;
// }
