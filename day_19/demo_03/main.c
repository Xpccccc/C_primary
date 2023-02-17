#include <stdio.h>

//const的用法
int main() {
    const int num = 10;
    //*num = 20;//不可修改
    int const *p = &num;//const 在*前面 p指针指向的内容（*p）不可修改 ,p指针可修改
    //*p=10;//不能修改
    p = 10;//指针可修改
    int *const pp = &num;//const 在*后面面 pp指针不可修改 ,pp指针指向的内容可以修改
    *pp = 99;
    return 0;
}
