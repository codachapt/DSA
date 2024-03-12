//C PROGRAM TO REVERSE THE WORDS IN THE GIVEN STRING
#include<stdio.h>
void reverse(char *begin, char *end){
    char temp;
    temp=*begin;
    *begin++=*end;
    *end--=temp;
}
void reversewords(char *s)
{
    char *word_begin=s;
    char *temp=s;
    while(*temp){
        temp++;
        if(*temp=='\0'){
            reverse(word_begin,temp-1);
        }else if(*temp==' '){
            reverse(word_begin,temp-1);
            word_begin=temp+1;
        }
    }
    reverse(s,temp-1);
}
int main()
{
    char s[100];
    char *temp=s;
    printf("Input the string :");
    fgets(s,sizeof s,stdin);
    reversewords(s);
    printf("after revesing : %s\n",s);
    return 0;
}