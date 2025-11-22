//write ac program which add 3 numbers & call it by reference
#include<stdio.h>
void sum_ref(int *a,int *b,int *c)
{
    int sum=*a+*b+*c;
    printf("the sum is %d\n", sum);

}
void main()
{

    int a = 99;
    int b = 18;
    int c = 100;
    sum_ref(&a,&b,&c);
}