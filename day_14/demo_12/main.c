#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //猜数字
    int input = 0;
    srand((unsigned int) time(NULL));
    int x = rand() % 100+1;
    printf("亲给输入1～100的数字:>");
    scanf("%d",&input);
    while(1){
        if(input>x){
            printf("大了\n");
            scanf("%d",&input);
        }
        else if(input<x){
            printf("小了\n");
            scanf("%d",&input);
        }
        else if(input==x){
            printf("恭喜你答对了\n");
            break;
        }
    }
    return 0;
}
