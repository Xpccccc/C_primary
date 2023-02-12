#include <stdio.h>

int Fun(int n, int k) {
    if (k == 1)
        return n;
    return n * Fun(n, k - 1);
}

int main() {
    //递归实现n的k次方
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);
    int ret = Fun(n, k);
    printf("%d\n", ret);
    return 0;
}
