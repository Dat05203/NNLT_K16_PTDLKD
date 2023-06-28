#include<iostream>
#include<cmath>

using namespace std;
//------------------------------------------------------Câu 1---------------------------------------------------
void nhap(float &a, int &n)
{
	do {
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
	} while(n<0);
	cout << "Nhap so thuc a: ";
	cin >> a;
}
float bp(float a, int n)
{
	float tich = 1.0;
	for(int i=1; i<=n; i++){
		tich *= a;
	}
	return tich;
}
float P(float a, int n)
{
	float p = sqrt(n+10);
	for(int i=1; i<=10; i++){
		if(i % 2 == 0) 
			p -= ((bp(a,i)*bp(n,i)) / (i*2));
		else
			p += ((bp(a,i)*bp(n,i)) / (i*2));
	}
	return p;
}
int main()
{
	float a;
	int n;
	nhap(a,n);
	cout << "P(a,n) = " << P(a,n);
	return 0;
}
