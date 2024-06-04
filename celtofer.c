#include <stdio.h>

// Function prototype
float cent2fahr(float data);

int main() {
    float cent, fahr;
    scanf("%f", &cent);
    fahr = cent2fahr(cent);
    printf("%fC = %fF\n", cent, fahr);
    return 0;  // Return 0 to indicate successful execution
}

// Function to convert Celsius to Fahrenheit
float cent2fahr(float data) {
    float result;
    result = data * 9 / 5 + 32;
    return result;
}
