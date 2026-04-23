#include<stdio.h>

int main()
{   
    char ch = 'A';
    int i = 11;
    float f = 90.99f;
    double d = 78.67890;

    printf("L Values of all variables\n");
    
    printf("%lu\n",&ch);
    printf("%lu\n",&i);
    printf("%lu\n",&f);
    printf("%lu\n",&d);

    return 0;
}