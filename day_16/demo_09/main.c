#include <stdio.h>

int main() {
    //不允许创建临时变量，交换两个整数的内容
    int a = 3;
    int b = 4;
    a = a ^ b;
    b = a ^ b;//(a^b)^b 即 b=a (原始的a)
    a = a ^ b;//(a^b)^a 即 a=b (原始的b)
    printf("%d %d", a, b);
    return 0;
}
