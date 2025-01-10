#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
srand(time(NULL));
    int a = rand()%100;
    int b = rand()%100;

    int num;
    int mid = (a + b)/2;

//making sure there is a valid range

    if(a>b)
    {
        a += b;
        b  = a - b;
        a -= b;
    }
    
    
    
    while(a<=b)
    {

    printf("Please enter a number to guess the middle of the range of two numbers : %d and %d \n",a,b);
    scanf("%d",&num);
        if(num < a)
        {
            printf("Too small (Out of range)!\n");
        }

        else if(num > b)
        {
            printf("Too big (Out of range)!\n");
        }

        else if(num <= b && num >= a && num < (mid+a)/2 && num < mid)
        {
            printf("Too small !\n");
        }

        else if(num <= b && num >= a && num > (mid+a)/2  && num < mid)
        {
            printf("A bit too small !\n");
        }

        else if(num <= b && num >= a && num < (mid+b)/2 && num > mid)
        {
            printf("A bit too big !\n");
        }

        else if(num <= b && num >= a && num > (mid+b)/2 && num > mid )
        {
            printf("Too big !\n"); 
        }

        else 
        { 
            printf("Correct !\n"); 
            break;     
        }    
    }

}