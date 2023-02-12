#include <stdio.h>

void six(int n) {
    if (n > 5) {
        six(n / 6);
    }
    //n<=5时
    printf("%d", n % 6);
}

//十进制转六进制
int main() {
    int n = 0;
    scanf("%d", &n);
    six(n);
    return 0;
}