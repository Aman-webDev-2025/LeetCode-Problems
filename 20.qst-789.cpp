#include <bits/stdc++.h>
using namespace std;
bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
    int xapna=target[0];
    int yapna=target[1];
    int dist=abs(yapna)+abs(xapna);
    for( auto i:ghosts){
        int d=abs(xapna-i[0])+abs(yapna-i[1]);
        if(d<=dist){
            return false;
        }
    }
    return true;
}
int main() {
    vector<vector<int>>ghosts={{1,0},{0,3}};
    vector<int> target={1,0};
    cout<<escapeGhosts(ghosts,target)<<endl;
    return 0;
}