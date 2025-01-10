#include <stdio.h>
int main()
{
    int num;

//taking input from the user

    printf("Please enter a number : \n");
    scanf("%d",&num);
    printf("The Multiplication time table of %d is:\n",num);

// Implementing the multiplication table

    // for(int i = 0;i<=10;i++)
    // {
    //     printf("%d X %d = %d\n",i,num,i*num);
    // }
    int i = 0;
    while(i<=10)
    {
        printf("%d X %d = %d\n",i,num,num*i);
        i++;
    }
}