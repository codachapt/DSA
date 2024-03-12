#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) 
    {
        char ch = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = ch;
    }
}

int main() {
    char string[100], res[100]={0}, word[50];
    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);
    strcat(string, " ");
    int j = 0;
    for (int i = 0; string[i] != '\0'; i++) 
    {
        if (string[i] == ' ') 
        {
            word[j] = '\0';
            reverse(word);
            strcat(res, word);
            strcat(res, " ");
            j = 0;
        } 
        else {
            word[j] = string[i];
            j++;
        }
    }
    printf("Reversed string: %s\n", res);
    return 0;
}
