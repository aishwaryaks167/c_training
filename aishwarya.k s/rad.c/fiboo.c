#include <stdio.h>
void fiboo(int n)
{
    int a =0, b = 1;
    int sum;
    for (int i = 1; i<=n; i++)
    {
        printf("%d",a);
        sum = a+b;
        a = b;
        b = sum;
    }
}
void main()
{
    int n;
    printf("emter n;");
    scanf("%d",&n);
    fiboo(n);
}