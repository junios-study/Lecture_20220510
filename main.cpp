#include <iostream>

using namespace std;

int Compare(const void* a, const void* b)    // 오름차순 비교 함수 구현
{
	int num1 = *(int*)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	int num2 = *(int*)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

	if (num1 > num2)    // a가 b보다 작을 때는
		return -1;      // -1 반환

	if (num1 < num2)    // a가 b보다 클 때는
		return 1;       // 1 반환

	return 0;    // a와 b가 같을 때는 0 반환
}

void SSort(int* Array, int Count)
{
	for (int i = 0; i < Count; ++i)
	{
		for (int j = i; j < Count; ++j)
		{
			if (Array[i] < Array[j])
			{
				int Temp = Array[i];
				Array[i] = Array[j];
				Array[j] = Temp;
			}
		}
	}
}

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

	qsort(Array, Count, sizeof(int), Compare);

	
	for (int i = 0; i < Count; ++i)
	{
		cout << Array[i] << endl;
	}

	return 0;
}