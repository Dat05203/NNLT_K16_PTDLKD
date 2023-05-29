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
	for(int i=0; i<n; i++){
		a[i] = n+i*i;
	}
}
void hienMang(int a[], int n)
{
	for(int i=n-1; i>=0; i--){
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
bool kiemTraSoNguyenTo(int n)
{
	bool kt = true;
	if (n <= 1) kt = false;
	else {
		for(int i = 2; i < n; i++){
			if(n % i == 0) kt = false;
		}
	}
	return kt;
}
void tinhToanTBCSoNguyenTo(int a[], int n)
{ 
    int tong = 0;
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(kiemTraSoNguyenTo(a[i]) == true){
			tong += a[i];
			dem += 1;
		}
	}
	if(dem >= 1) {
	    cout << "\nTrung binh cong cac so nguyen to la: "<< (float)tong/dem;
    }
    else{
    	cout << "\nKhong co so nguyen to";
	}
}
int main()
{
	int n, a[100];
	nhapn(n);
	nhapMang(a,n);
	hienMang(a,n);
	tinhToanTBC(a,n);
	tinhToanTBCSoNguyenTo(a,n);
	return 0;
}
