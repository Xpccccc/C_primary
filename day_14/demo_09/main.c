#include <stdio.h>

int main() {
    //求10 个整数中最大值
    int arr[10] = {0};
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i < 10; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("\n最大值：%d\n",max);
    return 0;
}
