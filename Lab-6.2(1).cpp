// Lab_06_2.cpp
// < ������� ������� >
// ����������� ������ � 6.2(1)
// ����������� ����������� ������ ����������� ������o�
// ������ 1

#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const  int High) // �������, �� ����� �����
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);

}

void Print(int* a, const int size) // �������, ��� ��������� ����� �� �����
{	
	cout << "Array =";
	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << a[i]<<",";
	}
	cout <<endl;
}

int FindMin(int* a, const int size) // �������, ��� ���� ��������� ������� ������ � ������� ���� ������ � ������� main
{
	int min = a[0];
	int imin = 0;
	for (int i = 1; i < size; i++)
		if (a[i] < min)
		{
			min = a[i];
			imin = i;
		}
	
	return imin;
}
int FindMax(int* a, const int size) // �������, ��� ���� ������������ ������� ������ � ������� ���� ������ � ������� main
{
	int max = a[0];
	int imax = 0;
	for (int i = 1; i < size; i++)
		if (a[i] > max)
		{
			max = a[i];
			imax = i;
		}

	return imax;
}
void Sort(int* a, const int size, int imin, int imax) // �������, ��� ���� ������ ������������ �� ��������� �������� ������������ ������
{
	int max = a[imax];
	int min = a[imin];

	a[imax] = min;
	a[imin] = max;
}


int main()
{
	srand((unsigned)time(NULL));


	int Low, High, Min, Max, n;

	cout << "Array size ="; cin >> n;

	int* a = new int[n];


	cout << "Low ="; cin >> Low;
	cout << "High ="; cin >> High;
	cout << endl;

	Create(a, n, Low, High);
	Print(a, n);
	cout << endl;

	Min = FindMin(a, n);
	Max = FindMax(a, n);

	cout << "Min a[" << Min << "]=" << a[Min] << endl;
	cout << "Max a[" << Max << "]=" << a[Max] << endl;
	cout << endl;

	Sort(a, n, Min, Max);
	Print(a, n);

	return 0;
}
