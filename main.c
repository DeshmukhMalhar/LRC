#include <stdio.h>
#include <stdlib.h>
char calculateLRC(char *str)
{
    int i=0;
    char LRC = 0;
    for ( i = 0; i < strlen(str); i++)
    {
        LRC ^= str[i];
    }
    return LRC;
}
char xy[]="hijgcjtyrxut3yd5orcur7c5?";
int main()
{
    puts(xy);
    printf("\n lrc is : %d\n",calculateLRC(xy));
    return 0;
}
