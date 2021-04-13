#include <stdlib.h>

int main()
{
    int* array = (int*)calloc(10, sizeof(int));

    array[0] = 18;
    array[6] = 21;

    free(array);
}