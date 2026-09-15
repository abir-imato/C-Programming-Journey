#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Store the number of digits of num in n
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    // Calculate the sum of the power of individual digits
    while (temp != 0) {
        remainder = temp % 10;
        // Use round() to avoid floating-point inaccuracies with pow()
        result += round(pow(remainder, n));
        temp /= 10;
    }

    // Check if the number is equal to the result
    if (result == originalNum)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}