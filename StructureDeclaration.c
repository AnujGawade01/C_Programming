// Here we create a structure
#include<stdio.h>

//Declaration
struct Demo
{
    int i;   //4
    float j; //4
};           //8

int main()
{
    struct Demo dobj;
    printf("%lu\n",sizeof(dobj));   //8
    return 0;
}
