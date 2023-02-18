#include <stdio.h>

//变种水仙花数 例如：
//655 = 6 * 55 + 65 * 5
//1461 = 1*461 + 14*61 + 146*1
int main() {
    for (int i = 10000; i <= 99999; i++) {
        int sum = 0;//等式右边和
        int n = 10000;//每次i对10000～10求商和余数，将i分成左右两边
        while (n / 10) {
            sum += (i / n) * (i % n);//i的左右两边乘积
            n = n / 10;
        }
        if (i == sum) {
            printf("%d ", i);
        }
    }
    return 0;
}