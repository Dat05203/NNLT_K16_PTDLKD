#include<bits/stdc++.h>
using namespace std;
void nhapn(int &n)
{
	do{
		cout << "Nhap n(1<=n<=30)= ";
		cin >> n;
	}while(n<1 || n>30);
}
void nhapMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}
void hienMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout << a[i] << " ";
	}
}
void hienThiSoChanVaChiaCho3(int a[], int n)
{
	for(int i=0; i<n; i++){
		if(a[i]%2==0 && a[i]%3==0)
		{
			cout << "\nNumber: " << a[i] << endl;
			cout << "Position: " << i+1 << endl;
		}
	}
}
void change(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}
void sapXep(int a[], int n)
{
    for(int i=0; i<n-1; i++){
    	for(int j=i; j<n; j++){
    		if(a[i]%2!=0 && a[j]%2==0) {
    			change(a[i], a[j]);
			}
		}
	}
	for(int i=0; i<n-1; i++){
    	for(int j=i; j<n; j++){
    	    if(a[i]%2==0 && a[j]%2==0 && a[i]<a[j]) {
    	    	change(a[i], a[j]);
			}
			if(a[i]%2!=0 && a[j]%2!=0 && a[i]>a[j]) {
				change(a[i], a[j]);
			}
		}
	}
}

int main()
{
	int n, a[100];
	nhapn(n);
	nhapMang(a,n);
	hienMang(a,n);
	hienThiSoChanVaChiaCho3(a,n);
	sapXep(a,n);
    cout << endl;
	sapXep(a,n);
	hienMang(a,n);
	return 0;
}
