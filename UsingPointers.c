#include <stdio.h>

struct points
{
    int x;
    int y;
    
};
// struct rec
// {
//     struct 
// };


int main()
{

    struct points origin;
    struct points  *point;
    point = &origin;
    printf("Enter the y coordinate: ");
    scanf("%d",&point->x);
    printf("Enter the y axis: ");
    scanf("%d",&point->y);
    printf("\n\nX = %d and Y = %d And Point is (%d, %d)",point->x,point->y,point->x,point->y);
}
