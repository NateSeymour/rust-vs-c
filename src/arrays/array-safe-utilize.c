#include <stdlib.h>
#include <stdio.h>

int main()
{
    int* array = (int*)calloc(10, sizeof(int));

    if(array == 0) 
    {
        return 1;
    }

    array[0] = 18;
    array[6] = 21;

    printf("The value is: %i\n", array[6]);

    free(array);
}