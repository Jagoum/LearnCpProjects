#include <stdio.h>
#include "electro.h"

int main(){
    float r1,r2,r3;
    float voltage;
    printf("Enter r1, r2 and r3:");
    scanf("%f%f%f",&r1,&r2,&r3);
    printf("The Total resistance is : %f ohm\n",get_req_resistance(r1,r2,r3));

    printf("Enter the value of voltage:\n");
    scanf("%f",&voltage);
    float current = voltage / get_req_resistance(r1,r2,r3); 
    printf("The Power is : %f watt\n",get_power(current,voltage));

}