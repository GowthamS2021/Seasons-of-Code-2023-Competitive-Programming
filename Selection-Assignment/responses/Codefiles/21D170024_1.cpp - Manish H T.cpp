#include <iostream>
using namespace std;
#include <string.h>
int main() 
{
double t,x,l;
string st;
cin>>t;
for(int i=0;i<t;i++)
{
 x=1;
 cin>>st;
  l=st.size();
 for(int j=0;j<l;j++)
  {
   if(j==0 && st[j]=='0')
    {
     x=0;
     break;
    }
   else if(j==0 && st[j]=='?')
     {x=x*9;}
    else if(j>0 && st[j]=='?')
     {x=x*10;}
  }
 cout<<x<<endl;
}
}
