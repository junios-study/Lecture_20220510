#include <iostream>

using namespace std;

int Compare(const void* a, const void* b)    // �������� �� �Լ� ����
{
	int num1 = *(int*)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	int num2 = *(int*)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������

	if (num1 > num2)    // a�� b���� ���� ����
		return -1;      // -1 ��ȯ

	if (num1 < num2)    // a�� b���� Ŭ ����
		return 1;       // 1 ��ȯ

	return 0;    // a�� b�� ���� ���� 0 ��ȯ
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