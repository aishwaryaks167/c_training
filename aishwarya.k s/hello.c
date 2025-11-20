#include <stdio.h>
#include <string.h>
void main()
{
    char name [10] = "aishwarya";
    char new[100] = "hello";
    printf("%c\n", name[3]);//access
    printf("length of string is %ld\n",strlen(name));
    strcat(new, name);//new = hello+aishwarya
    printf("%s", new);
}