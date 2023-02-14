#include <stdio.h>
#include <tgmath.h>

int is_shuixianhua(int n) {
    int m = n;//防止n被修改
    int count = 0;//n的位数
    int sum = 0;
    while (m) {
        m = m / 10;
        count++;
    }
    m = n;//重置m
    //求等式右边的和
    while (m) {
        sum += pow(m % 10, count);
        m = m / 10;
    }
    if (n == sum)
        return 1;
    else
        return 0;
}
int main() {
    //求出0～100000之间的所有“水仙花数”并输出。
    //“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。
    int count = 0;
    for (int i = 1; i <= 100000; ++i) {
        if (1 == is_shuixianhua(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n个数为：%d\n", count);
    return 0;
}
