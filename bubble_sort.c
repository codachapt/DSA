#include<stdio.h>
#include<stdbool.h>
int main()
{
    int array[]={3,5,1,2,-1,-2};
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size-1;i++)
    {
        bool swap = false;
        for(int j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                swap = true;
            }
        }
        if(!swap)
        {
            break;
        }
    }
    printf("Sorted array : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}