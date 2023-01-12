#include <stdio.h>

 //递归调用
 void print(int n){
    if(n<10){
        printf("%d ",n);
    }
    else{
        print(n/10);
        printf("%d ",n%10);
    }
}

int main() {
    int input = 0;
    scanf("%d",&input);
    print(input);
    return 0;
}
