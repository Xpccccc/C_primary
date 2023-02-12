#include <stdio.h>

int my_strlen(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

void reverse_string(char *str) {
    int len = my_strlen(str);
    char *left = str;
    char *right = str + len - 1;
    char temp = *left;
    *left = *right;
    *right = '\0';//方便求从当前位置向后的未交换位置字符串长度
    if (my_strlen(str + 1) > 1)//从当前位置向后的字符串长度大于1才递归
        reverse_string(str + 1);//从当前位置向后的字符串开始递归
    *right = temp;//递归完后将\0的位置换回要交换的数据
}

int main() {
    //字符串逆序（递归实现）
    //编写一个函数 reverse_string(char * string)（递归实现）
    char arr[] = "abcdef";
    reverse_string(arr);
    for (int i = 0; i < my_strlen(arr); ++i) {
        printf("%c", arr[i]);
    }
    return 0;
}
