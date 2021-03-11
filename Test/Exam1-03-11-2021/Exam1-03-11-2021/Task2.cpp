#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main2() 
{
    int n, a, b;
    cin >> n;
    cin >> a >> b;
    cout << endl;


    for (a; a <= b; a++)
    {
        if (isPrime(a))
        {
            if (isPrime(n - a))
            {
                if (n-a <= b) cout << a << " " << n - a << endl;
            }
        }
    }

    return 0;
}

/*
    cin:30
        2 19
    cout:11 19
         13 17
         17 13
         19 11
    
    cin:60
        3 50
    cout:13 47 
         17 43
         19 41
         23 37
         29 31
         31 29
         37 23
         41 19
         43 17
         47 13

*/