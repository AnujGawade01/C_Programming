// Here we use the signed and unsigned data type range modifiers.
// unsigned bit cannot be a negative number as the first bit is not treated as signed bit and is actually used for storing the data
#include<stdio.h>

int main()
{   
    int i = 11;          //signed
    int j = -11;         //signed
    unsigned int k = 11; //unsigned 
    signed int a = 11;   //signed
    signed int b = -11;  //signed
    

    return 0;
}
