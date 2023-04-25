#include<simplecpp>

main_program{
unsigned int n, j;
cin>>n;
while(n--)
{string x;cin>>x;
int output=1;
for(j=1; j<x.length();j++)
if(x[j]=='?') output*=10;
if(x[0]=='?') output*=9;
if(x[0]=='0') output=0;
cout<<output<<endl;
}
}

