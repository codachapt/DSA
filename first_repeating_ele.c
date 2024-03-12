#include<stdio.h>
int repeat(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[i]==array[j])
            {
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    int array[]={10,3,5,6,5,7,8};
    int size=sizeof(array)/sizeof(array[0]);
    int index=repeat(array,size);
    if(index==-1)
    {
        printf("No repeating elements\n");
    }
    else{
        printf("first repeating element index is : %d\n",index);
    }
    return 0;
}