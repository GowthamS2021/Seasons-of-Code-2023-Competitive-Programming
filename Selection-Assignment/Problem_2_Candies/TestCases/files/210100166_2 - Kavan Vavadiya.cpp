#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        long long n;
        cin >> n;

        if (n % 2 == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            vector<long long> v;
            while (n > 1)
            {
                n = n / 2;
                if (n & 1)
                    v.push_back(2);
                else
                    v.push_back(1);
            }
            cout << v.size() << endl;
            for (int i = v.size() - 1; i >= 0; i--)
                cout << v[i] << ' ';
            cout << endl;
        }
    }
}