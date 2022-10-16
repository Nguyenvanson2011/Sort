//#include<iostream>
//#include<cstdlib>
//#include<iomanip>
//#define MAX 100
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int tam = a;
//	a = b;
//	b = tam;
//}
//
//void Heaptify(int A[], int n, int i)
//{
//	int max, l, r;
//	l = i * 2;
//	r = i * 2 + 1;
//	if (A[l] >= A[i] && l <= n)
//		max = l;
//	else
//		max = i;
//	if (A[r] >= A[max] && r <= n)
//		max = r;
//	if (max != i)
//	{
//		Swap(A[i], A[max]);
//		Heaptify(A, n, max);
//	}
//}
//
//void BuiltMaxHeap(int A[], int n)
//{
//	for (int i = n / 2; i >= 1; i--)
//		Heaptify(A, n, i);
//}
//
//void HeapSort(int A[], int n)
//{
//	BuiltMaxHeap(A, n);
//	for (int i = n; i >= 2; i--)
//	{
//		Swap(A[1], A[i]);
//		Heaptify(A, i-1, 1);
//	}	
//}
//
//void Nhap(int A[], int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		A[i] = rand() % 50 + 1;
//	}
//}
//
//void Xuat(int A[], int n)
//{
//	for (int i = 1; i <= n; i++)
//		cout << setw(3) << A[i];
//}
//
//int main()
//{
//	int A[MAX];
//	int n;
//	cout << "Nhap n: "; cin >> n;
//	Nhap(A, n);
//	Xuat(A, n);
//	cout << endl;
//	HeapSort(A, n);
//	Xuat(A, n);
//	cout << endl;
//	system("pause");
//	return 0;
//}
//
