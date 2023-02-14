#include <stdio.h>
#include <tgmath.h>

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2+22+222+2222+22222
int main() {
    int n = 0;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; ++j) {
            sum += n * pow(10, j);
        }
    }
    printf("%d\n",sum);
    return 0;
}
