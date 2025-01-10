#include <stdio.h>
void printTriangle(int row, int col);

int main()
{
    int line, col;
    printf("Please Enter the number of line : ");
    scanf("%d", &line);
    printf("Please enter the number of columns: ");
    scanf("%d", &col);

    //Prototype definition of function printTriangle

    printTriangle(line, col);
}
void printTriangle(int row, int col)
{
    for (int i = 1;i <= row ; i++)
    {
        for (int space = 1; space <= col - i; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i ; j++)
        {
            //
                printf("*");
        }

            printf("\n");
    }
}


/*Alternative method*/

// #include <stdio.h>
// void printTriangle(int row, int col);

// int main()
// {
//     int line, col;
//     printf("Please Enter the number of line : ");
//     scanf("%d", &line);
//     printf("Please enter the number of columns: ");
//     scanf("%d", &col);

//     // Prototype definition of function printTriangle

//     printTriangle(line, col);
// }
// void printTriangle(int row, int col)
// {
//     if (col < row)
//     {
//         printf("Please the lines should be less than the columns");
//     }
//     else{
//     for (int i = 1; i <= row * 2; i++)
//     {
//         for (int space = 1; space <= col * 2 - i; space++)
//         {
//             printf(" ");
//         }
//         for (int j = i; j < 2 * i - 1; j++)
//         {
//             if (i % 2)
//                 printf("* ");
//         }

//         printf("\n");
//     }
//     }
// }
