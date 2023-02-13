#include <stdio.h>

//多组输入，判断是不是字母
int main() {
    int ch = 0;
    while ((ch = getchar()) != EOF) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            printf("%c is an alphabet.\n", ch);
        } else {
            printf("%c is not an alphabet.\n", ch);
        }
        getchar();
    }
    return 0;
}