#include <iostream>
using namespace std;
void nhapmang1(int a[], int n);
void nhapmang2(int b[], int n);
void linhkien(int a[], int b[], int n);
int main()
{
	int n;
	int a[1000];
	int b[1000];
	cin >> n;
	nhapmang1(a, n);
	nhapmang2(b, n);
	linhkien(a, b, n);
}
void nhapmang1(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void nhapmang2(int b[], int n) {
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
}
void linhkien(int a[], int b[], int n) {
	int lk = 0;
	int dem = 0;
	int m = -1;
	for (int i = 0; m < 0; i++)
	{
		dem = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[j] - b[j] >= 0) {
				a[j] = a[j] - b[j];
				dem = dem + 1;
			}
			else
			{
				a[j] = a[j] - b[j];
			}
		}
		if (dem == n)
		{
			lk = lk + 1;
		}
		for (int k = 0; k < n; k++)
		{
			if (a[k] < 0) {
				m = m + 1;
			}
		}
	}
	cout << lk;
}