#include<stdio.h>
int main()
{
    int array[]={3,5,1,2};
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(array[j]<array[min])
            {
                min=j;
            }
        }
        int temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
    printf("Sorted array : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}