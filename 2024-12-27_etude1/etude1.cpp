#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
	int k = 0;

	for (int s = 0; s < size; ++s) //입력값 더할거
	{
		k += arr[s];
	}
	return k;
}

int divide(int a, int b)
{
	return a / b;
}

int main()
{
	int i[5] = { 0 };

	for (int j = 0; j < 5; ++j) //입력값 5개
	{
		cin >> i[j];
	}

	int q = sum(i, 5);
	int d = divide(q, 5);

	cout << q << endl << d << endl;

	return 0;
}