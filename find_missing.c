#include<stdio.h>
void find(int array[],int size)
{
    int sum1=0;
    for(int i=0;i<size+2;i++)
    {
        sum1=i+sum1;
    }
    int sum2=0;
    for(int i=0;i<size;i++)
    {
        sum2=array[i]+sum2;
    }
    int n=sum1-sum2;
    printf("Missing number is : %d\n",n);
}
int main()
{
    int array[]={1,2,3,5,4,7,8};
    int size=sizeof(array)/sizeof(array[0]);
    find(array,size);
    return 0;
}