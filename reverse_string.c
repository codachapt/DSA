#include<stdio.h>
#include<string.h>
void reverse(char string[])
{
    int length = strlen(string);
    for(int i=length-1;i>=0;i--)
    {
        printf("%c",string[i]);
    }
    printf("\n");
}
int main()
{
    char string[]="Sahil";
    reverse(string);
    return 0;
}