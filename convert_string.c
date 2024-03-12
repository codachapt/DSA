#include<stdio.h>
#include<string.h>
void convert(char string[])
{
    int length=strlen(string);
    for(int i=0;i<length;i++)
    {
        if(string[i]>='a'&&string[i]<='z')
        {
            string[i]=string[i]-32;
        }
        else if(string[i]>='A'&&string[i]<='Z')
        {
            string[i]=string[i]+32;
        }
    }
}
int main()
{
    char string[]="sahil NADAF";
    convert(string);
    printf("%s",string);
    return 0;
}