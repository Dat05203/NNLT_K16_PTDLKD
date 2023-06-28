#include<iostream>
#include<cmath>

const int MAX = 100;
using namespace std;

void nhapMang(float a[], int n)
{
	for(int i=0; i<n; i++){
		cout << "a[" <<i<<"] = ";
		cin >> a[i];
	}
}
void hienMang(float a[], int n)
{
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
}
void tinhToan(float a[], int n, float y)
{
	int cnt = 0;
	float sum = 0;
	for(int i=0 ;i <n; i++){
		if(a[i] > y)
			cnt += 1;
			sum += a[i];
	}
	if(cnt == 0) 
		cout << "Mang khong co phan tu nao lon hon " << y << endl;
	else 
	{	
		cout << "Cac phan tu lon hon " << y << " la: ";
		for(int i=0 ;i <n; i++)
			if(a[i] > y)
				cout << a[i] << " ";
	    cout << "\nTong cac so: " << sum << endl;
	    cout << "Trung binh cong cac so: " << (float)sum/cnt << endl;
	}	
}
int kiemTraSNT(int a){
	if(a<2) return 0;
	else 
	{
		for(int i=2; i<=sqrt(a); i++)
		{
			if(a % i == 0) return 1;
		}
	}
}
void phanTuDuong(float a[], int n)
{
	float min = a[0];
	for(int i=0; i<n; i++)
		if(a[i] > 0 && a[i]<min) 
			min = a[i];
	cout << "So duong nho nhat la: " << min << endl;
	if(kiemTraSNT(min)==1) cout << "Day la so nguyen to";
	else cout << "Khong phai la so nguyen to";
}
int main()
{
	int n;
	float a[MAX], y;
	cout << "Nhap n: ";
	cin >> n;
	nhapMang(a,n);
	cout << "Mang vua nhap: ";
	hienMang(a,n);
	cout << "\nNhap so thuc y: ";
	cin >> y;
	tinhToan(a,n,y);
	phanTuDuong(a,n);
	return 0;
}

