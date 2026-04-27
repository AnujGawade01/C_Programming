// Here we use pragma pack directive to instruct the compiler to align & allocate memory to the members to the value of 1 byte as to avoid padding
#include<stdio.h>
//Declaration
#pragma pack(1)
struct Demo
{
    int i;   //4
    char ch; //1
    float f; //4
};           //9

int main()
{
    struct Demo dobj;
    printf("%lu\n",sizeof(dobj));   //9
    return 0;
}
