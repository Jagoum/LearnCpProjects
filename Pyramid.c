#include <stdio.h>
void printTriangle(int row, int col);

int main()
{
    int line, col;
    printf("Please Enter the number of line : ");
    scanf("%d", &line);
    // printf("Please enter the number of columns: ");
    // scanf("%d", &col);

    //Prototype definition of function printTriangle

    printTriangle(line, col);
}
void printTriangle(int row, int col)
{
    for (int i = 0; i <= row * 2; i+=2)
    {
        for (int space = 1; space <= row * 2 - i; space++)
        {
            printf(" ");
        }
        for (int j = i; j < 2 * i - 1; j++)
        {
                printf("* ");
        }
    
            printf("\n");
    }
}
