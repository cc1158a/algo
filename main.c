#include "stdio.h"
#include "sort.h"
int main(){
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {5, 4, 3, 2, 1};
    int array3[] = {5, 1, 4, 1, 3};

    qs(array1, 5);
    qs(array2, 5);
    qs(array3, 5);
    printf("done");
}