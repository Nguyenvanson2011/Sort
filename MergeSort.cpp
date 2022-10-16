//#include<iostream>
//#include<cstdlib>
//#include<iomanip>
//#define MAX 100
//using namespace std;
//
//class Sort
//{
//public:
//	int n;
//	int A[MAX];
//	int L[MAX];
//	int R[MAX];
//
//	void Nhap()
//	{
//		for (int i = 0; i < n; i++)
//			A[i] = rand() % 20 + 1;
//	}
//
//	void Merge(int left, int middle, int right)
//	{
//		int i, j, k;
//		int n1 = middle - left + 1;
//		int n2 = right - middle;
//		L[n1]; R[n2];
//		for (i = 0; i < n1; i++)
//			L[i] = A[left + i];
//		for (j = 0; j < n2; j++)
//			R[j] = A[middle + 1 + j];
//		i = 0; j = 0; k = left;
//
//		while (i < n1 && j < n2)
//		{
//			if (L[i] <= R[j])
//			{
//				A[k] = L[i];
//				i++;
//			}
//			else
//			{
//				A[k] = R[j];
//				j++;
//			}
//			k++;
//		}
//		while (i < n1)
//		{
//			A[k] = L[i];
//			i++;
//			k++;
//		}
//		while (j < n2)
//		{
//			A[k] = R[j];
//			j++;
//			k++;
//		}
//	}
//
//	void MergeSort(int left, int right)
//	{
//		if (left < right)
//		{
//			int m = (left + (right-left)) / 2;
//			MergeSort(left, m);
//			MergeSort(m + 1, right);
//			Merge(left, m, right);
//		}
//	}
//};
//
//int main()
//{
//	Sort s;
//	cout << "nhap so phan tu ban dau muon sort: "; cin >> s.n;
//	s.Nhap();
//	int left = 0, right = s.n - 1;
//	for (int i = 0; i < s.n; i++)
//		cout << setw(3) << s.A[i];
//	cout << endl;
//	s.MergeSort(left, right);
//	for (int j = 0; j < s.n; j++)
//		cout << setw(3) << s.A[j];
//	cout << endl;
//	system("pause");
//	return 0;
//}