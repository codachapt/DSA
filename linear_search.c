#include <stdio.h>
int Search(int array[], int size, int Val)
{
for (int i = 0; i < size; i++) {
        if (array[i] == Val) {
            return i;
        }
    }
    return -1;
}
int main() {
    int array[] = {3, 7, 2, 9, 5};
    int Val = 1;
    int size = sizeof(array) / sizeof(array[0]);
    int result = Search(array, size, Val);
    if (result != -1) 
    {
        printf("Value %d found at index %d\n", Val, result);
    } 
    else {
        printf("Value %d not found\n", Val);
    }

    return 0;
}

