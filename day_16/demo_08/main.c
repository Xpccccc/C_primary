#include <stdio.h>

void bubble_sort(int arr[], int sz) {
    for (int i = 0; i < sz - 1; ++i) {
        int flag = 1;//标志位
        for (int j = i; j < sz - 1; ++j) {//继续从下一个位置开始
            if (arr[j] > arr[j + 1]) {
                flag = 0;//说明有交换
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        //如果有一躺没有交换，则直接结束排序（已经排序好）
        if (1 == flag)
            break;
    }
}
int main() {
    //实现一个对整形数组的冒泡排序
    int arr[] = {1, 3, 5, 7, 4, 88, 43, 6, 9, 70, 55};
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < sz; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubble_sort(arr, sz);
    for (int i = 0; i < sz; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}

