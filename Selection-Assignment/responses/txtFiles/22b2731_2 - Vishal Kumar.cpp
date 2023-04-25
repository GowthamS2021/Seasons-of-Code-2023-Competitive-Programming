#include <bits/stdc++.h>
using namespace std;
#define  pb push_back

void solve()
{
    int n;int cnt=0;vector<int> v;    
    cin>>n;int k=n;

    if(n%2==0)
    {
        cout<<-1<<endl;return;
    }
    while (k>0)
    {
        if(((k+1)/2 %2)!=0)
        {
            v.pb(1);
            k=(k+1)/2;
        }
        else
        {
            k=(k-1)/2;
            v.pb(2);
        }
        cnt++;
        if(k==1)
            break;

    }
    cout<<cnt<<endl;
    reverse(v.begin(), v.end());
    for(int i=0;i<cnt;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
     while(t--) {
        solve();
    }

    return 0;
}