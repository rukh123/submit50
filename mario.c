#include<stdio.h>
#include<cs50.h>
int main (void)
{
    int height, i, j, space;
    do
    {
        height = get_int("height= ");
    }
    while (height < 1 || height > 8);
    for (i=0; i < height; i++)
    {
        for (space=0; space < height - i -1; space++)
        {
            printf(" ");
        }
        for (j=0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
