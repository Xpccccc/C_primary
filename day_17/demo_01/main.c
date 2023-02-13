#include <stdio.h>

int is_runnian(int year) {
    if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0))) {
        return 1;
    }
    return 0;
}

// 获得月份天数
int main() {
    int year = 0;
    int month = 0;
    //多组输入
    while (scanf("%d %d", &year, &month) != EOF) {
        int ret = is_runnian(year);
        if (month >= 1 && month <= 12) {
            if (1 == ret) {//闰年
                if ((4 == month) || (6 == month) || (9 == month) || (11 == month)) {
                    printf("%d\n", 30);
                } else if (2 == month) {
                    printf("%d\n", 29);
                } else {
                    printf("%d\n", 31);
                }
            } else {//平年
                if ((4 == month) || (6 == month) || (9 == month) || (11 == month)) {
                    printf("%d\n", 30);
                } else if (2 == month) {
                    printf("%d\n", 28);
                } else {
                    printf("%d\n", 31);
                }
            }
        }
    }

    return 0;
}
