#include <stdio.h>

int main() {
    //将数组A中的内容和数组B中的内容进行交换。（数组一样大）
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; ++i) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ",arr2[i]);
    }
    return 0;
}
