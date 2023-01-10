#include <stdio.h>

void Swap(int* pa,int* pb){
    int temp= *pa;
    *pa=*pb;
    *pb=temp;
}

//当函数调用的时候
//实参传给形参时，形参只是实参的一份临时拷贝
//所以对形参的修改不影响实参
//Swap(a,b);//传值调用

int main() {
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    printf("交换前的a=%d b=%d\n",a,b);
    Swap(&a,&b);  //传址调用
    printf("交换后的a=%d b=%d\n",a,b);
    return 0;
}
