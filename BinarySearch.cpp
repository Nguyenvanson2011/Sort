#include<iostream>
#include<cstdlib>
#include<iomanip>
#define MAX 100
using namespace std;
 
class Search
{
public:
	int n;
	int A[MAX];

	void Nhap()
	{
		for (int i = 0; i < n; i++)
			A[i] = rand() % 10 + 1;
	}

	void Swap(int& a, int& b)
	{
		int c = a;
		a = b; b = c;
	}

	void SelectionSort()
	{
		int min_pos;
		for (int i = 0; i < n-1; i++)
		{
			for (int j = i+1; j < n ; j++)
			{
				min_pos = i;
				if (A[min_pos] > A[j])
				{
					min_pos = j;
				}
				Swap(A[min_pos], A[i]);
			}
		}
	}

	int BinarySearch(int x)
	{
		int l = 0, r = n - 1;
		int m;
		while (l <= r)
		{
			m = (l + r) / 2;
			if (A[m] == x)
				return m;
			if (x > A[m])
				l = m + 1;
			else
				r = m - 1;
		}
		return -1;
	}

	int LinearSeach(int x)
	{
		for (int i = 0; i < n; i++)
			if (A[i] == x)
				return i;
		return -1;
	}
};

int main()
{
	Search s;
	int x;
	cout << "Nhap n: "; cin >> s.n;
	s.Nhap();
	for (int i = 0; i < s.n; i++)
		cout << setw(3) << s.A[i];
	cout << endl;
	s.SelectionSort();
	cout << "Mang sau khi sort:" << endl;
	for (int i = 0; i < s.n; i++)
		cout << setw(3) << s.A[i];
	cout << endl;
	cout << "Nhap x: "; cin >> x;
	cout << "Tim thay o vi tri: " << s.BinarySearch(x);
	cout << endl;
	system("pause");
	return 0;
}