#include <stdio.h>
const int MAX0 = 5;
const int MAX1 = 5;
//
int print_zero(int Mat[MAX0][MAX1]);

int main()
{

    // int Mat[][];
    int Mat[5][5] = {{1, 0, 3, 0, 4}, {0, 2, 0, 8, 6}, {1, 1, 10, 23, 8}, {2, 0, 7, 12, 89}, {23, 0, 78, 89, 90}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" %3d ", Mat[j][i]);
        }
        printf("\n");
    }
    printf("Number of Zeroes = %d", print_zero(Mat));
    return 0;
}
int print_zero(int Mat[MAX0][MAX1])
{
    int count = 0;
    for (int i = 0; i < MAX0; i++)
    {
        for (int j = 0; j < MAX1; j++)
        {
            if (Mat[j][i] == 0)
                count++;
        }
    }
    return count;
}
