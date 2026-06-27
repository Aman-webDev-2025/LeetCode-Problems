#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(b){
        a=a%b;
        swap(a,b);
    }
    return a;
}
int mirrorReflection(int p, int q) {
    int lcm=(p*q)/gcd(p,q);
    int m=lcm/p;
    int n=lcm/q;
    if(m%2==0 and n%2==1) return 0;
    if(m%2==1 and n%2==1) return 1;
    if (m%2==1 and n%2==0) return 2;
    return -1;
}
int main() {
    cout<<mirrorReflection(2,1)<<endl;
    return 0;
}