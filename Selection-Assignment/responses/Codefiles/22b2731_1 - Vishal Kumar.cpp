#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;cin>>s;

    int cnt=count(s.begin(), s.end(), '?');
    if(s[0]=='0')
    {
        cout<<0<<endl;
        return;
    }
    if(s[0]=='?')
        cout<<9*pow(10,cnt-1)<<endl;
    else
    cout<<pow(10,cnt)<<endl;
    

    
    }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t; 
    cin>>t;
    while(t--)
    {
        solve();
    }
}
