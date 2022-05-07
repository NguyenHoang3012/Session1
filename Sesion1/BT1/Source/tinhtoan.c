#include"C:\Users\admin\Downloads\Nodejs\BT1\Header\tinhtoan.h"
#include <stdio.h>
int ViTri(int a[30],int n)
{
    int t,i;
    printf("\nNhap vao gia tri can tim:");
    scanf("%d",&t);
    for( i=0;i<n;i++)
    {
        if(t==a[i])
        {
            printf("\nVi tri can tim la:%d",i);
        }
        else
        {
            printf("\n Khong thay vi tri!");
            break;
        }
    }
    return i;
}
int Max(int a[30],int n)
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("\nMAX:%d",max);
    return max;
}
int Min(int a[30],int n)
{
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("\nMIN:%d",min);
    return min;
}
int tong(int a[30],int n)
{
    int tong=0;
    for(int i=0;i<n;i++)
    {
        tong+=a[i];
    }
    printf("TONG:%d",tong);
    return tong;
}