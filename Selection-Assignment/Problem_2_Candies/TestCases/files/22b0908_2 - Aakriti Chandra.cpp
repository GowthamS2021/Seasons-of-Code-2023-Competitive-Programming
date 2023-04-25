#include<iostream>
#include<math.h>
using namespace std;
    int main(){
    int n;
    cin>>n;

    long long int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];}

    for(int i=0;i<n;i++){
    int n=0,m[100];
    if (arr[i]%2==0)cout<<-1;

    else{

    while(arr[i]!=1){
    if(((arr[i]/2)%2)==0){arr[i]=(arr[i]+1)/2;m[n++]=1;}
    else{arr[i]=(arr[i]-1)/2;m[n++]=2;}
    }
    cout<<n<<endl;
    for(int q=n-1;q>-1;q--){
    cout<<m[q]<<" ";}
    }
    cout<<endl;
    }
    }
