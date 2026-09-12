/*#include <iostream>

using namespace std;

class vec
{
private: 
	int* arr;
	int arr_size;

public:
	vec() //constructor
	{
		arr_size = 0;
		arr = nullptr;
	}

	vec(int size) //constructor
	{
		if (size <= 0)
			vec();
		else
		{
			arr = new int[size];
			arr_size = size;
		}
	}

	~vec() //destructor
	{
		delete arr;
		cout << "DESTROY!! ed" << endl;
	}
};

int* allocate_array()
{
	int* result = new int[100];
		for (int i = 0; i < 100; i++)
		{
			result[i] = i;
		}
		return result;
}

int main()
{

	
	vec* v2 = new vec(100);

	delete v2; //RECONSTRUCT WHAT?

	cout << "THERE'S NOTHING LEFT!!!" << endl;
	/*
	int y;
	cin >> y;

	int a[120];
	int* a2 = new int[y];

	delete[] a2;
	*/

	/*int* arr = allocate_array();

	//blah blah blah

	delete[] arr;

	/*while (true) {
		int* p = new int[100000];
		
		delete[] p;
		}*/

	/*int* ptr = new int; //allocates

	*ptr = 12;

	cout << *ptr << endl;
	cout << ptr << endl;

	delete ptr; //deallocates

	ptr = nullptr; //nullptr == 0
	cout << 10 + (int)(nullptr) << endl;
}*/