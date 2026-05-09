// Here we read the content in the file
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
    
int main()
{
    int fd = 0;
    char Arr[20] = {0};

    fd = open("Marvellous.txt", O_RDONLY);

    if( fd == -1)
    {
        printf("The file was not created\n");
    }
    else
    {
        printf("The fd of created file is %d\n",fd);
        read(fd,Arr,6);
        printf("%s\n", Arr);

        close(fd);
    }   
    return 0;
}
