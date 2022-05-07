#include<stdio.h>
#include"../Header/tinhtoan.h"
int main(int argc, char const *argv[])
{
    
    int n,a[20];
    printf("Nhap vao gia tri cua N=");
    scanf("%d",&n);
    ConvertB(n,a);
    ConVertHEX(n,a);
    return 0;
}
