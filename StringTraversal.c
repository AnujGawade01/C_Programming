// Here we traverse the string and print it using while loop and pointer 
#include<stdio.h>

int main()
{
    char str[] = "Ganesh";
    char *ptr = NULL;

    ptr = str;      // 100

    while(*ptr != '\0')
    {
    printf("%c\n", *ptr);   
    ptr++;                  
    }

    return 0;
}
