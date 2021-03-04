#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n > 0)
	{
		for (int k = 1; k <= n; k++)
		{
			cout << k << " ";
		}
		cout << endl;
		n--;
	}
	return 0;
}

/*cin: 4
  cout: 1 2 3 4
	    1 2 3
	    1 2
	    1
cin: 7
cout: 1 2 3 4 5 6 7
	  1 2 3 4 5 6 
	  1 2 3 4 5 
	  1 2 3 4
	  1 2 3 
	  1 2 
	  1 
*/
