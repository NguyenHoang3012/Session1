#include<stdio.h>
#include<string.h>
void sosanh(int m,int n,char m1[30],char m2[30])
{
	int kq;
	kq=strcmp(m1,m2);
	if(kq==0)
	{
		printf("Hai mang giong nhau!");
	}
	else
	{
		printf("Hai mang khac nhau!");
	}
}
void NhapK(int *k,int n)
{
    *k=-1;
    while(*k<0||k>=n)
    {
        printf("Nhap gia tri 0 <= k < %d", n);
		scanf("%d", k);
    }
}
void hienThi(char *m1, int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%c", m1[i]);
	}
	printf("\n");
}
void chen(char *m1, int n, char*m2, int m, int k) {
	// don phai 
	int i;
	for(i = m + n - 1; i >= k; i--) {
		m1[i] = m1[i - m];
	}
	// gan gia tri mang b vao mang a
	for(i = k; i < k + m; i++) {
		m1[i] = m2[i - k];
	}
}
int main(int argc, char const *argv[])
{
        printf("Nhap vao 2 mang muon so sanh:");
    int n,m,k;
    char m1[30],m2[30];
    printf("\nNhap vao so phan tu mang 1 va 2:");
    scanf("%d%d",&n,&m);
    printf("\nNhap vao mang 1:");
    for(int i=0;i<n;i++)
    {
        printf("\nNhap vao phan tu thu %d trong mang 1:",i);
        scanf("%d",&m1[i]);
    }
    printf("\nNhap vao mang 2:");
    for(int j=0;j<m;j++)
    {
        printf("\nNhap vao phan tu thu %d trong mang 2:",j);
        scanf("%d",&m2[j]);
    }
    sosanh(m,n,m1,m2);
    nhapK(&k, n);
    printf("Mang A sau khi chen: ");
    chen(m1, n, m2, m, k);
    hienThi(m1, m + n);
    return 0;
}
