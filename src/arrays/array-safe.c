#include <stdlib.h>

int main()
{
    int* array = (int*)calloc(10, sizeof(int));

    if(array == 0) 
    {
        return 1;
    }

    array[0] = 18;
    array[6] = 21;

    free(array);
}