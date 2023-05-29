#include<bits/stdc++.h>
using namespace std;

void nhapn(int &n)
{
	do {
		cout << "Nhap n= ";
		cin >> n;
	}while(n<5 || n>30);
}
void nhapMang(float a[], int n)
{
	for(int i=0; i<n; i++){
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}
void hienMang(float a[], int n)
{
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
}
void kiemTraVaThayThe(float a[], int n, float x)
{
	int dem = 0;
	for(int i=0; i<n; i++){
		if (a[i] == x) {
			dem += 1;
			a[i] = 0;
		}
	}
	cout << "Trong mang co " << dem << " so bang " << x;
}
void nhapk(int &k, int n)
{
	do {
		cout << "nhap k= ";
		cin >> k;
	}while(k <1 || k > n);
}
void Xoa(float a[], int &n, int k)
{
	for(int i =k; i < n; i++) {
		a[i] = a[i+1];
	}
	n--;
}
int main()
{
    int n, k;
	float a[100], x;
	nhapn(n);
	nhapMang(a,n);
	hienMang(a,n);
	cout << "\nNhap so thuc x= ";
	cin >> x;
	kiemTraVaThayThe(a,n,x);
	cout << endl;
	hienMang(a,n);
	cout << endl;
	nhapk(k, n);
	Xoa(a,n,k);
	hienMang(a,n);
	return 0;
}

