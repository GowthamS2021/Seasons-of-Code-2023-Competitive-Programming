#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int count = 1;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '?') {
                if (i == 0) {
                    count *= 9; // first digit can't be 0
                } else {
                    count *= 10;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
