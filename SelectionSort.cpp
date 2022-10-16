//#include<iostream>
//#include<cstdlib>
//#include<iomanip>
//#define MAX 100
//using namespace std;
//
//struct Array
//{
//	int n;
//	int a[MAX];
//};
//
//void init(Array &s)
//{
//	s.n = -1;
//}
//
//void Nhap(Array& s)
//{
//	for (int i = 0; i < s.n; i++)
//		s.a[i] = rand() % 10 + 1;
//}
//
//void Xuat(Array& s)
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
//void Selection(Array& s)
//{
//	int min_pos, i, j;
//	for (i = 0; i < s.n - 1; i++)
//	{
//		min_pos = i;
//		for (j = i + 1; j < s.n; j++)
//		{
//			if (s.a[j] < s.a[min_pos])
//				min_pos = j;
//		}
//		Swap(s.a[i], s.a[min_pos]);
//		cout << "Step " << i + 1 << endl;
//		for (int r = 0; r < s.n; r++)
//		{
//			if (r == min_pos || r == i)
//				cout << setw(3) << "|" << s.a[r] << "|";
//			else
//				cout << setw(3) << s.a[r];
//		}
//		cout << endl;
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
//	Selection(s);
//	Xuat(s); cout << endl;
//	system("pause");
//	return 0;
//}