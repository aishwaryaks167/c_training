//create a structure with 3 variables name of the car maximum speed ,price store this in array of structure and displayed.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car 
{
    char name [100];
    float speed;
    int price;
};
void main()
{
    int n;
    printf("enter the number of car:");
    scanf("%d", &n);
    struct car c[2];
    for (int i = 0; i<n; i++)
     {
        printf("enter name of car: ");
        scanf("%s",c[i].name);

        printf("enter speed of car:");
        scanf("%f", &c[i].speed);

        printf("enter price of car:");
        scanf("%d", &c[i].price);

    }
    printf("your informnation:\n");
    for (int i = 0; i<n; i++)
    {
        printf("%s\n", c[i].name);
        printf("%f\n", c[i].speed);
        printf("%d\n", c[i].price);
        
    }
}