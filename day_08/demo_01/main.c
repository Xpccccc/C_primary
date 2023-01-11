#include <stdio.h>

int binary_search(int arr[],int x,int sz){
    int left = 0;
    int right = sz-1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(x > arr[mid]){
            left = mid+1;
        }
        else if(x < arr[mid]){
            right = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;

}
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int x = 0;
    printf("请输入要查找的元素：");
    scanf("%d",&x);
    int sz = sizeof (arr)/sizeof (arr[0]);
    int ret = binary_search(arr,x,sz);
    if(-1 == ret)
        printf("没找到");
    else
        printf("找到了，数组下标为：%d",ret);
    return 0;
}
