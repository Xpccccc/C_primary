#include <stdio.h>

int main() {
//    int ch = 0;
//    while((ch = getchar()) != EOF){
//        putchar(ch);
//    }
    char password[20] ={0};
    printf("请输入密码：>");
    scanf("%s",password);
    int temp = 0;
    while((temp = getchar()) != '\n'){ //把输入缓冲区的字符全部读出，包括\n
        ;
    }
    printf("请确认密码(Y/N):>");
    int ch = 0;
    ch = getchar();
    if(ch == 'Y')
        printf("确认成功");
    else
        printf("确认失败");

    return 0;
}
