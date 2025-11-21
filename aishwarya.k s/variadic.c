//write a c program with variadic 
#include<stdio.h>
#include<stdarg.h>
void add(int count,...)
{
    int sum = 0;
    va_list bag;
    va_start(bag, count);
    for (int i = 1; i=count; i++){
        int n = va_arg(bag,int);
        sum = sum+n;
    }
    va_end(bag);
    printf("%d", sum);
}
void main()
{
    add(34,67,89,99,54,12);
}