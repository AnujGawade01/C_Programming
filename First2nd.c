//created for C Programming Assignment 8 Q.No 8 together with 1stSecond.c to compile together

#include<stdio.h>

int Add(int a, int b);

int main()
{   
    int x = 0, y = 0;
    int sum = 0;
    printf("Enter first number:\n");
    scanf("%d",&x);
    printf("Enter second number:\n");
    scanf("%d",&y);
    sum = Add(x,y);
    printf("The Addition is: %d\n", sum);
    
    return 0;
}

