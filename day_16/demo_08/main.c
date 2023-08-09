#include <stdio.h>

void bubble_sort(int arr[], int sz) {
    //确定冒泡函数趟数
 	int i = 0;
 	for (i = 0;i < sz-1;i++)
 	{
 		//每一趟冒泡排序
 		int j = 0;
 		//假设这一趟要排序的数据已经有序
 		int flag = 1;
 		for (j = 0;j < sz - 1 - i;j++)
 		{
 			if (arr[j] > arr[j + 1])
 			{
 				int tmp = arr[j];
 				arr[j ] = arr[j+1];
 				arr[j+1] = tmp;
 				flag = 0;      //这一趟的数据不是有序
 			}
 		}
 		if (1 == flag)
 		{
 			break;
 		}
 	}
}
int main() {
    //实现一个对整形数组的冒泡排序
    int arr[] = {1, 3, 5, 7, 4, 88, 43, 6, 9, 70, 55};
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < sz; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubble_sort(arr, sz);
    for (int i = 0; i < sz; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}

