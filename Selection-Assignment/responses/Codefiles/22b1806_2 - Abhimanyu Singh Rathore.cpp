#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;

    for(long long int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        vector<long long int> stp;
        long long int a,b,cnt=0;
        long long int j=n;

        if(n%2 != 0)
        {
            while(j!=1)
            {
               a=j-1;
               b=j+1;
               a=a/2;
               b=b/2;
               if(a%2 == 0)
                  a=b;
               if((2*a-1) == j)
                  stp.push_back(1);
               else
                  stp.push_back(2);
               cnt++;
               j=a;
            }
        }
        else
            cnt--;

        if(cnt > 40)
            cnt = -1;

        cout<<cnt<<endl;
        if(cnt != -1 && cnt <= 40)
        {   for(long long int k=(stp.size()-1);k>=0;k--)
            {
               cout<<stp[k]<<" ";
            }
            cout<<endl;
        }
    }
}
