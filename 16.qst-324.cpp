#include <bits/stdc++.h>
using namespace std;
void wiggleSort(vector<int>& nums) {
    int n=nums.size();
    vector<int> s=nums;
    sort(s.begin(),s.end());
    int e=n-1;
    int m=(n-1)/2;
    int i=0;
    while(i<n){
        nums[i]=s[m];
        i+=2;
        m--;
    }
    i=1;
    while(i<n){
        nums[i]=s[e];
        i+=2;
        e--;
    }
    
}
int main() {
    vector<int> nums={1,5,4,1,1,6};
    wiggleSort(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}