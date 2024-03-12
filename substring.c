// c program to extract substring from an given string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100],sstr[100];
    int pos,l,c=0;
    printf("input the string : ");
    fgets(str,sizeof str,stdin);
    printf("Enter the initial index of the substring:");
    scanf("%d",&pos);
    printf("ENter the lenght of the substring: ");
    scanf("%d",&l);
    while(c<l)
    {
        sstr[c]=str[pos+c-1];
        c++;
    }
    sstr[c]='\0';
    printf("The substring is : %s",sstr);
    return 0;
}