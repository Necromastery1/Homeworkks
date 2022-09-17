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
	shiftLeft(arr, n);
	shiftRight(arr, n);
	UniqueRand(arr, n);
	}

void FillRand(int arr[], const int n)
{
	cout << "\tМассив с рандомными числами: \n";
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 4;
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

void ReversePrint(int arr[], const int n) // cпросить 
{
	cout << "\tМассив с рандомными числами в обратном порядке: \n";
	for (int n = 10; n > 0; n--)
	{
		cout << arr[n] << "\t";
	}
	cout << endl;
}
void Sum(int arr[], const int n)
{
	cout << "\n\tСумма массива: \n";
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
	cout << "\n\tCреднее арифметическое значение массива: \n";
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
	cout << "\n\tМинимальное значение массива: \n";
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
	cout << "\n\tМаксимальное значение массива: \n";
	int max_elem = arr[n];
	{
		for (int i = 0; i <= 10; i++)
			if (max_elem < arr[i])
			{
				max_elem = arr[i];
			}
		cout << "\t" << max_elem << endl;
	}
	cout << endl;
}

void shiftLeft(int arr[], const int n) // cпросить
{
	int a = arr[0];
	cout << "\tНа сколько нужно сдвинуть массив?"; cin >> a;
	{
		for (int i = 0; i < a; i++)
		{
			arr[i] = arr[i - a];
		}
		{
			for (int i = a; i < n; i++)
				cout << arr[i] << "\t";
		}
		arr[0] = a;
		{
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << "\t";
			}
		}
	}
	cout << endl;

}

void shiftRight(int arr[], const int n) // cпросить
{
	int a = arr[0];
	cout << "\tНа сколько нужно сдвинуть массив?"; cin >> a;
	{
		for (int i = 0; i < a; i++)
		{
			arr[i] = arr[i - a];
		}
		{
			for (int i = a; i < n; i++)
				cout << arr[i] << "\t";
		}
		arr[0] = a;
		{
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << "\t";
			}
		}
	}
	cout << endl;

}

void UniqueRand(int arr[], const int n) // cпросить
{
	for (int i = 0; i < n; i++)
	{
		if ((i == 0) || (arr[i] > arr[i - 1]) && (i == (n - 1) || (arr[i]) <arr[i + 1]))
			cout << arr[i] << " ";
	}
	cout << endl;
	return;
}






