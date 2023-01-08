#include <stdio.h>

extern int g_val;//声明外部全局变量
extern int Add(int ,int);//声明外部函数

void test(){
    static int a=10;//将局部变量放到静态区，下次进入作用域，数据用的的上一次遗留的
    a++;
    printf("%d ",a);
}

int main() {
    int i=0;
    printf("%d\n",g_val);
    while (i<10){
        test();
        i++;
    }
    int c= Add(2,3);
    printf("%d\n",c);

    return 0;
}
