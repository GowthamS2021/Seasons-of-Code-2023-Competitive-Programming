#include <iostream>
#include <vector>
using namespace std;


void check(int n){

vector<int> m;
for(int i=0;i<40;i++){
//checking in reverse starting from number and going to 1.
    if (((n+1)/2)%2!=0){
    // if (n+1)/2 odd then 1st spell was used to reach cuurent number
        n=(n+1)/2;
        m.push_back(1);
        }
    else{
        n=(n-1)/2;
        m.push_back(2);
        }

    if(n==1){
        cout << m.size()<< endl;
        // reverse printing the spell vector
        for(int i = m.size() -1 ; i >= 0 ; i--)
        {
        cout<<m[i]<<" ";
        }
        cout << endl;
        m.clear();
        return;
        }
    }
// if 1 not reached in 40 times print 1
cout << -1;
}

int main() {
int t;
cin >> t;
int num[t];

for(int i=0;i<t;i++){
    cin >> num[i];
    }

for(int i=0;i<t;i++){
    if (num[i]%2==0){
        cout << -1 << endl;}
    else{
        check(num[i]);}
    }
return 0;
}
