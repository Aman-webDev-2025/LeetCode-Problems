#include <bits/stdc++.h>
using namespace std;
string largestNumber(vector<int>& nums) {
    vector<string> arr;
    for(int x: nums){
        arr.push_back(to_string(x));
    }
    sort(arr.begin(), arr.end(),
        [](const string &a, const string &b)
        {
            return a + b > b + a;
        });
    if(arr[0]=="0"){
        return "0";
    }
    string ans;
    for(const string &s: arr){
        ans+=s;
    }
    return ans;
}
int main()
{
    vector<int> arr(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    
    string ans=largestNumber(arr);
    cout<<ans<<endl;
    return 0;
}