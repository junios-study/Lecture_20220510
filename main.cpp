#include <iostream>

using namespace std;

int ArraySum(int* Array, int Count)
{
	int Sum = 0;

	for (int i = 0; i < Count; ++i)
	{
		Sum += Array[i];
	}

	return Sum;
}

int main()
{
	int Count = 0;

	cin >> Count;

	int* Array = new int[Count];

	for (int i = 0; i < Count; ++i)
	{
		cin >> Array[i];
	}

	int Sum = ArraySum(Array, Count);

	cout << Sum << endl;

	return 0;
}