//write a function which will multiply 3 numbers & call by reference
#include<stdio.h>
void product(int *a,int *b,int *c)
{
    int prod=(*a)*(*b)*(*c);
    printf("%d\n", prod);
}
void main()
{
    int a = 99;
    int b = 96;
    int c = 64;
    printf("call by reference");
    product(&a,&b,&c);
}