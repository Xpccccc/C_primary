#include <stdio.h>
#include <string.h>

int my_strlen(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

void reverse_string(char *str) {
    char *left = str;
    int len = my_strlen(str);
    char *right = str + len - 1;
    char temp = *left;
    *left = *right;
    *right = '\0';
    if (my_strlen(str + 1) > 1)
        reverse_string(str + 1);
    *right = temp;
}

int main() {
    char arr[1000] = {0};
    char *p = arr;
    char ch = 0;
    int i = 0;
    //字符串输入
    while ((ch = getchar()) != '\n') {
        arr[i] = ch;
        i++;
    }
    //加字符串尾
    arr[i] = '\0';
    int len = my_strlen(arr);
    reverse_string(arr);
    for (int i = 0; i < len; i++) {
        printf("%c", *(p + i));
    }
    return 0;
}