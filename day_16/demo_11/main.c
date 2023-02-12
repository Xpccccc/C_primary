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
    //两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int c = a ^ b;
    printf("%d\n", count_binary_num1(c));
    return 0;
}
