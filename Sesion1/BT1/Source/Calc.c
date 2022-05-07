/*1 Calc.c
tính tổng của nhiều số
tìm số lớn nhất mảng
tìm số nhỏ nhất mảng
tìm vị trí trong mảng
*/
#include <stdio.h>
#include"../Header/tinhtoan.h"
int main(){
    int n;
    int a[10];
    printf("N=");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     tong(a,n);
     Max(a,n);
     Min(a,n);
     ViTri(a,n);
}