//#include<iostream>
//#include<iomanip>
//#include<cstdlib>
//#define MAX 100
//using namespace std;
//
//struct Array
//{
//	int n;
//	int a[MAX];
//};
//
//void init(Array& s)
//{
//	s.n = -1;
//}
//
//void Add(Array& s, int x)
//{
//	s.n++;
//	s.a[s.n - 1] == x;
//}
//
//void Nhap(Array& s)
//{
//	for (int i = 0; i < s.n; i++)
//	{
//		s.a[i] = rand() % 10 + 1;
//	}
//}
//
//void Xuat(Array s)
//{
//	for (int i = 0; i < s.n; i++)
//		cout << setw(3) << s.a[i];
//}
//
//void Swap(int& a, int& b)
//{
//	int c = a;
//	a = b;
//	b = c;
//}
//
//void InterChargeSort(Array &s)
//{
//	int min_pos;
//	for (int i = 0; i < s.n - 1; i++)
//	{
//		for (min_pos = i + 1; min_pos < s.n; min_pos++)
//		{
//			if (s.a[min_pos] < s.a[i])
//			{
//				Swap(s.a[min_pos], s.a[i]);
//				for (int r = 0; r < s.n; r++)
//				{
//					if (r == min_pos || r == i)
//						cout << setw(3) << "[" << s.a[r] << "]";
//					else
//						cout << setw(3) << s.a[r];
//				}
//				cout << endl;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	Array s;
//	init(s);
//	cout << "Nhap so phan tu ban muon khoi tao ban dau: "; cin >> s.n;
//	Nhap(s);
//	Xuat(s);
//	cout << endl;
//	InterChargeSort(s);
//	Xuat(s); cout << endl;
//	system("pause");
//	return 0;
//}