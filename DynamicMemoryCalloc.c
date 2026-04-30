// Here we use calloc function to dynamically allocate memory
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Size = 0;
    float *Marks = NULL;
    int i = 0;           //Loop Counter

    printf("Enter number of elements : \n");
    scanf("%d",&Size);

    //Dynamic Memory Allocation
    Marks = (float *)calloc(Size , sizeof(float));

    printf("Enter your Marks : \n");

    //Iteration
    //
    for(i = 0; i < Size; i++)
    {
        scanf("%f",&Marks[i]);     //  4
    }

    printf("Entered Marks are : \n");

    for(i = 0; i < Size; i++)
    {
        printf("%f\n",Marks[i]);     //  4
    }

    free(Marks);

    return 0;
    
}
