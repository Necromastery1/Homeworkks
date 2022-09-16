#include <iostream>
using namespace std;

void FillRand(int arr[], const int n);

void Print(int arr[], const int n);

void ReversePrint(int arr[], const int n);

void Sum(int arr[], const int n);

void Avg(int arr[], const int n);

void minValuein(int arr[], const int n);

void maxValuein(int arr[], const int n);

void shiftLeft(int arr[], const int n);

void shiftRight(int arr[], const int n);

void UniqueRand(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr [n];
	FillRand( arr, n);
	Print(arr, n);
	ReversePrint( arr, n);
	Sum( arr, n);
	Avg(arr, n);
	minValuein( arr, n);
	maxValuein(arr, n);

	}

void FillRand(int arr[], const int n)
{
	cout << "\t������ � ���������� �������: \n";
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100000;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n" << endl;
}

void ReversePrint(int arr[], const int n) // c������� 
{
	cout << "\t������ � ���������� ������� � �������� �������: \n";
	for (int n = 10; n > 0; n--)
	{
		cout << arr[n] << "\t";
	}
	cout << endl;
}
void Sum(int arr[], const int n)
{
	cout << "\n\t����� �������: \n";
	int sum = 0;
	{
		for (int i = 0; i < n; i++)
			sum += arr[i];
		cout << "\t" << sum << endl;
	}
	cout << endl;
}

void Avg(int arr[], const int n)
{
	cout << "\n\tC������ �������������� �������� �������: \n";
	float summa = 0;
	{
		for (int i = 0; i < n; i++)
			summa += arr[i];
		cout << "\t" << summa / n;
	}
	cout << endl;
}

void minValuein(int arr[], const int n)
{
	cout << "\n\t����������� �������� �������: \n";
	int min_elem = arr[0];
	{
		for (int i = 0; i < n; i++)
			if (min_elem > arr[i])
			{
				min_elem = arr[i];
			}
		cout << "\t" << min_elem << endl;
	}
	cout << endl;
}

void maxValuein(int arr[], const int n)
{
	cout << "\n\t������������ �������� �������: \n";
	int max_elem = arr[n];
	{
		for (int i = 0; i < n; i++)
			if (max_elem < arr[i])
			{
				max_elem = arr[i];
			}
		cout << "\t" << max_elem << endl;
	}
	cout << endl;
}

void shiftLeft(int arr[], const int n);
{

}




