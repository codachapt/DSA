#include<stdio.h>
#include<string.h>
void count(char string[],char c)
{
    int cnt=0;
    for(int i=0;i<strlen(string)-1;i++)
    {
        if(string[i]==c)
        {
            cnt++;
        }
    }
    printf("Count : %d",cnt);
}
int main()
{
    char string[]="Sahil Nadaf";
    char c='S';
    count(string,c);
    return 0;
}