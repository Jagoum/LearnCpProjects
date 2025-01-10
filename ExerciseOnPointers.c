#include <stdio.h>
#include <ctype.h>
#define max 200

int countSpaces(char text[], int n);

int main()
{

    int n=0,j=0;
    int i;
    char word[max];
    printf("Please enter a text : ");
    for (i =0; i<max  /*&&(j=getchar()) != '\n*/ ;i++)
    {
        word[i] = getchar();
        n++;
        if(word[i]=='\n')
        break;
    }
    // n = i;
    printf("Number of spaces =  %d",countSpaces(word,n));
}
int countSpaces(char text[], int n)
{
    int count = 0;
    char *p = text + n;
    do
    {
        if (*p == ' ')
            count++;
        p--;
    } while (n--);
    return count;
}