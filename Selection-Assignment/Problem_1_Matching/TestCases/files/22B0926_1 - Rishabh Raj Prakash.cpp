#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        char x[5]; cin >> x;
        if (x[0] == '0') {cout << 0 << '\n'; continue;} // if starting digit 0, no solution
        int output = 1;
        if (x[0] == '?') {output *= 9;} // can't start with 0 so 9 choices
        for (int j = 1; j < 5; j++){
            if (x[j] == '\0') {break;}
            if (x[j] == '?') {output *= 10;}
        }
        cout << output << '\n';
    }
}