#include <iostream>
#include <simplecpp>
#include <string>

using namespace std;


int main() {
int ansarr[20000];
int t; // t number of cases
cin>>t;

for(int i=0; i<t;i++){
int ans=1;
string s;
cin>>s; // taking string as input
int n;
n = s.size();  // determining size of the string

if(n==0){
ans=0;
}else{

if(s[0]=='0'){
ans=0;
}else if(s[0]=='?'){
for(int i=1;i<n;i++){
if(s[i]=='?'){
ans = ans*10;
}
}
ans = ans*9;
}else{
for(int i=1;i<n;i++){
if(s[i]=='?'){
ans = ans*10;
}
}
}

}

ansarr[i]=ans;
}
for(int i=0;i<t;i++){
cout<<ansarr[i]<<endl;
}
}
