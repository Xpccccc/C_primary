#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//递归
int func(int n){
    if(n == 1)
        return 1;
    return n*func(n-1);
}
int main() {
//    int input = 0;
//    scanf("%d",&input);
//    int sum = 0;//递归和
//    for(int i=1; i<=input;i++){
//        sum+=func(i);
//    }
//    printf("递归和为：%d\n",sum);
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof (arr)/sizeof (arr[10]);//元素个数
    int input = 0;
    scanf("%d",&input);
    int left = 0;
    int right = sz-1;
    while (left<=right){
        int mid = left+(right-left)/2; //防止相加地址太大越界（left+right）/2
        if(input < arr[mid])
            right = mid-1;//输入值小于中间值，从左边找
        else if(input > arr[mid])
            left = mid+1;//输入值大于中间值，从右边找
        else{
            printf("所找元素下标为：%d",mid);
            break;
            }

    }
    if(left>right)
        printf("没找到");

//    srand((unsigned int)time(NULL));
//    int r = rand()%100+1;
//    printf("%d",r);
    return 0;
}
