#include <stdio.h>

int main() {
    //1～100之间3的倍数
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}