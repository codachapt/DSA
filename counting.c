#include<stdio.h>

//counting the number of alphabets ,digits and special charecters
#include<string.h>
#include<stdlib.h>
#define str_size 100
int main()
{
    char str[str_size];
    int alp,digit,splch,i;
    alp=digit=splch=i=0;
    printf("input string is :");
    fgets(str,sizeof str,stdin);

    while(str[i]!='\0')
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        alp++;
        else if(str[i] >= '0' && str[i] <= '9')
        digit++;
        else 
        splch++;
        i++;
    }
     printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", splch);
    return 0;
}