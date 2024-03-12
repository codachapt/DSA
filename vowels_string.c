#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isVowel(char ch)
{
    //ch=toupper(ch) which converts lower case letters to uppercase letters in only c++ not in c
    return (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}
int count(char string[])
{
    int cnt=0;
    for(int i=0;i<strlen(string);i++)
    {
        if(isVowel(string[i]))
        {
            ++cnt;
        }
    }
    return cnt;
}
int main()
{
    char string[]="sahil";
    int occ=count(string);
    printf("Occurence = %d\n",occ);
    return 0;
}