#include <stdio.h>
int main(){
    int arr[10];
    int count = 0;
    printf("Please enter 10 intergers:\n\n");
    for(int i=0;i<10;i++)
    {
        printf("Enter interger %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i<10;i++)
    {
        if(arr[i]%2)
        {
            count ++;
        }
    }
    printf("There where %d even numbers and %d odd numbers",count,10 - count);
}