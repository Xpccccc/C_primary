#include <stdio.h>

int my_strlen1(char *str) {
    if (*str++ != '\0')
        return 1 + my_strlen1(str);
    return 0;//*str == '\0'
}

int my_strlen2(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main() {
    //递归和非递归分别实现strlen
    char arr[] = "fedcba";
    //递归实现
    int ret1 = my_strlen1(arr);
    int ret2 = my_strlen2(arr);
    printf("%d %d\n", ret1, ret2);
    return 0;
}
