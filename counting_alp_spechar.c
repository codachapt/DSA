#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char string[100];
    int a,num,sp,i;
    a=num=sp=i=0;
    printf("input stringing is :");
    fgets(string,sizeof(string),stdin);

    while(string[i]!='\0')
    {
        if((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
        a++;
        else if(string[i] >= '0' && string[i] <= '9')
        num++;
        else 
        sp++;
        i++;
    }
    printf("Number of Alphabets in the string is : %d\n", a);
    printf("Number of Digits in the string is : %d\n", num);
    printf("Number of Special characters in the string is : %d\n\n", sp-1);
    return 0;
}