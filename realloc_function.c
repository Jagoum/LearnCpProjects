#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char *str1;
    char *str2;

    str1 = (char *)malloc(16);
    strcpy(str1 , "0123456789AB");
    str2 = realloc(str1,8);
    free(str1)
    printf("Str1 Value: %p [%s]\n",str1,str1);
    printf("Str2 Value: %p [%s]",str2,str2);
}