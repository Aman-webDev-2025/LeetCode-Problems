#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"enter a string :"<<endl;
    getline(cin , s);
    
    int c=0;
    for(int i=s.length()-1 ; i>=0 ; i--){
        if(s[i] != ' '){
            c++;
        }
        else if(c>0){
            cout<<c;
            break;
        }
    }

    return 0;
}