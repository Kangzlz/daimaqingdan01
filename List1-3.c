/*猜数游戏（其二（另一种解法）：重复道猜对为止——利用while语句）*/
#include<stdio.h>
int main(void){
    int no;
    int ans=7;

    printf("请输入0~9的整数。\n\n");

    while(1){
        printf("是多少呢：");
        scanf("%d",&no);

        if(no>ans)
        printf("\a再小一点。\n");
        else if(no<ans)
        printf("\a再大一点。\n");
        else
        break;
    }
    printf("回答正确。\n");

    return 0;
}