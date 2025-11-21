#include<stdio.h>
void name (char first[], char last[], char sw[])
{
    int i = 0;
    char full[100];
    while (first[i]!= '\0')
    {
        full[i] = first[i];
        i++;
    }
    full[i] =' ';
    i++;
    int j = 0;
    while (last[j] != '\0')
    {
        full[i] = last[j];
        i++;
        j++;
    }
    full[i] = '\0';
    printf("%s", full);
    int len = i+1;
    
    if (len<sw)
    printf("fits in the screen");
    else 
    printf(" does not fit in the screen!");
}
void main()
{
    char first[100] = "punith raj";
    char last[100] = "kumar";
    int sw = 20;
    name(first,last,sw);
}