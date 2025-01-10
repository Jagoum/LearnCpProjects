#include <stdio.h>

int main()
{
    char *arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int i;
    char  *ptr;
    //ptr = arr[10][6];
    // ptr = &arr;
    printf("Please enter a number : ");
    scanf("%d",&i);
    
    printf("%d in words is %s",i,arr[i]);
}