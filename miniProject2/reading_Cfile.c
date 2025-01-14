#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file_ptr;

//     // in line file_ptr = fopen(main.c, "r")
//     // we are opening the file in reading mode

//     file_ptr = fopen("../array2.c", "r");
//     char ch;
//     if (NULL == file_ptr)
//     {
//         printf("File can't be open");
//         return EXIT_FAILURE;
//     }

//     printf("The content of the file are : \n");

//     // Here we are printing what is written in the fil
//     // e line  by line

//     while (( ch = fgetc(file_ptr)) != EOF)

//     {
//         printf("%c", ch);
//         /* code */
//     }
//     fclose(file_ptr);
//     return 0;
// }


char str[30];

file_ptr = fopen("../Pyramid.c","r");

// checking is the file is null 

if(NULL ==  file_ptr)
{
    printf("File cannot be opened ");
    return EXIT_FAILURE;
}

/*
    checking the content of the file string by string and displaing the out put
*/

printf("The content of the file are:: \n\n");
while ((fgets(str,30,file_ptr)!=NULL))
{
printf("%s",str);
}
fclose(file_ptr);
return 0;

}