#include<iostream>
#include<iomanip>
#include<cstdlib>
#define MAX 100
using namespace std;

struct Array
{
	int n;
	int a[MAX];
};

void init(Array& s)
{
	s.n = -1;
}

void Nhap(Array& s)
{
	for (int i = 0; i < s.n; i++)
		s.a[i] = rand() % 10 + 1;
}

void Xuat(Array &s)
{
	for (int i = 0; i < s.n; i++)
	{
		cout << setw(3) << s.a[i];
	}
}

void Swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

void InsertSort(Array& s)
{
	int i, j;
	int x;
	for (i = 1; i < s.n; i++)
	{
		x = s.a[i];
		j = i - 1;
		while (j >= 0 && x < s.a[j])
		{
			s.a[j + 1] = s.a[j];
			j--;
		}
		s.a[j + 1] = x;
		for (int r = 0; r < s.n; r++)
		{
			if (r == j + 1 || r == i)
				cout << "|" << s.a[r] << "|" << setw(3);
			else
				cout << s.a[r] << setw(3);
		}
		cout << endl;
	}
}

int main()
{
	Array s;
	init(s);
	cout << "Nhap so phan tu ban muon khoi tao ban dau: "; cin >> s.n;
	Nhap(s);
	Xuat(s);
	cout << endl;
	InsertSort(s);
	Xuat(s); cout << endl;
	system("pause");
	return 0;
}