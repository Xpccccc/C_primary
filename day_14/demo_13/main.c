#include <stdio.h>

int main() {
    //二分查找
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int input = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    scanf("%d", &input);
    int binary_search(int arr[], int, int);
    int ret = binary_search(arr, input, sz);
    if (-1 == ret) {
        printf("没找到\n");
    } else {
        printf("%d", ret);
    }
    return 0;
}

int binary_search(int arr[], int x, int sz) {
    int left = 0;
    int right = sz - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (x > arr[mid]) {
            left = mid + 1;
        } else if (x < arr[mid]) {
            right = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}

