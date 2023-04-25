#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		string bin = bitset<40>(n).to_string().substr(40-(int)(log2(n))-1);
        vector<int> arr;
        for (int i = 0; i < bin.length(); i++) {
            arr.push_back(bin[i]-'0');
        }
        int l = arr.size();
        if (arr[l - 1] == 0 || l - 1 > 40) {
            cout << -1 << endl;
        }
        else {
            cout << l - 1 << endl;
            for (int i = 0; i < l - 1; i++) {
                cout << arr[i] + 1 << " ";
            }
            cout<<endl;
        }
	}
    return 0;
}