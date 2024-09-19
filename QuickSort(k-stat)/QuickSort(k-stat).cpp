#include <iostream>

using namespace std;


int QuickSort(int arr[], int first, int last)
{

	if (first < last) //если есть, что сортировать (не менее 1 элемента в подмассиве)
	{
		int i = first;
		int j = last;
		int mid = arr[(first + last) / 2]; //вычисляется средний элемент 


		while (i <= j) // если i стало больше j -> происходит деление на подмассивы
		{
			while (arr[i] < mid) // пока не найдет число которое больше мида будет работать цикл и искать его, пока не дойдет до мида
			{
				i++;  // если дошло до мида, то возможно, если с левой стороны нашлось подходящее число, то будет менятся с мидом
			}

			while (arr[j] > mid) // то же самое только с право налево
			{
				j--;
			}

			if (i <= j) 
			{
				swap(arr[j], arr[i]);
				i++;
				j--;
			}
		} 

			QuickSort(arr, first, j);
			QuickSort(arr, i, last);

	}
	
}

int main()
{
   
	setlocale(LC_ALL, "RU");

	int m[100];
	int n;
	int k;

	cout << "Введите количество элементов массива (до 100): ";

	cin >> n;

	cout << "Введите k: ";

	cin >> k;


	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << m[i] << " ";
	}

	cout << "k = " << k;

	cout << endl;

	// код алгоритма
		
	int m_k = QuickSort(m, 0, n-1, 2);

	cout << "m[k] = " << m_k << endl;

	// код алгоритма кончается тут

	for (int i = 0; i < n; i++)
	{
		cout << m[i] << " ";
	}
}

