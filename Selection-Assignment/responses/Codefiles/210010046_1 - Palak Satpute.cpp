#include <iostream>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        string p;
        cin >> p;
        int ans = 1;
        for (int i = 0; i < p.length(); i++)
        {
            if (p[i] == '?')
            {
                if (i == 0)
                    ans *= 9;
                else
                    ans *= 10;
            }
        }
        if (p[0] == '0')
        {
            cout << "0\n";
            return;
        }
        cout << ans << endl;
    }
}