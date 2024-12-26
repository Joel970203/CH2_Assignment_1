#include <iostream>
#define fastio() ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;


int sum(int* arr,int cnt)
{
	int a = 0;
	for (int i = 0; i < cnt; i++)
	{
		a += arr[i];
	}
	return a;
}

int avg(int* arr,int cnt)
{
	int a = 0;
	for (int i = 0; i < cnt; i++)
	{
		a += arr[i];
	}

	return (a / cnt);
}

void insertion(int* arr, int cnt) // 삽입정렬 
{
	int q;
	cout << "삽입 정렬할 방법을 입력 \n 1 : 오름차순 \n 2 : 내림차순" << endl;
	cin >> q;

	if (q == 1)
	{
		for (int i = 1; i < cnt; i++)
		{
			int key = arr[i];
			int j = i - 1;
			while (j >= 0 && arr[j] > key)
			{
				arr[j + 1] = arr[j];
				j--;
			}

			arr[j + 1] = key;
		}
	}

	else if (q == 2)
	{
		for (int i = 1; i < cnt; i++)
		{
			int key = arr[i];
			int j = i - 1;
			while (j >= 0 && arr[j] < key)
			{
				arr[j + 1] = arr[j];
				j--;
			}

			arr[j + 1] = key;
		}
	}
}

void selection(int* arr, int cnt) // 선택정렬 
{
	int q;
	cout << "선택 정렬할 방법을 입력 \n 1 : 오름차순 \n 2 : 내림차순" << endl;
	cin >> q;

	if (q == 1)
	{
		for (int i = 0; i < cnt - 1; i++)
		{
			int min_idx = i;
			for (int j = i + 1; j < cnt; j++)
			{
				if (arr[j] < arr[min_idx])
				{
					int temp = arr[j];
					arr[j] = arr[min_idx];
					arr[min_idx] = temp;
				}
			}
		}
	}

	else if (q == 2)
	{
		for (int i = 0; i < cnt - 1; i++)
		{
			int max_idx = i;
			for (int j = i + 1; j < cnt; j++)
			{
				if (arr[j] > arr[max_idx])
				{
					int temp = arr[j];
					arr[j] = arr[max_idx];
					arr[max_idx] = temp;
				}
			}
		}
	}
}

void bubble(int* arr, int cnt) // 버블정렬. 가장 간단한 정렬이라 구현.
{
	int q;
	cout << "버블 정렬할 방법을 입력 \n 1 : 오름차순 \n 2 : 내림차순" << endl;
	cin >> q;

	if (q == 1)
	{
		for (int i = cnt; i > 0; i--)
		{
			for (int j = 0; j < i - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}

	else if (q == 2)
	{
		for (int i = cnt; i > 0; i--)
		{
			for (int j = 0; j < i - 1; j++)
			{
				if (arr[j] < arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}


}

int main()
{
	fastio();
	int n;
	int m;
	int p;
	cout << "몇개의 배열을 만들까요 " << endl;
	cin >> n;

	int* arr = new int[n];
	int* arr2 = new int[n];
	int* arr3 = new int[n];

	cout << "n 개의 배열 입력 : ";
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		arr[i] = p;
		arr2[i] = p;
		arr3[i] = p;
	}

	int hap = sum(arr,n);
	cout << "배열 모든수의 합은 : " << hap << endl;
	int peg = avg(arr,n);
	cout << "배열 수의 평균 값은 : " << peg << endl;

	bubble(arr, n);
	selection(arr2, n);
	insertion(arr3, n);


	cout << "bubble sort 결과 : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "selection sort 결과 : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr2[i] << " ";
	}

	cout << endl;
	cout << "insertion sort 결과 : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr3[i] << " ";
	}

	delete[] arr;
	delete[] arr2;
	delete[] arr3;
	return 0;
}

