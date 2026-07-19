#include<iostream>
#include<string>
using namespace std;

int main(){
    string s , ans="";
    cout<<"enter string : "<<endl;
    getline(cin , s);
    for(int i=0 ; i<s.length() ; i++){
        if(s[i] >= 65 && s[i] <=90){
            ans += s[i] + 32;
        }
        else{
            ans += s[i];
        }
    }
    cout<<endl<<ans;
}