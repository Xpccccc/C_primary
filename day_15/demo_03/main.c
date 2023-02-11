#include <stdio.h>

int is_runnian(int n) {
    if ((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0)))
        return 1;
    return 0;
}

int main() {
    //函数判断闰年
    int input = 0;
    scanf("%d", &input);
    int ret = is_runnian(input);
    if (1 == ret) {
        printf("是闰年\n");
    } else {
        printf("不是闰年\n");
    }
    return 0;
}
