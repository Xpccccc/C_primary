#include <stdio.h>

//打印杨辉三角
int main() {
    int n = 0;
    int arr[100][100] = {{1},
                         {1, 1}};
    scanf("%d", &n);
    //1
    //1 1
    //1 2 1
    //1 3 3 1
    //行
    for (int i = 0; i < n; ++i) {
        //列
        int j = 0;
        for (j = 0; j < i; ++j) {
            if (0 == j) {
                arr[i][j] = 1;//存到数组里
                printf("%d ", 1);
            } else {
                //当前值等于当前位置的上一个位置的值加上当前位置的上一个位置的左边的值
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];//存到数组里
                printf("%d ", arr[i][j]);
            }
        }
        if (i == j) {//最右边的值
            arr[i][j] = 1;//存到数组里
            printf("%d\n", 1);
        }
    }
    return 0;
}
