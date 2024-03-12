#include<stdio.h>
int peak(int array[],int size)
{
    if(size==1)
    return 0;
    if(array[0]>=array[1])
    return 0;
    if(array[size-1]>=array[size-2])
    return size-1;
    for(int i=0;i<size-1;i++)
    {
        if(array[i]>=array[i-1] && array[i]>=array[i+1])
        return i;
    }
}
int main()
{
    int array[]={1,30,20,4,1,0};
    int size=sizeof(array)/sizeof(array[0]);
    printf("Index of the peak = %d\n",peak(array,size));
    return 0;
}