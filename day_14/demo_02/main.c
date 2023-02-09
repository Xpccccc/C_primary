#include <stdio.h>
#include <tgmath.h>
#include <stdlib.h>
#include <time.h>


int main() {
//    //1～100之间3的倍数
//    for (int i = 1; i <= 100; i++) {
//        if (i % 3 == 0) {
//            printf("%d ", i);
//        }
//    }

//写代码将三个整数数按从大到小输出。
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a < b) {
//        int temp = a;
//        a = b;
//        b = temp;
//    }
//    if (a < c) {
//        int temp = a;
//        a = c;
//        c = temp;
//    }
//    if (b < c) {
//        int temp = b;
//        b = c;
//        c = temp;
//    }
//    printf("%d %d %d\n", a, b, c);

//打印100~200之间的素数
//    int flag = 0;//flag为0是素数
//    int count = 0;
//    for (int i = 101; i < 199; i += 2) {
//        flag = 0;
//        for (int j = 2; j <= sqrt(i); j++) {
//            if (i % j == 0) {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0) {
//            count++;
//            printf("%d ", i);
//        }
//    }
//    printf("素数个数:%d\n", count);

    //打印1000年到2000年之间的闰年
//    int count = 0;
//    for (int i = 1000; i <= 2000; i++) {
//        if ((i % 400 == 0) || ((i % 100 != 0) && (i % 4 == 0))) {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("\n闰年个数:%d\n", count);

    //给定两个数，求这两个数的最大公约数
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d", &a, &b);
//    int d = a * b;//a和b的乘积
//    //辗转相除法
//    while (a % b) {
//        c = a % b;//余数
//        a = b;
//        b = c;
//    }
//    printf("最大公约数%d\n", b);
//    printf("最小公倍数%d\n", d / b);


//    在屏幕上输出9*9乘法口诀表
//    for (int i = 1; i <= 9; i++) {
//        for (int j = 1; j <= i; ++j) {
//            printf("%d*%d=%-4d", i, j, i * j);
//        }
//        printf("\n");
//    }

    //求10 个整数中最大值
//    int arr[10] = {0};
//    for (int i = 0; i < 10; ++i) {
//        scanf("%d", &arr[i]);
//    }
//    int max = arr[0];
//    for (int i = 0; i < 10; ++i) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    printf("\n最大值：%d\n",max);

//    计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
//    double sum = 0.0;
//    int flag = 1;
//    for (int i = 1; i <= 100; i++) {
//        sum += flag * (1.0 / i);
//        flag = -flag;
//    }
//    printf("%lf", sum);

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//    int count = 0;
//    for (int i = 1; i <= 100; i++) {
//        if (i % 10 == 9 || i / 10 == 9) {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("\n%d\n",count);

//猜数字
//    int input = 0;
//    srand((unsigned int) time(NULL));
//    int x = rand() % 100+1;
//    printf("亲给输入1～100的数字:>");
//    scanf("%d",&input);
//    while(1){
//        if(input>x){
//            printf("大了\n");
//            scanf("%d",&input);
//        }
//        else if(input<x){
//            printf("小了\n");
//            scanf("%d",&input);
//        }
//        else if(input==x){
//            printf("恭喜你答对了\n");
//            break;
//        }
//    }

//二分查找
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int input = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    scanf("%d", &input);
    int binary_search(int arr[], int, int);
    int ret = binary_search(arr, input, sz);
    if (-1 == ret) {
        printf("没找到\n");
    } else {
        printf("%d", ret);
    }
    return 0;
}
int binary_search(int arr[], int x, int sz) {
    int left = 0;
    int right = sz - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (x > arr[mid]) {
            left = mid + 1;
        } else if (x < arr[mid]) {
            right = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}