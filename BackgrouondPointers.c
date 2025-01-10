#include <stdio.h>

int main(void)
{
    int age = 27;
    int *p;
    p = &age;

    printf("Age = %d\nThe content of p = %d\nAddress of age = %p \n", age, *p, &age);
    
    //
    
    printf("Address pointed by p = %p\n", p);
//printing the address of pointer p

    printf("Address of P = %p\n", &p);

    //Here we are puting a value in the address of age;

    *p = 22;
    
    printf("Content of P = %d\nAge = %d\n", *p, age);
    age = 35;
    printf("Content of P  = %d\nAge = %d\n", *p, age);
    return 0;
}