#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int x,flag=1;
    scanf("%d",&x);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] == x){
                flag = 1;
                break;
            }
            else{
                flag = 0;
                
            }
        }
        if(flag){
            break;
        }
    }
    if(flag){
        printf("will not take number\n");
    }
    else{
        printf("will take number\n");
    }
    return 0;
}