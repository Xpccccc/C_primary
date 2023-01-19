#include <stdio.h>

int main() {
    //二维数组
    int arr[3][4] = {{1,2},{3,4},{5}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("arr[%d][%d]=%d ",i,j,arr[i][j]);
        }
    }
    return 0;
}
