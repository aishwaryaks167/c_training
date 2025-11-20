// write a c function which will accept one input parameter r and returns the peremeter of circle,declare pi has constant!
#include <stdio.h>
const float pi=3.14;
float perimeter(float r)
{
    return 2 * pi * r; 
}
int main()
{
    float radius;
    printf("enter radius:");
    scanf("%f",&radius);
    printf("perimeter of circle=%2f\n", perimeter(radius));
    return 0;
}