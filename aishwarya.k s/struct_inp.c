//structure for name of book,author,year
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
struct Book
{
    char name [100];
    char author [100];
    int year;
};
void main()
{
    int n;
    printf("enter the number of books:");
    scanf("%d", &n);
    struct Book b[3];
    for (int i = 0; i<n; i++)
    {
        printf("enter name of Book: ");
        scanf("%s",b[i].name);

        printf("enter author of Book:");
        scanf("%s", b[i].author);

        printf("enter year of publication:");
        scanf("%d",&b[i]. year);

    }
}