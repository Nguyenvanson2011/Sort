#include<iostream>
#include<cstdlib>
#include<iomanip>
#define MAX 100
using namespace std;

void Swap(int& a, int& b)
{
	int tam = a;
	a = b;
	b = tam;
}

void Nhap(int A[], int n)
{
	for (int i = 1; i <= n; i++)
		A[i] = rand() % 50 + 1;
}

void Xuat(int A[], int n)
{
	for (int i = 1; i <= n; i++)
		cout << setw(3) << A[i];
}

int Partition(int A[],int p, int r)
{
	int i = p - 1;
	int x = A[r];
	for (int j = p; j < r; j++)
	{
		if (A[j] <= x)
		{
			i = i + 1;
			Swap(A[i], A[j]);
		}
	}
	Swap(A[i + 1], A[r]);
	return i + 1;
}

void QuickSort(int A[],int l,int n)
{
	int q;
	if (l < n)
	{
		q = Partition(A, l, n);
		QuickSort(A, l, q-1);
		QuickSort(A, q +1 , n);
	}
}
int main()
{
	int n;
	int A[MAX];
	cout << "Nhap n: "; cin >> n;
	int l = 1;
	Nhap(A, n);
	Xuat(A, n);
	cout << endl;
	QuickSort(A, l, n);
	Xuat(A, n);
	cout << endl;
	system("pause");
	return 0;
}