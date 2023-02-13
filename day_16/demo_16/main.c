#include <stdio.h>

//序列中删除指定数字
//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，
//输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
int main() {
    int n = 0;
    int x = 0;
    int j = 0;
    int arr[50] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (x != arr[i]) {
            arr[j] = arr[i];        //若当前数组元素不等于要删除的元素，则将其存到从j开始的数组里
            j++;
        }
    }
    //现在数组长度为j
    for (int i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}