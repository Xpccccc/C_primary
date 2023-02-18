#include <stdio.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
int main() {
    int a = 20;//钱数
    int b = a;//喝汽水总数
    while (a != 0) {
        a = a / 2;
        b += a;
    }

    printf("%d",b);
    return 0;
}
