#include<bits/stdc++.h>
using namespace std;

void nhapn(int &n)
{
	do {
		cout << "Nhap n= ";
		cin >> n;
	}while(n<1 || n>20);
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
void nhapkvax(float &x, int &k)
{
	do {
		cout << "Nhap k(k>=1): ";
		cin >> k;
	}while(k<1);
	cout << "Nhap x: ";
	cin >> x;
}
void Chen(float a[], int &n, float x, int k)
{
	n++;
	for(int i=n-1; i>k; i--) {
		a[i] = a[i-1];
	}
	a[k] = x;
}
int main() {
	int n, k;
	float a[100], x;
	nhapn(n);
	nhapMang(a,n);
	hienMang(a,n);
	cout << "\n";
	nhapkvax(x,k);
	if(k<=n) {
		Chen(a,n,x,k);
	}
	else {
		Chen(a,n,x,n);
	}
	hienMang(a,n);
	return 0;
}
