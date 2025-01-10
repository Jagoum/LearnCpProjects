#include "electro.h"

float get_req_resistance(float r1, float r2, float r3)
{

    return r1 + ((r2*r3)/(r2+r3));
    
}
float get_power(float cur, float vol)
{

    return cur*vol;
}