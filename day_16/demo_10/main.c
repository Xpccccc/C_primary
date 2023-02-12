#include <stdio.h>

int count_binary_num1(int n) {
    int count = 0;
    for (int i = 0; i < 32; i++) {
        if (1 == ((n >> i) & 1)) {
            count++;
        }
    }
    return count;
}

int main() {
    //统计二进制中1的个数
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", count_binary_num1(n));
    return 0;
}
