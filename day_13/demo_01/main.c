#include <stdio.h>
#include <string.h>

//用递归方法逆序字符串
void reverse_string(char *str) {
    int len = strlen(str);
    char *left = str;//字符串最左位置
    char *right = str + len - 1;//字符串最右位置
    char temp = *left;//临时存储当前指针最左位置数据
    *left = *right;
    *right = '\0';//方便下次递归
    //如果从当前位置开始向后的字符串长度大于1，则继续递归逆序从当前位置向后的字符串
    if (strlen(str + 1) > 1)
        reverse_string(str + 1);
    //递归完后将\0的位置换回要交换的数据
    *right = temp;
}

int main() {
    char arr[] = "abcdef";
    reverse_string(arr);//用递归方法逆序字符串
    for (int i = 0; i < strlen(arr); ++i) {
        printf("%c",arr[i]);
    }
    return 0;
}
