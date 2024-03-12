#include<stdio.h>
int main()
{
    int prev1=1,prev2=0;
    int n;
    printf("%d-",prev2);
    printf("%d-",prev1);
    for(int i=0;i<18;i++)
    {
        n=prev1+prev2;
        printf("%d-",n);
        prev2=prev1;
        prev1=n;
    }
    return 0;
}