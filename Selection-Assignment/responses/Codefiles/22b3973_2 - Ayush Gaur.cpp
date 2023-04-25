#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        ll spell_count = 0;
        if (n == 1){
            cout << "0\n";
        }
        else if (n % 2 == 0){
            cout << "-1\n";
        }
        else{
            while (n != 1){
                n = n / 2;
                spell_count++;
                if (n % 2 == 0){
                    v.push_back(1);
                }
                else{
                    v.push_back(2);
                }
            }
            cout << spell_count << endl;
            for (ll i = v.size() - 1; i >= 0; i--){
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}