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

void insertion(int* arr, int cnt) // �������� 
{
	int q;
	cout << "���� ������ ����� �Է� \n 1 : �������� \n 2 : ��������" << endl;
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

void selection(int* arr, int cnt) // �������� 
{
	int q;
	cout << "���� ������ ����� �Է� \n 1 : �������� \n 2 : ��������" << endl;
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

void bubble(int* arr, int cnt) // ��������. ���� ������ �����̶� ����.
{
	int q;
	cout << "���� ������ ����� �Է� \n 1 : �������� \n 2 : ��������" << endl;
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
	cout << "��� �迭�� ������ " << endl;
	cin >> n;

	int* arr = new int[n];
	int* arr2 = new int[n];
	int* arr3 = new int[n];

	cout << "n ���� �迭 �Է� : ";
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		arr[i] = p;
		arr2[i] = p;
		arr3[i] = p;
	}

	int hap = sum(arr,n);
	cout << "�迭 ������ ���� : " << hap << endl;
	int peg = avg(arr,n);
	cout << "�迭 ���� ��� ���� : " << peg << endl;

	bubble(arr, n);
	selection(arr2, n);
	insertion(arr3, n);


	cout << "bubble sort ��� : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "selection sort ��� : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr2[i] << " ";
	}

	cout << endl;
	cout << "insertion sort ��� : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr3[i] << " ";
	}

	delete[] arr;
	delete[] arr2;
	delete[] arr3;
	return 0;
}

