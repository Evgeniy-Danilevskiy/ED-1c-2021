#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	
	while (n1 > 0)
	{
		int k = n1 % 10;
		int h = n2;
		while (h > 0)
		{
			if (k == h % 10) cout << k << " ";
			h /= 10;
		}
		n1 /= 10;
	}
	
	return 0;
}