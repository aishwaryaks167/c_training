#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *p;
    p= (int*) realloc(p, 3* sizeof(int));
    p[0]=1;
    p[1]=4;
    p[2]=3;

     p = (int*) realloc(p, 5 * sizeof(int));
    p[3]=4;
    p[4]=2;
    for(int i=0; i<5; i++)
    {
        printf("%d",p[i]);
    }
    free (p);
} 