#include <stdio.h>
#include <assert.h>

char *my_strcpy(char *dest, const char *src) {
    assert(dest);//断言，防止传过来空指针
    assert(src);
    char *ret = dest;//保留目的字符串的原始地址
    while (*dest++ = *src++) { ;
    }
    return ret;
}

//模拟实现strcpy
int main() {
    char arr1[] = "xxxxxxxxxxxxx";
    char arr2[] = "hello";
    printf("%s", my_strcpy(arr1, arr2));
    return 0;
}
