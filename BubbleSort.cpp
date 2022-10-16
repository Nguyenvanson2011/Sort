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
//void init(Array& s)
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
//void Display(Array s)
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
//void BubbleSort(Array& s)
//{
//	int x,y;
//	for (int i = 0; i < s.n - 1; i++)
//	{
//		for (int j = s.n - 1; j > i; j--)
//		{
//			
//			if (s.a[j - 1] > s.a[j])
//			{
//				Swap(s.a[j - 1], s.a[j]);
//				for (int r = 0; r < s.n; r++)
//				{
//					if (r == x)
//						cout << setw(3) << "[" << s.a[r] << "]";
//					else
//						cout << setw(3) << s.a[r];
//				}
//			}
//		}
//		
//		cout << endl;
//	}
//}
//
//int main()
//{
//	Array s;
//	init(s);
//	cout << "Nhap mang ban muon tao ban dau: "; cin >> s.n;
//	Nhap(s);
//	Display(s); cout << endl;
//	BubbleSort(s);
//	system("pause");
//	return 0;
//}