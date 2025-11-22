#include<stdio.h>
enum days
{
    monday,tuesday,wednesday,thursday
};
void main()
{
    enum days d;
    d = thursday;
    printf("%d",d);
}