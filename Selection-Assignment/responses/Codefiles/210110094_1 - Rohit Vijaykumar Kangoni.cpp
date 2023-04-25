#include <string>
#include<iostream>
//#include<conio.h>

int main()
{
    int N,m=1,l;
    std :: string n;
    std :: cin>>N;
    int arr[N];
    for(int i=0 ; i<N ;i++)
    {
         std :: cin>>n;
         l=n.length();
         if (n.at(0)=='?')
         {m=9;}
         if (n.at(0)=='0')
         {m=0;}
         for(int j =1 ; j<l ; j++)
         {
             if (n.at(j)=='?')
             {
              m*=10;
             }
             else continue;
         }
         arr[i]=m;
         m=1;
    }
    for(int i=0 ; i<N ; i++)
    {
     std :: cout<<arr[i]<<"\n";
     }
    return 0;
}
