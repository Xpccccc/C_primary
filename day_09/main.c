#include <stdio.h>

//求字符串长度
int my_strlen(char* str){
    if(*str !='\0')
        return 1+ my_strlen(str+1);
    else
        return 0;
}
int main() {
    char arr[] = "abcdefg";
    int ret = my_strlen(arr);
    printf("%d",ret);
    return 0;
}
