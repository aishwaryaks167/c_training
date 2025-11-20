// write a c function which will accept three perameters l,b,h and returns volume of the cube!
#include <stdio.h>

// Function to calculate volume
float volume(float l, float b, float h) {
    return l * b * h;
}

int main() {
    float length, breadth, height;

    printf("Enter length, breadth and height: ");
    scanf("%f %f %f", &length, &breadth, &height);

    printf("Volume = %.2f\n", volume(length, breadth, height));

    return 0;
}
