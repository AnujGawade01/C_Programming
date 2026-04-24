// Here we create a const variable j and then try to increase its value using shorthand operator but the compiler will give error as it is not allowed
#include<stdio.h>

int main()
{   
    int i = 10;
    const int j = 10;

    i++; //allowed
    j++; //not allowed


    return 0;
}
