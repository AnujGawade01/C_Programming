//Here we create a structure that also generates padding
#include<stdio.h>

//Declaration
struct Demo
{
    int i;   //4
    char ch; //1  it generates padding
    float f; //4
};           //12

int main()
{
    struct Demo dobj;
    printf("%lu\n",sizeof(dobj));   //12
    return 0;
}
