#include <stdio.h>
int main()
{
    int N[100];
    int num;
    int elm=0;
    printf("Enter the elements of the array and -1 to stop:\n");

    for(int i=0; i<100;i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d",&num);
        if(num != -1){
            N[i]=num;
            elm++;
        }

        else
        {
            break;
        }

    }
    printf("Elements before sorting: ");
    for(int i=0;i<elm;i++){
        printf("%d\t",N[i]);
    }
    printf("\n");

    for(int i=0;i<elm-1;i++)
    {
        for(int j=0;j<elm-1-i;j++)
        {
            if(N[j]>N[j+1])
            {
                int temp = N[j];
                N[j] = N[j+1];
                N[j+1]=temp;
            }
        }
    }

    printf("Elements After Sorting: ");
    for(int i=0;i<elm;i++){
        printf("%d\t",N[i]);
    }

    

}