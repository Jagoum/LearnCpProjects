
#include <stdio.h>
#include "average.h"

float CalculateAverage(in *data)
{
    int average=0;

    for(int i=0;i<max;i++)
    {
        
        average += *(data++);


    }
   float var=(average)/max;
    printf("%f", var);
    //return (average)/max;
    return 0;
}