#include <stdio.h>

int main()
{
    int numb = 50;
    int *ptr = &numb;
    printf("The number is %d and address is %p ",numb,&numb);
}