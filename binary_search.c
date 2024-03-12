#include<stdio.h>
int binary(int array[],int size,int value)
{
    int left=0;
    int right = size-1;
    while(left<=right)
    {
        int mid=(right + left)/2;

        if(array[mid]==value)
        {
            return mid;
        }
        else if(array[mid]<value)
        {
            left=mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;
}
int main()
{
    int array[]={1,3,4,5};
    int value=5;
    int size=sizeof(array)/sizeof(array[0]);
    int result=binary(array,size,value);
    if (result != -1) 
    {
        printf("Value %d found at index %d\n", value, result);
    } 
    else {
        printf("Value %d not found\n", value);
    }

    return 0;
}