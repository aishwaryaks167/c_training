#include <stdio.h>
int search (int arr[], int key, int n)
{
    for (int i=0; i<n; i++)
    {
        if (arr[i]==key)
        return 1;
    }
    return 0;
}
void main()
{
    int arr[4] = {33,44,55,66};
    int n = 4;
    int key;
    printf("what are u searching?");
    scanf("5d", &key);
    printf("%d", search(arr,key,n));
}