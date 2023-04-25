#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

void  candie(long long int n,string s,string b){
    s=b+s;
    if((n%2==0)||((s.length()/2)>40)){return;}
    if(n==1){cout<<s.length()/2<<endl<<s; exit(0);}
    candie((n+1)/2,s,"1 ");
    candie((n-1)/2,s,"2 ");
}

int main(){
    long long int n;
    string b="", s="";
    cin>>n;
    int x=0;
    candie(n,s,b);
    cout<<-1;
}