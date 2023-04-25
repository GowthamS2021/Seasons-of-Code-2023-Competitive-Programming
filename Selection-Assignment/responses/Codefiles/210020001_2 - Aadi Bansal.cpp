#include <bits/stdc++.h>
using namespace std;

bool candies(int n, long long unsigned int k, int spells) {
    if (n == k and spells <= 40) {
        return true;
    } else if (n > k) {
        return false;
    } else if (spells > 40) {
        return false;
    } else {

            return (candies(2 * n - 1, k, spells + 1) || candies(2 * n + 1, k, spells + 1));

        }
    }


int main() {
    int spells = 0;
    long long unsigned int k;
    cin>>k;
	cout<<candies(1,k,spells)<<endl;

}
