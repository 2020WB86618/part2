#include <stdio.h>



// Function to add two numbers

int add(int num1, int num2) {

    return num1 + num2;

}



int main() {

    int number1, number2, result;



    // Input the two numbers

    printf("Enter first number: ");

    scanf("%d", &number1);

    printf("Enter second number: ");

    scanf("%d", &number2);



    // Call the add function and store the result

    result = add(number1, number2);



    // Display the result

    printf("The sum of %d and %d is %d\n", number1, number2, result);



    return 0;

}


