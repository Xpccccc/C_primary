#include <stdio.h>

//有符号数、无符号数、整型提升、截断
int main() {
    char a = -128;
    //10000000000000000000000010000000 - -128原码
    //11111111111111111111111110000000 - -128补码
    //10000000 - 截断（有符号的char）
    //11111111111111111111111110000000 - 整型提升
    printf("%u\n", a);
    char c = 128;
    //00000000000000000000000010000000 - 128原码
    //00000000000000000000000010000000 - 128补码
    //10000000 - 截断（有符号的char）
    //11111111111111111111111110000000 - 整型提升
    printf("%u\n", c);
    return 0;
}