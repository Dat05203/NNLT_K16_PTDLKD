#include<bits/stdc++.h>
using namespace std;

void nhapn(int &n) {
	do {
	cout << "Nhap n= ";
	cin >> n;
}while (n<5 || n>30);
}
void nhapMang(float a[], int n){
	for(int i = 0; i<n; i++){
		cout << "a["<<i<<"]= ";
		cin >> a[i];
	}
}
void xuatMang(float a[], int n){
	for(int i = 0; i<n; i++){
		cout <<a[i] <<" ";
	}
}
bool kiemTraSNT(int n){
	if(n<1) return false;
	else{
		for(int i=2; i < n; i++){
			if(n%i==0) return false;
		}
	}
	return true;
}
void tbcSoNguyenTo(float a[], int n){
	int dem = 0;
	int sum = 0;
	for (int i = 0; i < n; i++){
		if(a[i] == (int)a[i] && kiemTraSNT(a[i])==true) {
			sum += a[i];
			dem += 1;
		}
	}
	if(dem == 0) cout << "khong co so nguyen to nao trong mang";
	else cout << "Trung binh cong cac so nguyen to trong mang la: " << (float)sum/dem;
}
int main(){
	int n;
	float a[100];
	nhapn(n);
	nhapMang(a,n);
	xuatMang(a,n);
	cout << "\n";
	tbcSoNguyenTo(a,n);
	return 0;
}
