#include<stdio.h>
#include <cs50.h>
int main(void)
{
    string name;
    name = get_string("what's your name?");
    printf("hello, %s", name);
    return 0;
}    
