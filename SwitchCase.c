#include <stdio.h>

int main()
{
    char letter;
    printf("Please enter a char : ");
    scanf("%c",&letter);
    
    switch (letter)
    {
        case 'O':
            printf("You have selected an Orange");
            break;

        case 'A':
            printf("You have selected an Apple");
            break;

        case 'M':
            printf("You have selected a Mangoustan");
            break;

        default:
            printf("Please enter either A, O or M");
            break;
 
    }
}