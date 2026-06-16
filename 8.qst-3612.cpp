#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

string processStr(string s) {
    string ans;
    for(char c : s) {
        if(c == '*') {
            if(!ans.empty()) {
                ans.pop_back();
            }
        }
        else if(c == '#') {
            ans += ans;     
        }
        else if(c == '%') {
            reverse(ans.begin(), ans.end());
        }
        else {
            ans.push_back(c); 
        }
    }
    return ans;
}

int main() {
    string input = "abc*d#%";
    cout << "Result: " << processStr(input) << endl; 
    return 0;
}
