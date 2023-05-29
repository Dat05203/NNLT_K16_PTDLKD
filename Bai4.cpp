#include<bits/stdc++.h>
using namespace std;
void nhapn(int &n)
{
	do {
		cout << "Nhap n= ";
		cin >> n;
	}while(n<5 || n>30);
}
void nhapMang(int a[], int n)
{
	a[0] = 31;
	for(int i=1; i<n; i++){
		a[i] = n *(i*i);
	}
}
void hienMang(int a[], int n)
{
	for(int i=0;i<n; i++){
		cout << a[i] << " ";
	}
}
void tinhToanTBC(int a[], int n)
{
	int dem = 0;
	int tong = 0;
	for(int i=0; i < n; i++){
		if(a[i]%2==0 && a[i]%n==0)
		{
			tong += a[i];
			dem += 1;
		}
	}
	if (dem >= 1) {
	    cout << "\nTrung binh cong cua cac so chan chia het cho n la: " << (float)tong/dem;
	}
	else {
		cout << "\nKhong co gia tri can tinh";
	}
}
void demSoCapChanLienTiep(int a[], int n)
{
	int dem = 0;
    int i = 0;
    while(i < n-1) {
    	if(a[i] % 2==0 && a[i+1]%2==0) {
    		dem += 1;
    		cout << "(" << a[i] << ", " << a[i+1] << ")" << " ";
		}
		i++;
	}
	cout << "\nSo cap chan lien tiep la: " << dem;
}
int main()
{
	int n, a[100];
	nhapn(n);
	nhapMang(a,n);
	hienMang(a,n);
	tinhToanTBC(a,n);
	cout << "\n";
	demSoCapChanLienTiep(a,n);
	return 0;
}
