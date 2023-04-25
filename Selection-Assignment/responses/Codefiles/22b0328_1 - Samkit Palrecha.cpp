#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    char ch[t][5];
    for(int i=0; i<t; i++){
    cin>>ch[i];
    }
    int length[t];
    for(int i=0; i<t; i++){
        length[i] = strlen(ch[i]);  
    }
    int output = 1;
    for(int i=0; i<t; i++){
        for(int j=0; j<length[i]; j++){
          if(ch[i][0] == '0'){ 
            output = 0; 
            break; 
          }
          if(ch[i][j] == '?' && j==0){
            output = output*9;
          }
          if(ch[i][j] == '?' && j!=0){
            output = output*10;
          }
        }
        cout<<output<<endl;
        output = 1;
    }
}