#include <iostream>
using namespace std;

int main1()
{
	int n, a, min, max;
	cin >> n >> a;
	min = a;
	max = a;

	for (int i = 1; i < n; i++)
	{
		int b = 0;
		cin >> b;
		if (b > max) max = b;
		if (b < min) min = b;
	}

	cout << "max = " << max << endl << "min = " << min << endl;
	return 0;
}

/*cin: 4 1 2 4 3
  cout: max = 4
		min = 1
cin: 5 0 -1 4 3 5
  cout: max = 5
		min = -1
*/