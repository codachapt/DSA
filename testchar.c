#include<stdio.h>
#include<ctype.h>
int main()
{
    char Testchar;
    printf("Input the charecter:");
    scanf("%c",&Testchar);
    if(isxdigit(Testchar))
    printf("the entered charecter is hexadecimal number\n");
    else
    printf("The entered charecter is not a hexadecimal\n");
    return 0;
}