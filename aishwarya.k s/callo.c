#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p = (float *)calloc(4,sizeof(float));
    p[0]= 7.9;
    p[1]= 9.9;
    p[2]=10.9;
    p[3]=12.5;
    printf("%f%f%f%f",p[0],p[1],p[2],p[3]);
    free(p);
}