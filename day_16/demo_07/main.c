#include <stdio.h>

void init(int *arr, int sz) {
    for (int i = 0; i < sz; ++i) {
        arr[i] = 0;
    }
}
void print(int *arr, int sz) {
    for (int i = 0; i < sz; ++i) {
        printf("%d ", arr[i]);
    }
}
void reverse(int *arr, int sz) {
    int left = 0;
    int right = sz - 1;
    while (left <= right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}
int main() {
    //创建一个整形数组，完成对数组的操作
    //实现函数init() 初始化数组为全0
    //实现print()  打印数组的每个元素
    //实现reverse()  函数完成数组元素的逆置。
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sz1 = sizeof(arr1) / sizeof(arr1[0]);
    int sz2 = sizeof(arr2) / sizeof(arr2[0]);
    init(arr1, sz1);
    print(arr1, sz1);
    reverse(arr2, sz2);
    printf("\n");
    print(arr2, sz2);
    return 0;
}
