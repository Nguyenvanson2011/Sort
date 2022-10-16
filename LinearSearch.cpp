//#include<iostream>
//#include<iomanip>
//#include<cstdlib>
//#define MAX 100
//using namespace std;
//
//class Search
//{
//public:
//	int n;
//	int A[MAX];
//
//	void Nhap()
//	{
//		for (int i = 0; i < n; i++)
//			A[i] = rand() % 10 + 1;
//	}
//
	int LinearSeach(int x)
	{
		for (int i = 0; i < n; i++)
			if (A[i] == x)
				return i;
		return -1;
	}
//
//	void Xuat()
//	{
//		for (int i = 0; i < n; i++)
//			cout << setw(3) << A[i];
//	}
//};
//int main()
//{
//	Search s;
//	int x;
//	cout << "Nhap phan tu ban muon ban dau: "; cin >> s.n;
//	s.Nhap();
//	s.Xuat();
//	cout << endl;
//	cout << "Nhap phan tu ban muon tim: "; cin >> x;
//	if (s.LinearSeach(x) == -1)
//		cout << "Khong tim thay!" << endl;
//	else
//		cout << "Da tim thay o vi tri " << s.LinearSeach(x) << endl;
//	system("pause");
//	return 0;
//}
