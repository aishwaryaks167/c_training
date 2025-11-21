#include<stdio.h>
void sum_value(int a,int b)
{
    int sum = a+b;
    printf("%d\n", sum);
}
void sum_ref(int *a, int *b)
{
    int sum = *a+*b;
    printf("%d\n", sum);
}
void main()
{
    int a = 99;
    int b = 18;
    printf("call by value: \n");
    sum_value(a,b);
    printf("call by reference: \n");
    sum_ref(&a,&b);
}
