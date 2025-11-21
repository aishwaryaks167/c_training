#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
struct student
{
    char name[100];
    int age;
    float marks;
};

void main()
{
struct student s1;
struct student *p = &s1;
strcpy(p-> name,"aisu");
p-> age = 18;
p-> marks = 70.07;
printf("%s\n", p->name);
printf("%d\n", p->age);
printf("%f\n", p->marks);

}