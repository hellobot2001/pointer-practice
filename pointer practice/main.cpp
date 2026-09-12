#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int a;
	int b;
	int* ptr_a = &a;
	int* ptr_b = &b;
	cout << "A:" << endl;
	cin >> a;
	cout << "B:" << endl;
	cin >> b;
	cout << "A: " << *ptr_a << " at " << ptr_a << endl;
	cout << "B: " << *ptr_b << " at " << ptr_b << endl;
	srand(time(0));
	int size = rand() % 100;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
		cout << i << ": " << arr[i] << endl;
	}
	int* max_int = arr;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > *max_int)
		{
			max_int = arr + i;
		}
	}
	cout << "max: " << *max_int << " at " << max_int << endl;
	delete[] arr;
	size = rand() % 100;
	char* sarr = new char[size];
	for (int i = 0; i < size; i++)
	{
		sarr[i] = (char)((rand() % 40)+40);
		cout << i << ": " << sarr[i] << endl;
	}
	for (int i = 0; i < size; i++)
	{
		cout << sarr[i];
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << (int)sarr[i] << " ";
	}
	cout << endl;
	int cnt = 0;
	while (*(sarr + cnt) > 0)
	{
		cout << (int)*(sarr + cnt) << " ";
		cnt++;
	}
	cout << endl;
	cout << "actual size: " << size << " counted size: " << cnt << endl;
	char* sarr2 = new char[size];
	cout << endl;
	cout << endl;
	for (int i = cnt; i > 0; i--)
	{
		sarr2[cnt - i] = sarr[i-1];
	}
	for (int i = 0; i < size; i++)
	{
		cout << sarr[i];
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << sarr2[i];
	}
	cout << endl;
	int nrand = (rand() % 100) + 3;
	delete[] sarr;
	vector<int> vec(nrand);
	cout << "size: " << vec.size() - 1 << " nrand: " << nrand - 1<< endl;
	for (int i = 0; i < nrand - 1; i++)
	{
		int randn = rand();
		vec[i] = randn;
		cout << i << ": " << randn << endl;
	}
	int* v1 = vec;
}
