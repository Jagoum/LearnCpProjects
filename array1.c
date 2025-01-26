#include <stdio.h>
int main()
{
    
    char text[]={'d','a','r','r','h','a','f','o','r','t','k','e','l','E'};
    size_t length = sizeof(text) / sizeof(text[0]);
    for(int i = length - 1;i>=0;i--)
    {
        printf("%c",text[i]);


    }
}
