#include <iostream>
using namespace std;

int power(int n, int p)
{
	int k = n;

	for (int i = 1; i < p; i++) k *= n;

	return k;
}

int i_elem(int i)
{
	if (i == 0)
		return 1;
	if (i == 1)
		return 3;

	int ai_2 = 10;
	int ai_1 = 3;
	int ai = 1;
	for (int j = 2; j <= i; j++)
	{
		ai = 2 * ai_1 + power(j, j);
		ai_2 = ai_1;
		ai_1 = ai;
	}
	return ai;
}

int sum(int n)
{
	if (n == 0)
		return 1;
	return i_elem(n) + sum(n - 1);
}

int main3()
{
	int n;
	cin >> n;
	cout << sum(n) << endl;
	return 0;
}

/*
	cin:3
	cout:61

	cin:6
	cout:58542
*/