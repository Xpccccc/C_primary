#include <stdio.h>

//数组名是首元素地址（存在2个例外）
//2个例外：
//1、sizeof(数组名)是整个数组的大小
//2、&数组名是整个数组的地址
int main() {
    //数组
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",sizeof (arr));

    printf("%p\n",arr);
    printf("%p\n",arr+1);

    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[0]+1);

    printf("%p\n",&arr);//整个数组的地址
    printf("%p\n",&arr+1);//整个数组的地址的下一个地址，即首元素地址+40
    return 0;
}
