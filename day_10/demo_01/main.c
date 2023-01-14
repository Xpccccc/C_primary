#include <stdio.h>

//求斐波那契数列的和，非递归方法
int fib(int n){
    int a = 1;
    int b = 1;
    int c = 1;
    while(n>2){     // 当前值每次都是前一个和前前一个的和
        c = a+b; // 前一个和前前一个的和
        a=b;     //赋值动作相当于在计算完后循环后移一位
        b=c;
        n--;
    }
    return c;
}
int main() {
    int input = 0;
    scanf("%d",&input);
    int ret = fib(input);
    printf("%d\n",ret);
    return 0;
}
