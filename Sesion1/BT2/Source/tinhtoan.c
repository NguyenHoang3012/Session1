#include<stdio.h>
#include"C:\Users\admin\Downloads\Nodejs\BT2\Header\tinhtoan.h"
int ConvertB(int n,int a[20])
{
    int i;
    for(i;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("\nDang nhi phan vua nhap la:");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
int ConVertHEX(int n,int a[20])
{
    int i,m,count,t;
    t=n;
    const char CHAR_55 = 55;
    const char CHAR_48 = 48;
    while(t>0)
    {
        m=t%16;
        
        if(m>=10)
        {
            a[count]=(char) (m + CHAR_55);
            count++;
            
        }
        else
        {
            a[count] = (char) (m + CHAR_48);
            count++;  
        }
        t=t/16;
    }
     printf("\nSo %d trong he co so 16 = ", n);
     for (i = count - 1; i > 0; i--) {
        printf("%c", a[i]);
}
    return 0;
}