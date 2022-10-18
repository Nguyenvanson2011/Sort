#include<iostream>
#include<cstdlib>
#include<iomanip>
#define MAX_ELEMENT 100
using namespace std;

void Nhap(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % n + 1;
	}
}

void Xuat(int A[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(3) << A[i];
}

void CountingSort(int A[],int n)
{
	int *count = new int[n + 1];
	int *ARRAY = new int[n + 1];
	for (int i = 0; i <= n; ++i)
		count[i] = 0;
	for (int i = 0; i < n; i++)
		count[A[i]]++;
	for (int i = 2; i <= n; ++i)
		count[i] += count[i - 1];
	/*for(int i = 0,j = 0;i <= n && j < n ; j++)
		while (count[j] > 0)
		{
			count[j] --;
			ARRAY[i++] = j;
		}*/
	for (int i = 0; i < n; ++i)
		ARRAY[--count[A[i]]]= A[i];
	for (int i = 0; i < n; ++i)
		A[i] = ARRAY[i];
}
int main()
{
	int n;
	int A[MAX_ELEMENT];
	cout << "Nhap n: "; cin >> n;
	Nhap(A, n);
	Xuat(A, n);
	cout << endl;
	CountingSort(A, n);
	Xuat(A, n);
	cout << endl;
	system("pause");
	return 0;
}