#include <stdio.h>

//上三角矩阵判定
int main() {
    int n = 0;
    int arr[10][10] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;//判断下三角元素是否存在不为0的整数
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i > j) && (arr[i][j] != 0)) {
                flag = 0;//下三角元素是否存在不为0的整数
            }
        }
    }
    if (1 == flag) {//下三角元素不存在不为0的整数
        printf("YES\n");
    }
    if (0 == flag) {
        printf("NO\n");
    }
    return 0;
}