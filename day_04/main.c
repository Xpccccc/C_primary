#include <stdio.h>

int main() {
    int i=0;
    while(i<10){
        i++;
        if(5 == i)
            continue;//continue会跳过本次循环后面的语句，直接去判断部分判断
        printf("%d ",i);
    }
    return 0;
}
