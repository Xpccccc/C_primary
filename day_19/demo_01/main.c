#include <stdio.h>

//指针数组
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 5, 6};
    int arr3[] = {3, 4, 5, 6, 7};
    int arr4[] = {4, 5, 6, 7, 8};

    int *arr[] = {arr1, arr2, arr3, arr4};
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
    return 0;
}
